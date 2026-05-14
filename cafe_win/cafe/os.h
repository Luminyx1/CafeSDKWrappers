#pragma once

#include <ninTexUtils/types.h>

#ifndef NDEBUG
#define OSReport printf
#else
#define OSReport(...)
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
