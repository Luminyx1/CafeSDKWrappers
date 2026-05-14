#pragma once

#include <ninTexUtils/types.h>

#ifdef __cplusplus
#include <cstdio>
#else
#include <stdio.h>
#endif

#ifdef NDEBUG
#define OSReport(...)
#else
#define OSReport printf
#endif

#ifdef __cplusplus
extern "C"
{
#endif

inline u32 OSGetCoreId()
{
    return 1;
}

#ifdef __cplusplus
}
#endif
