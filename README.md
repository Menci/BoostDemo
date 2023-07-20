```
git submodule update --init && git submodule foreach --recursive git submodule update --init
mkdir build && cd build
cmake ..
make -j
./my_program
```
