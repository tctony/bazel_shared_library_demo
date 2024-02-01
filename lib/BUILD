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
        "-DLIB_IMPLEMENTATION=1",
    ],
)

cc_binary(
    name = "lib_shared",
    linkshared = True,
    deps = [
        ":lib",
    ],
)
