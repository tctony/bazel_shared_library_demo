package(default_visibility = ["//main:__pkg__"])

cc_library(
    name = "lib",
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
)

cc_binary(
    name = "lib_shared",
    linkshared = 1,
    deps = [
        ":lib",
    ],
)

cc_library(
    name = "lib_shared_wrapper",
    srcs = [
        ":lib_shared",
    ],
    hdrs = [
        "export.h",
        "lib.h",
    ],
)
