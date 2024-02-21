A simple demo that show how to compile shared library and link with executable using bazel and cmake.

### bazel
```
bazelisk build //...
```

### cmake
```
mkdir build && cd build
cmake -DCMAKE_BUILD_TYPE=Debug -DCMAKE_EXPORT_COMPILE_COMMANDS=ON ..
cmake --build .
```

