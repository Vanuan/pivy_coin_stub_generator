# pivy_coin_stub_generator
Generator for Coin3D *.pyi files

This is a project to solve this pivy issue: https://github.com/coin3d/pivy/issues/71

## CppHeaderParser
```
pip install robotpy-cppheaderparser
```

Configure coin3d to genarate coin_build:
```
cmake -Hcoin -Bcoin_build -G "Unix Makefiles" -DCMAKE_INSTALL_PREFIX=/usr/local
```
Preprocess C++ header file using one of two approaches (pip install pcpp vs gcc):
```
pcpp -I coin/include/ -I /usr/lib/gcc/x86_64-linux-gnu/8/include -I /usr/lib/gcc/x86_64-linux-gnu/8/include-fixed -I /usr/include/x86_64-linux-gnu/ -I /usr/local/include/x86_64-linux-gnu -I /usr/local/include/ -I /usr/include -I coin_build/include/ coin/include/Inventor/nodes/SoNodes.h > coin_SoNode.h
```
```
gcc -E -I coin/include/-I coin_build/include/ coin/include/Inventor/nodes/SoNodes.h > coin_SoNode.h
```

Run the generator:
```
./docker/run.sh python3 generate_stubs.py  > ../python-stubs/stubs/pivy/coin/__init__.pyi
```
