#pragma once

#if FOO_COMPILING
#define FOO_DLL_EXPORT __declspec(dllexport)
#else
#define FOO_DLL_EXPORT __declspec(dllimport)
#endif  // FOO_COMPILING

FOO_DLL_EXPORT void PrintMagic();
