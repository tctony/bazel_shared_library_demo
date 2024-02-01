add_library(lib STATIC lib.cc)

add_library(lib_shared SHARED lib.cc)

target_compile_options(lib_shared PRIVATE
  -DLIB_IMPLEMENTATION=1
  -fvisibility=hidden
  -fvisibility-inlines-hidden
  -fPIC)
