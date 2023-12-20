#!/usr/bin/env bash
# Author: rasmushyldgaard (20-12-2023)
set -e

mkdir -p build
rm -rf ./build/*.o
for f in $(find . -name \*.cpp); do
    echo "Compiling $f ..."
    g++ -c $f
    mv $(basename "$f" .cpp).o build/
done

echo "Linking all .o files in build/ to card_game.exe ..."
g++ -o card_game.exe $(ls -1 build/*.o)
