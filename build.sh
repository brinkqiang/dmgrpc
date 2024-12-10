#!/bin/bash

# vcpkg install abseil protobuf zlib c-ares re2

rm -rf build
mkdir build
pushd build
cmake -DCMAKE_BUILD_TYPE=relwithdebinfo ..
cmake --build . --config relwithdebinfo -- -j$(nproc)

popd

# popd

# echo continue && read -n 1
