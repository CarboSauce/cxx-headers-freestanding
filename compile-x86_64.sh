#!/usr/bin/env bash

export TARGET=x86_64-elf
export OUT_DIR=./out/build
export GCC_DIR=./out/gcc/
export BINUTILS_DIR=./out/binutils/

if [ $# -ne 1 ]; then
    echo "need an argument"
    exit 1
fi

./compile.sh $1
