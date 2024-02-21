lib_name = "lib"
shared_lib_name = "lib_shared"
shared_lib_interface = "lib_shared_interface"
shared_lib_import = "lib_shared_import"
shared_lib_wrapper = "lib_shared_wrapper"

cc_library(
    name = lib_name,
    srcs = ["lib.cc"],
    hdrs = [
        "export.h",
        "lib.h",
    ],
    copts = [
        "-fvisibility=hidden",
        "-fvisibility-inlines-hidden",
    ],
    defines = ["LIB_IMPLEMENTATION=1"],
    alwayslink = 1,
    visibility = ["//main:__pkg__"],
)

cc_binary(
    name = shared_lib_name,
    linkshared = 1,
    deps = [
        ":lib",
    ],
    visibility = ["//main:__pkg__"],
)

# Get the import library for the dll
filegroup(
    name = shared_lib_interface,
    srcs = [":" + shared_lib_name],
    output_group = "interface_library",
)

cc_import(
    name = shared_lib_import,
    shared_library = ":" + shared_lib_name,
    interface_library = ":" + shared_lib_interface,
)

cc_library(
    name = shared_lib_wrapper,
    deps = [
        ":" + shared_lib_import,
    ],
    hdrs = [
        "export.h",
        "lib.h",
    ],
    visibility = ["//main:__pkg__"],
)
