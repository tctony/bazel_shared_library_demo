package(default_visibility = ["//main:__pkg__"])

cc_library(
    name = "lib",
    srcs = ["lib.cc"],
    hdrs = ["lib.h"],
)

cc_binary(
    name = "lib_shared",
    linkopts = ["-Wl,--version-script,$(location version-script.lds)"],
    linkshared = True,
    deps = [
        "version-script.lds",
        ":lib",
    ],
)
