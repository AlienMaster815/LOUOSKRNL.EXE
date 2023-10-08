// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_0_H
#define WINRT_Windows_Graphics_0_H
WINRT_EXPORT namespace winrt::Windows::Graphics
{
    struct IGeometrySource2D;
    struct DisplayAdapterId;
    struct DisplayId;
    struct PointInt32;
    struct RectInt32;
    struct SizeInt32;
}
namespace winrt::impl
{
    template <> struct category<Windows::Graphics::IGeometrySource2D>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::DisplayAdapterId>{ using type = struct_category<uint32_t, int32_t>; };
    template <> struct category<Windows::Graphics::DisplayId>{ using type = struct_category<uint64_t>; };
    template <> struct category<Windows::Graphics::PointInt32>{ using type = struct_category<int32_t, int32_t>; };
    template <> struct category<Windows::Graphics::RectInt32>{ using type = struct_category<int32_t, int32_t, int32_t, int32_t>; };
    template <> struct category<Windows::Graphics::SizeInt32>{ using type = struct_category<int32_t, int32_t>; };
    template <> inline constexpr auto& name_v<Windows::Graphics::DisplayAdapterId> = L"Windows.Graphics.DisplayAdapterId";
    template <> inline constexpr auto& name_v<Windows::Graphics::DisplayId> = L"Windows.Graphics.DisplayId";
    template <> inline constexpr auto& name_v<Windows::Graphics::PointInt32> = L"Windows.Graphics.PointInt32";
    template <> inline constexpr auto& name_v<Windows::Graphics::RectInt32> = L"Windows.Graphics.RectInt32";
    template <> inline constexpr auto& name_v<Windows::Graphics::SizeInt32> = L"Windows.Graphics.SizeInt32";
    template <> inline constexpr auto& name_v<Windows::Graphics::IGeometrySource2D> = L"Windows.Graphics.IGeometrySource2D";
    template <> inline constexpr guid guid_v<Windows::Graphics::IGeometrySource2D>{ 0xCAFF7902,0x670C,0x4181,{ 0xA6,0x24,0xDA,0x97,0x72,0x03,0xB8,0x45 } }; // CAFF7902-670C-4181-A624-DA977203B845
    template <> struct abi<Windows::Graphics::IGeometrySource2D>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <typename D>
    struct consume_Windows_Graphics_IGeometrySource2D
    {
    };
    template <> struct consume<Windows::Graphics::IGeometrySource2D>
    {
        template <typename D> using type = consume_Windows_Graphics_IGeometrySource2D<D>;
    };
    struct struct_Windows_Graphics_DisplayAdapterId
    {
        uint32_t LowPart;
        int32_t HighPart;
    };
    template <> struct abi<Windows::Graphics::DisplayAdapterId>
    {
        using type = struct_Windows_Graphics_DisplayAdapterId;
    };
    struct struct_Windows_Graphics_DisplayId
    {
        uint64_t Value;
    };
    template <> struct abi<Windows::Graphics::DisplayId>
    {
        using type = struct_Windows_Graphics_DisplayId;
    };
    struct struct_Windows_Graphics_PointInt32
    {
        int32_t X;
        int32_t Y;
    };
    template <> struct abi<Windows::Graphics::PointInt32>
    {
        using type = struct_Windows_Graphics_PointInt32;
    };
    struct struct_Windows_Graphics_RectInt32
    {
        int32_t X;
        int32_t Y;
        int32_t Width;
        int32_t Height;
    };
    template <> struct abi<Windows::Graphics::RectInt32>
    {
        using type = struct_Windows_Graphics_RectInt32;
    };
    struct struct_Windows_Graphics_SizeInt32
    {
        int32_t Width;
        int32_t Height;
    };
    template <> struct abi<Windows::Graphics::SizeInt32>
    {
        using type = struct_Windows_Graphics_SizeInt32;
    };
}
#endif
