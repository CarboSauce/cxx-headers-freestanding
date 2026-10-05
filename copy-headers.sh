#!/usr/bin/env bash

set -ex

if [ -z "$TARGET" ]; then
    echo "Must specify target architecture"
    exit 1
fi

if [ -z "GCC_INC_DIR" ]; then
    echo "Must specify include directory of gcc build include"
    exit 1
fi

if [ -z "DEST_DIR" ]; then
    echo "Must specify destination directory"
    exit 1
fi

GCC_INC_DIR=$(realpath $GCC_INC_DIR)
DEST_DIR=$(realpath $DEST_DIR)


if [[ -d "$GCC_INC_DIR/" ]]; then
    cp -rpav "$GCC_INC_DIR/" "$DEST_DIR/"
else
    echo "Includes not found in $GCC_INC_DIR"
fi

if [[ -d "$GCC_INC_DIR/$TARGET/bits" ]]; then
    cp -av "$GCC_INC_DIR/$TARGET/bits" "$DEST_DIR/"
else
    echo "Includes not found in $GCC_INC_DIR"
fi

if [[ -d "$GCC_INC_DIR/$TARGET/ext" ]]; then
    cp -av "$GCC_INC_DIR/$TARGET/ext" "$DEST_DIR/"
else
    echo "Includes not found in $GCC_INC_DIR"
fi
