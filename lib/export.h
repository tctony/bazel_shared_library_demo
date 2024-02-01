#pragma once

#if _WIN32

#ifdef LIB_IMPLEMENTATION
#define LIB_EXPORT __declspec(dllexport)
#elif defined(LIB_BEING_USED)
#define LIB_EXPORT __declspec(dllimport)
#else
#define  LIB_EXPORT
#endif // LIB_IMPLEMENTATION

#else // !_WIN32

#ifdef LIB_IMPLEMENTATION
#define LIB_EXPORT __attribute__((visibility("default")))
#else
#define LIB_EXPORT
#endif

#endif // _WIN32
