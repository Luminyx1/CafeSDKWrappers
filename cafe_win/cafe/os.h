#pragma once

#include <types.h>

#define OSReport printf

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
