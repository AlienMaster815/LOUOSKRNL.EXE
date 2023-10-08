/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    Wdfresource.h

Environment:

    user mode

NOTE: This header is generated by stubwork.

      To modify contents, add or remove <shared> or <umdf>
      tags in the corresponding .x and .y template files.

--*/

#pragma once

#ifndef WDF_EXTERN_C
  #ifdef __cplusplus
    #define WDF_EXTERN_C       extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END   }
  #else
    #define WDF_EXTERN_C
    #define WDF_EXTERN_C_START
    #define WDF_EXTERN_C_END
  #endif
#endif

WDF_EXTERN_C_START

#define WDF_INSERT_AT_END ((ULONG) -1)

//
// WDF Function: WdfCmResourceListGetCount
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
ULONG
(NTAPI *PFN_WDFCMRESOURCELISTGETCOUNT)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFCMRESLIST List
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
FORCEINLINE
ULONG
WdfCmResourceListGetCount(
    _In_
    WDFCMRESLIST List
    )
{
    return ((PFN_WDFCMRESOURCELISTGETCOUNT) WdfFunctions[WdfCmResourceListGetCountTableIndex])(WdfDriverGlobals, List);
}


//
// WDF Function: WdfCmResourceListGetDescriptor
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
PCM_PARTIAL_RESOURCE_DESCRIPTOR
(NTAPI *PFN_WDFCMRESOURCELISTGETDESCRIPTOR)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFCMRESLIST List,
    _In_
    ULONG Index
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
FORCEINLINE
PCM_PARTIAL_RESOURCE_DESCRIPTOR
WdfCmResourceListGetDescriptor(
    _In_
    WDFCMRESLIST List,
    _In_
    ULONG Index
    )
{
    return ((PFN_WDFCMRESOURCELISTGETDESCRIPTOR) WdfFunctions[WdfCmResourceListGetDescriptorTableIndex])(WdfDriverGlobals, List, Index);
}

WDF_EXTERN_C_END

