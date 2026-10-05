#!/usr/bin/env bash

set -ex

if [ -z "$TARGET" ]; then
    echo "Must specify target architecture"
    exit 1
fi

if [ -z "$OUT_DIR" ]; then
    echo "Must specify OUT_DIR which is a directory of compiled binaries"
    exit 1
fi

if [ -z "$GCC_DIR" ]; then
    echo "Must specify GCC_DIR which is a directory of gcc source code"
    exit 1
fi

if [ -z "$BINUTILS_DIR" ]; then
    echo "Must specify BINUTILS_DIR which is a directory of binutils source code"
    exit 1
fi

if [ -z "$CORECOUNT" ]; then
    CORECOUNT=$(nproc --all)
fi

if [ $# -ne 1 ]; then
    echo "Needs 1 parameters"
    echo "either of binutils, gcc, libstdcxx, gcc-with-libstdcxx, all, dry-run"
    exit 1
fi

OUT_DIR=$(realpath $OUT_DIR)
PREFIX=$OUT_DIR/out
GCC_DIR=$(realpath $GCC_DIR)
BINUTILS_DIR=$(realpath $BINUTILS_DIR)

compile_binutils() {
    mkdir -p $OUT_DIR/build-binutils
    cd $OUT_DIR/build-binutils
    $BINUTILS_DIR/configure \
        --target=$TARGET \
        --prefix=$PREFIX \
        --with-sysroot \
        --disable-nls \
        --disable-werror \
        --enable-default-execstack=no

    make -j $CORECOUNT
    make install
}

compile_gcc() {
    mkdir -p $OUT_DIR/build-gcc
    cd $OUT_DIR/build-gcc

    $GCC_DIR/configure \
        --disable-nls \
        --disable-tls \
        --enable-languages=c,c++ \
        --target="$TARGET" \
        --prefix="$PREFIX" \
        --without-headers

    make all-gcc -j $CORECOUNT
    make all-target-libgcc -j $CORECOUNT
    make install-gcc
    make install-target-libgcc
}

compile_libstdcxx() {
    mkdir -p $OUT_DIR/build-libstdcxx
    cd $OUT_DIR/build-libstdcxx

    $GCC_DIR/libstdc++-v3/configure \
        --disable-nls \
        --disable-tls \
        --disable-multilib \
        --disable-libstdcxx-verbose \
        --disable-libstdcxx-threads \
        --disable-libstdcxx-filesystem-ts \
        --disable-libstdcxx-backtrace \
        --disable-libstdcxx-dual-abi \
        --without-libstdcxx-zoneinfo \
        --host="$TARGET" \
        --prefix="$PREFIX" \
        --without-headers

    make install-data
}

dry_run() {
    echo "VARS:"
    echo OUT_DIR=$OUT_DIR
    echo CORECOUNT=$CORECOUNT
    echo GCC_DIR=$GCC_DIR
    echo BINUTILS_DIR=$BINUTILS_DIR
    echo TARGET=$TARGET
    echo PREFIX=$PREFIX
    echo ARG="$1"
}

if [ "$1" == "binutils" ]; then
    compile_binutils
fi

if [ "$1" == "gcc" ]; then
    compile_gcc
fi

if [ "$1" == "libstdcxx" ]; then
    compile_libstdcxx
fi

if [ "$1" == "gcc-with-libstdcxx" ]; then
    compile_gcc
    compile_libstdcxx
fi

if [ "$1" == "all" ]; then
    compile_binutils
    compile_gcc
    compile_libstdcxx
fi

if [ "$1" == "dry-run" ]; then
    dry_run
fi

