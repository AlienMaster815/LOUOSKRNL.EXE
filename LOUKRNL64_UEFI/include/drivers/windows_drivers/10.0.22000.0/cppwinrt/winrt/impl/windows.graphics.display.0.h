// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_Display_0_H
#define WINRT_Windows_Graphics_Display_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    template <typename T> struct __declspec(empty_bases) IReference;
    struct Point;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::Graphics
{
    struct DisplayId;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStream;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Display
{
    enum class AdvancedColorKind : int32_t
    {
        StandardDynamicRange = 0,
        WideColorGamut = 1,
        HighDynamicRange = 2,
    };
    enum class DisplayBrightnessOverrideOptions : uint32_t
    {
        None = 0,
        UseDimmedPolicyWhenBatteryIsLow = 0x1,
    };
    enum class DisplayBrightnessOverrideScenario : int32_t
    {
        IdleBrightness = 0,
        BarcodeReadingBrightness = 1,
        FullBrightness = 2,
    };
    enum class DisplayBrightnessScenario : int32_t
    {
        DefaultBrightness = 0,
        IdleBrightness = 1,
        BarcodeReadingBrightness = 2,
        FullBrightness = 3,
    };
    enum class DisplayColorOverrideScenario : int32_t
    {
        Accurate = 0,
    };
    enum class DisplayOrientations : uint32_t
    {
        None = 0,
        Landscape = 0x1,
        Portrait = 0x2,
        LandscapeFlipped = 0x4,
        PortraitFlipped = 0x8,
    };
    enum class HdrMetadataFormat : int32_t
    {
        Hdr10 = 0,
        Hdr10Plus = 1,
    };
    enum class ResolutionScale : int32_t
    {
        Invalid = 0,
        Scale100Percent = 100,
        Scale120Percent = 120,
        Scale125Percent = 125,
        Scale140Percent = 140,
        Scale150Percent = 150,
        Scale160Percent = 160,
        Scale175Percent = 175,
        Scale180Percent = 180,
        Scale200Percent = 200,
        Scale225Percent = 225,
        Scale250Percent = 250,
        Scale300Percent = 300,
        Scale350Percent = 350,
        Scale400Percent = 400,
        Scale450Percent = 450,
        Scale500Percent = 500,
    };
    struct IAdvancedColorInfo;
    struct IBrightnessOverride;
    struct IBrightnessOverrideSettings;
    struct IBrightnessOverrideSettingsStatics;
    struct IBrightnessOverrideStatics;
    struct IColorOverrideSettings;
    struct IColorOverrideSettingsStatics;
    struct IDisplayEnhancementOverride;
    struct IDisplayEnhancementOverrideCapabilities;
    struct IDisplayEnhancementOverrideCapabilitiesChangedEventArgs;
    struct IDisplayEnhancementOverrideStatics;
    struct IDisplayInformation;
    struct IDisplayInformation2;
    struct IDisplayInformation3;
    struct IDisplayInformation4;
    struct IDisplayInformation5;
    struct IDisplayInformationStatics;
    struct IDisplayPropertiesStatics;
    struct IDisplayServices;
    struct IDisplayServicesStatics;
    struct AdvancedColorInfo;
    struct BrightnessOverride;
    struct BrightnessOverrideSettings;
    struct ColorOverrideSettings;
    struct DisplayEnhancementOverride;
    struct DisplayEnhancementOverrideCapabilities;
    struct DisplayEnhancementOverrideCapabilitiesChangedEventArgs;
    struct DisplayInformation;
    struct DisplayProperties;
    struct DisplayServices;
    struct NitRange;
    struct DisplayPropertiesEventHandler;
}
namespace winrt::impl
{
    template <> struct category<Windows::Graphics::Display::IAdvancedColorInfo>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Display::IBrightnessOverride>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Display::IBrightnessOverrideSettings>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Display::IBrightnessOverrideSettingsStatics>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Display::IBrightnessOverrideStatics>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Display::IColorOverrideSettings>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Display::IColorOverrideSettingsStatics>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Display::IDisplayEnhancementOverride>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilities>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilitiesChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Display::IDisplayEnhancementOverrideStatics>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Display::IDisplayInformation>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Display::IDisplayInformation2>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Display::IDisplayInformation3>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Display::IDisplayInformation4>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Display::IDisplayInformation5>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Display::IDisplayInformationStatics>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Display::IDisplayPropertiesStatics>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Display::IDisplayServices>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Display::IDisplayServicesStatics>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Display::AdvancedColorInfo>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Display::BrightnessOverride>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Display::BrightnessOverrideSettings>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Display::ColorOverrideSettings>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Display::DisplayEnhancementOverride>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Display::DisplayEnhancementOverrideCapabilities>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Display::DisplayEnhancementOverrideCapabilitiesChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Display::DisplayInformation>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Display::DisplayProperties>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Display::DisplayServices>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Display::AdvancedColorKind>{ using type = enum_category; };
    template <> struct category<Windows::Graphics::Display::DisplayBrightnessOverrideOptions>{ using type = enum_category; };
    template <> struct category<Windows::Graphics::Display::DisplayBrightnessOverrideScenario>{ using type = enum_category; };
    template <> struct category<Windows::Graphics::Display::DisplayBrightnessScenario>{ using type = enum_category; };
    template <> struct category<Windows::Graphics::Display::DisplayColorOverrideScenario>{ using type = enum_category; };
    template <> struct category<Windows::Graphics::Display::DisplayOrientations>{ using type = enum_category; };
    template <> struct category<Windows::Graphics::Display::HdrMetadataFormat>{ using type = enum_category; };
    template <> struct category<Windows::Graphics::Display::ResolutionScale>{ using type = enum_category; };
    template <> struct category<Windows::Graphics::Display::NitRange>{ using type = struct_category<float, float, float>; };
    template <> struct category<Windows::Graphics::Display::DisplayPropertiesEventHandler>{ using type = delegate_category; };
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::AdvancedColorInfo> = L"Windows.Graphics.Display.AdvancedColorInfo";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::BrightnessOverride> = L"Windows.Graphics.Display.BrightnessOverride";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::BrightnessOverrideSettings> = L"Windows.Graphics.Display.BrightnessOverrideSettings";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::ColorOverrideSettings> = L"Windows.Graphics.Display.ColorOverrideSettings";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::DisplayEnhancementOverride> = L"Windows.Graphics.Display.DisplayEnhancementOverride";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::DisplayEnhancementOverrideCapabilities> = L"Windows.Graphics.Display.DisplayEnhancementOverrideCapabilities";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::DisplayEnhancementOverrideCapabilitiesChangedEventArgs> = L"Windows.Graphics.Display.DisplayEnhancementOverrideCapabilitiesChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::DisplayInformation> = L"Windows.Graphics.Display.DisplayInformation";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::DisplayProperties> = L"Windows.Graphics.Display.DisplayProperties";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::DisplayServices> = L"Windows.Graphics.Display.DisplayServices";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::AdvancedColorKind> = L"Windows.Graphics.Display.AdvancedColorKind";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::DisplayBrightnessOverrideOptions> = L"Windows.Graphics.Display.DisplayBrightnessOverrideOptions";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::DisplayBrightnessOverrideScenario> = L"Windows.Graphics.Display.DisplayBrightnessOverrideScenario";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::DisplayBrightnessScenario> = L"Windows.Graphics.Display.DisplayBrightnessScenario";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::DisplayColorOverrideScenario> = L"Windows.Graphics.Display.DisplayColorOverrideScenario";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::DisplayOrientations> = L"Windows.Graphics.Display.DisplayOrientations";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::HdrMetadataFormat> = L"Windows.Graphics.Display.HdrMetadataFormat";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::ResolutionScale> = L"Windows.Graphics.Display.ResolutionScale";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::NitRange> = L"Windows.Graphics.Display.NitRange";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::IAdvancedColorInfo> = L"Windows.Graphics.Display.IAdvancedColorInfo";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::IBrightnessOverride> = L"Windows.Graphics.Display.IBrightnessOverride";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::IBrightnessOverrideSettings> = L"Windows.Graphics.Display.IBrightnessOverrideSettings";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::IBrightnessOverrideSettingsStatics> = L"Windows.Graphics.Display.IBrightnessOverrideSettingsStatics";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::IBrightnessOverrideStatics> = L"Windows.Graphics.Display.IBrightnessOverrideStatics";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::IColorOverrideSettings> = L"Windows.Graphics.Display.IColorOverrideSettings";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::IColorOverrideSettingsStatics> = L"Windows.Graphics.Display.IColorOverrideSettingsStatics";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::IDisplayEnhancementOverride> = L"Windows.Graphics.Display.IDisplayEnhancementOverride";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilities> = L"Windows.Graphics.Display.IDisplayEnhancementOverrideCapabilities";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilitiesChangedEventArgs> = L"Windows.Graphics.Display.IDisplayEnhancementOverrideCapabilitiesChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::IDisplayEnhancementOverrideStatics> = L"Windows.Graphics.Display.IDisplayEnhancementOverrideStatics";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::IDisplayInformation> = L"Windows.Graphics.Display.IDisplayInformation";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::IDisplayInformation2> = L"Windows.Graphics.Display.IDisplayInformation2";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::IDisplayInformation3> = L"Windows.Graphics.Display.IDisplayInformation3";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::IDisplayInformation4> = L"Windows.Graphics.Display.IDisplayInformation4";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::IDisplayInformation5> = L"Windows.Graphics.Display.IDisplayInformation5";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::IDisplayInformationStatics> = L"Windows.Graphics.Display.IDisplayInformationStatics";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::IDisplayPropertiesStatics> = L"Windows.Graphics.Display.IDisplayPropertiesStatics";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::IDisplayServices> = L"Windows.Graphics.Display.IDisplayServices";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::IDisplayServicesStatics> = L"Windows.Graphics.Display.IDisplayServicesStatics";
    template <> inline constexpr auto& name_v<Windows::Graphics::Display::DisplayPropertiesEventHandler> = L"Windows.Graphics.Display.DisplayPropertiesEventHandler";
    template <> inline constexpr guid guid_v<Windows::Graphics::Display::IAdvancedColorInfo>{ 0x8797DCFB,0xB229,0x4081,{ 0xAE,0x9A,0x2C,0xC8,0x5E,0x34,0xAD,0x6A } }; // 8797DCFB-B229-4081-AE9A-2CC85E34AD6A
    template <> inline constexpr guid guid_v<Windows::Graphics::Display::IBrightnessOverride>{ 0x96C9621A,0xC143,0x4392,{ 0xBE,0xDD,0x4A,0x7E,0x95,0x74,0xC8,0xFD } }; // 96C9621A-C143-4392-BEDD-4A7E9574C8FD
    template <> inline constexpr guid guid_v<Windows::Graphics::Display::IBrightnessOverrideSettings>{ 0xD112AB2A,0x7604,0x4DBA,{ 0xBC,0xF8,0x4B,0x6F,0x49,0x50,0x2C,0xB0 } }; // D112AB2A-7604-4DBA-BCF8-4B6F49502CB0
    template <> inline constexpr guid guid_v<Windows::Graphics::Display::IBrightnessOverrideSettingsStatics>{ 0xD487DC90,0x6F74,0x440B,{ 0xB3,0x83,0x5F,0xE9,0x6C,0xF0,0x0B,0x0F } }; // D487DC90-6F74-440B-B383-5FE96CF00B0F
    template <> inline constexpr guid guid_v<Windows::Graphics::Display::IBrightnessOverrideStatics>{ 0x03A7B9ED,0xE1F1,0x4A68,{ 0xA1,0x1F,0x94,0x6A,0xD8,0xCE,0x53,0x93 } }; // 03A7B9ED-E1F1-4A68-A11F-946AD8CE5393
    template <> inline constexpr guid guid_v<Windows::Graphics::Display::IColorOverrideSettings>{ 0xFBEFA134,0x4A81,0x4C4D,{ 0xA5,0xB6,0x7D,0x1B,0x5C,0x4B,0xD0,0x0B } }; // FBEFA134-4A81-4C4D-A5B6-7D1B5C4BD00B
    template <> inline constexpr guid guid_v<Windows::Graphics::Display::IColorOverrideSettingsStatics>{ 0xB068E05F,0xC41F,0x4AC9,{ 0xAF,0xAB,0x82,0x7A,0xB6,0x24,0x8F,0x9A } }; // B068E05F-C41F-4AC9-AFAB-827AB6248F9A
    template <> inline constexpr guid guid_v<Windows::Graphics::Display::IDisplayEnhancementOverride>{ 0x429594CF,0xD97A,0x4B02,{ 0xA4,0x28,0x5C,0x42,0x92,0xF7,0xF5,0x22 } }; // 429594CF-D97A-4B02-A428-5C4292F7F522
    template <> inline constexpr guid guid_v<Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilities>{ 0x457060DE,0xEE5A,0x47B7,{ 0x99,0x18,0x1E,0x51,0xE8,0x12,0xCC,0xC8 } }; // 457060DE-EE5A-47B7-9918-1E51E812CCC8
    template <> inline constexpr guid guid_v<Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilitiesChangedEventArgs>{ 0xDB61E664,0x15FA,0x49DA,{ 0x8B,0x77,0x07,0xDB,0xD2,0xAF,0x58,0x5D } }; // DB61E664-15FA-49DA-8B77-07DBD2AF585D
    template <> inline constexpr guid guid_v<Windows::Graphics::Display::IDisplayEnhancementOverrideStatics>{ 0xCF5B7EC1,0x9791,0x4453,{ 0xB0,0x13,0x29,0xB6,0xF7,0x78,0xE5,0x19 } }; // CF5B7EC1-9791-4453-B013-29B6F778E519
    template <> inline constexpr guid guid_v<Windows::Graphics::Display::IDisplayInformation>{ 0xBED112AE,0xADC3,0x4DC9,{ 0xAE,0x65,0x85,0x1F,0x4D,0x7D,0x47,0x99 } }; // BED112AE-ADC3-4DC9-AE65-851F4D7D4799
    template <> inline constexpr guid guid_v<Windows::Graphics::Display::IDisplayInformation2>{ 0x4DCD0021,0xFAD1,0x4B8E,{ 0x8E,0xDF,0x77,0x58,0x87,0xB8,0xBF,0x19 } }; // 4DCD0021-FAD1-4B8E-8EDF-775887B8BF19
    template <> inline constexpr guid guid_v<Windows::Graphics::Display::IDisplayInformation3>{ 0xDB15011D,0x0F09,0x4466,{ 0x8F,0xF3,0x11,0xDE,0x9A,0x3C,0x92,0x9A } }; // DB15011D-0F09-4466-8FF3-11DE9A3C929A
    template <> inline constexpr guid guid_v<Windows::Graphics::Display::IDisplayInformation4>{ 0xC972CE2F,0x1242,0x46BE,{ 0xB5,0x36,0xE1,0xAA,0xFE,0x9E,0x7A,0xCF } }; // C972CE2F-1242-46BE-B536-E1AAFE9E7ACF
    template <> inline constexpr guid guid_v<Windows::Graphics::Display::IDisplayInformation5>{ 0x3A5442DC,0x2CDE,0x4A8D,{ 0x80,0xD1,0x21,0xDC,0x5A,0xDC,0xC1,0xAA } }; // 3A5442DC-2CDE-4A8D-80D1-21DC5ADCC1AA
    template <> inline constexpr guid guid_v<Windows::Graphics::Display::IDisplayInformationStatics>{ 0xC6A02A6C,0xD452,0x44DC,{ 0xBA,0x07,0x96,0xF3,0xC6,0xAD,0xF9,0xD1 } }; // C6A02A6C-D452-44DC-BA07-96F3C6ADF9D1
    template <> inline constexpr guid guid_v<Windows::Graphics::Display::IDisplayPropertiesStatics>{ 0x6937ED8D,0x30EA,0x4DED,{ 0x82,0x71,0x45,0x53,0xFF,0x02,0xF6,0x8A } }; // 6937ED8D-30EA-4DED-8271-4553FF02F68A
    template <> inline constexpr guid guid_v<Windows::Graphics::Display::IDisplayServices>{ 0x1B54F32B,0x890D,0x5747,{ 0xBD,0x26,0xFD,0xBD,0xEB,0x0C,0x8A,0x71 } }; // 1B54F32B-890D-5747-BD26-FDBDEB0C8A71
    template <> inline constexpr guid guid_v<Windows::Graphics::Display::IDisplayServicesStatics>{ 0xDC2096BF,0x730A,0x5560,{ 0xB4,0x61,0x91,0xC1,0x3D,0x69,0x2E,0x0C } }; // DC2096BF-730A-5560-B461-91C13D692E0C
    template <> inline constexpr guid guid_v<Windows::Graphics::Display::DisplayPropertiesEventHandler>{ 0xDBDD8B01,0xF1A1,0x46D1,{ 0x9E,0xE3,0x54,0x3B,0xCC,0x99,0x59,0x80 } }; // DBDD8B01-F1A1-46D1-9EE3-543BCC995980
    template <> struct default_interface<Windows::Graphics::Display::AdvancedColorInfo>{ using type = Windows::Graphics::Display::IAdvancedColorInfo; };
    template <> struct default_interface<Windows::Graphics::Display::BrightnessOverride>{ using type = Windows::Graphics::Display::IBrightnessOverride; };
    template <> struct default_interface<Windows::Graphics::Display::BrightnessOverrideSettings>{ using type = Windows::Graphics::Display::IBrightnessOverrideSettings; };
    template <> struct default_interface<Windows::Graphics::Display::ColorOverrideSettings>{ using type = Windows::Graphics::Display::IColorOverrideSettings; };
    template <> struct default_interface<Windows::Graphics::Display::DisplayEnhancementOverride>{ using type = Windows::Graphics::Display::IDisplayEnhancementOverride; };
    template <> struct default_interface<Windows::Graphics::Display::DisplayEnhancementOverrideCapabilities>{ using type = Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilities; };
    template <> struct default_interface<Windows::Graphics::Display::DisplayEnhancementOverrideCapabilitiesChangedEventArgs>{ using type = Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilitiesChangedEventArgs; };
    template <> struct default_interface<Windows::Graphics::Display::DisplayInformation>{ using type = Windows::Graphics::Display::IDisplayInformation; };
    template <> struct default_interface<Windows::Graphics::Display::DisplayServices>{ using type = Windows::Graphics::Display::IDisplayServices; };
    template <> struct abi<Windows::Graphics::Display::IAdvancedColorInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CurrentAdvancedColorKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_RedPrimary(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_GreenPrimary(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_BluePrimary(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_WhitePoint(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_MaxLuminanceInNits(float*) noexcept = 0;
            virtual int32_t __stdcall get_MinLuminanceInNits(float*) noexcept = 0;
            virtual int32_t __stdcall get_MaxAverageFullFrameLuminanceInNits(float*) noexcept = 0;
            virtual int32_t __stdcall get_SdrWhiteLevelInNits(float*) noexcept = 0;
            virtual int32_t __stdcall IsHdrMetadataFormatCurrentlySupported(int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall IsAdvancedColorKindAvailable(int32_t, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IBrightnessOverride>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsOverrideActive(bool*) noexcept = 0;
            virtual int32_t __stdcall get_BrightnessLevel(double*) noexcept = 0;
            virtual int32_t __stdcall SetBrightnessLevel(double, uint32_t) noexcept = 0;
            virtual int32_t __stdcall SetBrightnessScenario(int32_t, uint32_t) noexcept = 0;
            virtual int32_t __stdcall GetLevelForScenario(int32_t, double*) noexcept = 0;
            virtual int32_t __stdcall StartOverride() noexcept = 0;
            virtual int32_t __stdcall StopOverride() noexcept = 0;
            virtual int32_t __stdcall add_IsSupportedChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_IsSupportedChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_IsOverrideActiveChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_IsOverrideActiveChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_BrightnessLevelChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BrightnessLevelChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IBrightnessOverrideSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DesiredLevel(double*) noexcept = 0;
            virtual int32_t __stdcall get_DesiredNits(float*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IBrightnessOverrideSettingsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromLevel(double, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromNits(float, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromDisplayBrightnessOverrideScenario(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IBrightnessOverrideStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefaultForSystem(void**) noexcept = 0;
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
            virtual int32_t __stdcall SaveForSystemAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IColorOverrideSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DesiredDisplayColorOverrideScenario(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IColorOverrideSettingsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromDisplayColorOverrideScenario(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IDisplayEnhancementOverride>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ColorOverrideSettings(void**) noexcept = 0;
            virtual int32_t __stdcall put_ColorOverrideSettings(void*) noexcept = 0;
            virtual int32_t __stdcall get_BrightnessOverrideSettings(void**) noexcept = 0;
            virtual int32_t __stdcall put_BrightnessOverrideSettings(void*) noexcept = 0;
            virtual int32_t __stdcall get_CanOverride(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsOverrideActive(bool*) noexcept = 0;
            virtual int32_t __stdcall GetCurrentDisplayEnhancementOverrideCapabilities(void**) noexcept = 0;
            virtual int32_t __stdcall RequestOverride() noexcept = 0;
            virtual int32_t __stdcall StopOverride() noexcept = 0;
            virtual int32_t __stdcall add_CanOverrideChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CanOverrideChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_IsOverrideActiveChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_IsOverrideActiveChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DisplayEnhancementOverrideCapabilitiesChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DisplayEnhancementOverrideCapabilitiesChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilities>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsBrightnessControlSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsBrightnessNitsControlSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall GetSupportedNitRanges(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilitiesChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Capabilities(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IDisplayEnhancementOverrideStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IDisplayInformation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CurrentOrientation(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NativeOrientation(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall add_OrientationChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_OrientationChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_ResolutionScale(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LogicalDpi(float*) noexcept = 0;
            virtual int32_t __stdcall get_RawDpiX(float*) noexcept = 0;
            virtual int32_t __stdcall get_RawDpiY(float*) noexcept = 0;
            virtual int32_t __stdcall add_DpiChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DpiChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_StereoEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall add_StereoEnabledChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StereoEnabledChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall GetColorProfileAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_ColorProfileChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ColorProfileChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IDisplayInformation2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RawPixelsPerViewPixel(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IDisplayInformation3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DiagonalSizeInInches(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IDisplayInformation4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ScreenWidthInRawPixels(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ScreenHeightInRawPixels(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IDisplayInformation5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAdvancedColorInfo(void**) noexcept = 0;
            virtual int32_t __stdcall add_AdvancedColorInfoChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AdvancedColorInfoChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IDisplayInformationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
            virtual int32_t __stdcall get_AutoRotationPreferences(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AutoRotationPreferences(uint32_t) noexcept = 0;
            virtual int32_t __stdcall add_DisplayContentsInvalidated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DisplayContentsInvalidated(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IDisplayPropertiesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CurrentOrientation(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NativeOrientation(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AutoRotationPreferences(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AutoRotationPreferences(uint32_t) noexcept = 0;
            virtual int32_t __stdcall add_OrientationChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_OrientationChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_ResolutionScale(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LogicalDpi(float*) noexcept = 0;
            virtual int32_t __stdcall add_LogicalDpiChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LogicalDpiChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_StereoEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall add_StereoEnabledChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StereoEnabledChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall GetColorProfileAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_ColorProfileChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ColorProfileChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DisplayContentsInvalidated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DisplayContentsInvalidated(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::IDisplayServices>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::Graphics::Display::IDisplayServicesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindAll(uint32_t* __resultSize, struct struct_Windows_Graphics_DisplayId**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Display::DisplayPropertiesEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IAdvancedColorInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Display::AdvancedColorKind) CurrentAdvancedColorKind() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) RedPrimary() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) GreenPrimary() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) BluePrimary() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) WhitePoint() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) MaxLuminanceInNits() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) MinLuminanceInNits() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) MaxAverageFullFrameLuminanceInNits() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) SdrWhiteLevelInNits() const;
        WINRT_IMPL_AUTO(bool) IsHdrMetadataFormatCurrentlySupported(Windows::Graphics::Display::HdrMetadataFormat const& format) const;
        WINRT_IMPL_AUTO(bool) IsAdvancedColorKindAvailable(Windows::Graphics::Display::AdvancedColorKind const& kind) const;
    };
    template <> struct consume<Windows::Graphics::Display::IAdvancedColorInfo>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IAdvancedColorInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IBrightnessOverride
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsSupported() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsOverrideActive() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) BrightnessLevel() const;
        WINRT_IMPL_AUTO(void) SetBrightnessLevel(double brightnessLevel, Windows::Graphics::Display::DisplayBrightnessOverrideOptions const& options) const;
        WINRT_IMPL_AUTO(void) SetBrightnessScenario(Windows::Graphics::Display::DisplayBrightnessScenario const& scenario, Windows::Graphics::Display::DisplayBrightnessOverrideOptions const& options) const;
        WINRT_IMPL_AUTO(double) GetLevelForScenario(Windows::Graphics::Display::DisplayBrightnessScenario const& scenario) const;
        WINRT_IMPL_AUTO(void) StartOverride() const;
        WINRT_IMPL_AUTO(void) StopOverride() const;
        WINRT_IMPL_AUTO(winrt::event_token) IsSupportedChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const& handler) const;
        using IsSupportedChanged_revoker = impl::event_revoker<Windows::Graphics::Display::IBrightnessOverride, &impl::abi_t<Windows::Graphics::Display::IBrightnessOverride>::remove_IsSupportedChanged>;
        [[nodiscard]] IsSupportedChanged_revoker IsSupportedChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) IsSupportedChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) IsOverrideActiveChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const& handler) const;
        using IsOverrideActiveChanged_revoker = impl::event_revoker<Windows::Graphics::Display::IBrightnessOverride, &impl::abi_t<Windows::Graphics::Display::IBrightnessOverride>::remove_IsOverrideActiveChanged>;
        [[nodiscard]] IsOverrideActiveChanged_revoker IsOverrideActiveChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) IsOverrideActiveChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) BrightnessLevelChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const& handler) const;
        using BrightnessLevelChanged_revoker = impl::event_revoker<Windows::Graphics::Display::IBrightnessOverride, &impl::abi_t<Windows::Graphics::Display::IBrightnessOverride>::remove_BrightnessLevelChanged>;
        [[nodiscard]] BrightnessLevelChanged_revoker BrightnessLevelChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) BrightnessLevelChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Graphics::Display::IBrightnessOverride>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IBrightnessOverride<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IBrightnessOverrideSettings
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) DesiredLevel() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) DesiredNits() const;
    };
    template <> struct consume<Windows::Graphics::Display::IBrightnessOverrideSettings>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IBrightnessOverrideSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IBrightnessOverrideSettingsStatics
    {
        WINRT_IMPL_AUTO(Windows::Graphics::Display::BrightnessOverrideSettings) CreateFromLevel(double level) const;
        WINRT_IMPL_AUTO(Windows::Graphics::Display::BrightnessOverrideSettings) CreateFromNits(float nits) const;
        WINRT_IMPL_AUTO(Windows::Graphics::Display::BrightnessOverrideSettings) CreateFromDisplayBrightnessOverrideScenario(Windows::Graphics::Display::DisplayBrightnessOverrideScenario const& overrideScenario) const;
    };
    template <> struct consume<Windows::Graphics::Display::IBrightnessOverrideSettingsStatics>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IBrightnessOverrideSettingsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IBrightnessOverrideStatics
    {
        WINRT_IMPL_AUTO(Windows::Graphics::Display::BrightnessOverride) GetDefaultForSystem() const;
        WINRT_IMPL_AUTO(Windows::Graphics::Display::BrightnessOverride) GetForCurrentView() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) SaveForSystemAsync(Windows::Graphics::Display::BrightnessOverride const& value) const;
    };
    template <> struct consume<Windows::Graphics::Display::IBrightnessOverrideStatics>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IBrightnessOverrideStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IColorOverrideSettings
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Display::DisplayColorOverrideScenario) DesiredDisplayColorOverrideScenario() const;
    };
    template <> struct consume<Windows::Graphics::Display::IColorOverrideSettings>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IColorOverrideSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IColorOverrideSettingsStatics
    {
        WINRT_IMPL_AUTO(Windows::Graphics::Display::ColorOverrideSettings) CreateFromDisplayColorOverrideScenario(Windows::Graphics::Display::DisplayColorOverrideScenario const& overrideScenario) const;
    };
    template <> struct consume<Windows::Graphics::Display::IColorOverrideSettingsStatics>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IColorOverrideSettingsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IDisplayEnhancementOverride
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Display::ColorOverrideSettings) ColorOverrideSettings() const;
        WINRT_IMPL_AUTO(void) ColorOverrideSettings(Windows::Graphics::Display::ColorOverrideSettings const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Display::BrightnessOverrideSettings) BrightnessOverrideSettings() const;
        WINRT_IMPL_AUTO(void) BrightnessOverrideSettings(Windows::Graphics::Display::BrightnessOverrideSettings const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanOverride() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsOverrideActive() const;
        WINRT_IMPL_AUTO(Windows::Graphics::Display::DisplayEnhancementOverrideCapabilities) GetCurrentDisplayEnhancementOverrideCapabilities() const;
        WINRT_IMPL_AUTO(void) RequestOverride() const;
        WINRT_IMPL_AUTO(void) StopOverride() const;
        WINRT_IMPL_AUTO(winrt::event_token) CanOverrideChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayEnhancementOverride, Windows::Foundation::IInspectable> const& handler) const;
        using CanOverrideChanged_revoker = impl::event_revoker<Windows::Graphics::Display::IDisplayEnhancementOverride, &impl::abi_t<Windows::Graphics::Display::IDisplayEnhancementOverride>::remove_CanOverrideChanged>;
        [[nodiscard]] CanOverrideChanged_revoker CanOverrideChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayEnhancementOverride, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) CanOverrideChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) IsOverrideActiveChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayEnhancementOverride, Windows::Foundation::IInspectable> const& handler) const;
        using IsOverrideActiveChanged_revoker = impl::event_revoker<Windows::Graphics::Display::IDisplayEnhancementOverride, &impl::abi_t<Windows::Graphics::Display::IDisplayEnhancementOverride>::remove_IsOverrideActiveChanged>;
        [[nodiscard]] IsOverrideActiveChanged_revoker IsOverrideActiveChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayEnhancementOverride, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) IsOverrideActiveChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) DisplayEnhancementOverrideCapabilitiesChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayEnhancementOverride, Windows::Graphics::Display::DisplayEnhancementOverrideCapabilitiesChangedEventArgs> const& handler) const;
        using DisplayEnhancementOverrideCapabilitiesChanged_revoker = impl::event_revoker<Windows::Graphics::Display::IDisplayEnhancementOverride, &impl::abi_t<Windows::Graphics::Display::IDisplayEnhancementOverride>::remove_DisplayEnhancementOverrideCapabilitiesChanged>;
        [[nodiscard]] DisplayEnhancementOverrideCapabilitiesChanged_revoker DisplayEnhancementOverrideCapabilitiesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayEnhancementOverride, Windows::Graphics::Display::DisplayEnhancementOverrideCapabilitiesChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) DisplayEnhancementOverrideCapabilitiesChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Graphics::Display::IDisplayEnhancementOverride>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IDisplayEnhancementOverride<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IDisplayEnhancementOverrideCapabilities
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsBrightnessControlSupported() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsBrightnessNitsControlSupported() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Graphics::Display::NitRange>) GetSupportedNitRanges() const;
    };
    template <> struct consume<Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilities>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IDisplayEnhancementOverrideCapabilities<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IDisplayEnhancementOverrideCapabilitiesChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Display::DisplayEnhancementOverrideCapabilities) Capabilities() const;
    };
    template <> struct consume<Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilitiesChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IDisplayEnhancementOverrideCapabilitiesChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IDisplayEnhancementOverrideStatics
    {
        WINRT_IMPL_AUTO(Windows::Graphics::Display::DisplayEnhancementOverride) GetForCurrentView() const;
    };
    template <> struct consume<Windows::Graphics::Display::IDisplayEnhancementOverrideStatics>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IDisplayEnhancementOverrideStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IDisplayInformation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Display::DisplayOrientations) CurrentOrientation() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Display::DisplayOrientations) NativeOrientation() const;
        WINRT_IMPL_AUTO(winrt::event_token) OrientationChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
        using OrientationChanged_revoker = impl::event_revoker<Windows::Graphics::Display::IDisplayInformation, &impl::abi_t<Windows::Graphics::Display::IDisplayInformation>::remove_OrientationChanged>;
        [[nodiscard]] OrientationChanged_revoker OrientationChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) OrientationChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Display::ResolutionScale) ResolutionScale() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) LogicalDpi() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) RawDpiX() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) RawDpiY() const;
        WINRT_IMPL_AUTO(winrt::event_token) DpiChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
        using DpiChanged_revoker = impl::event_revoker<Windows::Graphics::Display::IDisplayInformation, &impl::abi_t<Windows::Graphics::Display::IDisplayInformation>::remove_DpiChanged>;
        [[nodiscard]] DpiChanged_revoker DpiChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) DpiChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) StereoEnabled() const;
        WINRT_IMPL_AUTO(winrt::event_token) StereoEnabledChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
        using StereoEnabledChanged_revoker = impl::event_revoker<Windows::Graphics::Display::IDisplayInformation, &impl::abi_t<Windows::Graphics::Display::IDisplayInformation>::remove_StereoEnabledChanged>;
        [[nodiscard]] StereoEnabledChanged_revoker StereoEnabledChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) StereoEnabledChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream>) GetColorProfileAsync() const;
        WINRT_IMPL_AUTO(winrt::event_token) ColorProfileChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
        using ColorProfileChanged_revoker = impl::event_revoker<Windows::Graphics::Display::IDisplayInformation, &impl::abi_t<Windows::Graphics::Display::IDisplayInformation>::remove_ColorProfileChanged>;
        [[nodiscard]] ColorProfileChanged_revoker ColorProfileChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) ColorProfileChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Graphics::Display::IDisplayInformation>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IDisplayInformation<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IDisplayInformation2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) RawPixelsPerViewPixel() const;
    };
    template <> struct consume<Windows::Graphics::Display::IDisplayInformation2>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IDisplayInformation2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IDisplayInformation3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<double>) DiagonalSizeInInches() const;
    };
    template <> struct consume<Windows::Graphics::Display::IDisplayInformation3>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IDisplayInformation3<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IDisplayInformation4
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ScreenWidthInRawPixels() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ScreenHeightInRawPixels() const;
    };
    template <> struct consume<Windows::Graphics::Display::IDisplayInformation4>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IDisplayInformation4<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IDisplayInformation5
    {
        WINRT_IMPL_AUTO(Windows::Graphics::Display::AdvancedColorInfo) GetAdvancedColorInfo() const;
        WINRT_IMPL_AUTO(winrt::event_token) AdvancedColorInfoChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
        using AdvancedColorInfoChanged_revoker = impl::event_revoker<Windows::Graphics::Display::IDisplayInformation5, &impl::abi_t<Windows::Graphics::Display::IDisplayInformation5>::remove_AdvancedColorInfoChanged>;
        [[nodiscard]] AdvancedColorInfoChanged_revoker AdvancedColorInfoChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) AdvancedColorInfoChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Graphics::Display::IDisplayInformation5>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IDisplayInformation5<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IDisplayInformationStatics
    {
        WINRT_IMPL_AUTO(Windows::Graphics::Display::DisplayInformation) GetForCurrentView() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Display::DisplayOrientations) AutoRotationPreferences() const;
        WINRT_IMPL_AUTO(void) AutoRotationPreferences(Windows::Graphics::Display::DisplayOrientations const& value) const;
        WINRT_IMPL_AUTO(winrt::event_token) DisplayContentsInvalidated(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
        using DisplayContentsInvalidated_revoker = impl::event_revoker<Windows::Graphics::Display::IDisplayInformationStatics, &impl::abi_t<Windows::Graphics::Display::IDisplayInformationStatics>::remove_DisplayContentsInvalidated>;
        [[nodiscard]] DisplayContentsInvalidated_revoker DisplayContentsInvalidated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) DisplayContentsInvalidated(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Graphics::Display::IDisplayInformationStatics>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IDisplayInformationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IDisplayPropertiesStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Display::DisplayOrientations) CurrentOrientation() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Display::DisplayOrientations) NativeOrientation() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Display::DisplayOrientations) AutoRotationPreferences() const;
        WINRT_IMPL_AUTO(void) AutoRotationPreferences(Windows::Graphics::Display::DisplayOrientations const& value) const;
        WINRT_IMPL_AUTO(winrt::event_token) OrientationChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const;
        using OrientationChanged_revoker = impl::event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics, &impl::abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_OrientationChanged>;
        [[nodiscard]] OrientationChanged_revoker OrientationChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const;
        WINRT_IMPL_AUTO(void) OrientationChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Display::ResolutionScale) ResolutionScale() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) LogicalDpi() const;
        WINRT_IMPL_AUTO(winrt::event_token) LogicalDpiChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const;
        using LogicalDpiChanged_revoker = impl::event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics, &impl::abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_LogicalDpiChanged>;
        [[nodiscard]] LogicalDpiChanged_revoker LogicalDpiChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const;
        WINRT_IMPL_AUTO(void) LogicalDpiChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) StereoEnabled() const;
        WINRT_IMPL_AUTO(winrt::event_token) StereoEnabledChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const;
        using StereoEnabledChanged_revoker = impl::event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics, &impl::abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_StereoEnabledChanged>;
        [[nodiscard]] StereoEnabledChanged_revoker StereoEnabledChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const;
        WINRT_IMPL_AUTO(void) StereoEnabledChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream>) GetColorProfileAsync() const;
        WINRT_IMPL_AUTO(winrt::event_token) ColorProfileChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const;
        using ColorProfileChanged_revoker = impl::event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics, &impl::abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_ColorProfileChanged>;
        [[nodiscard]] ColorProfileChanged_revoker ColorProfileChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const;
        WINRT_IMPL_AUTO(void) ColorProfileChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) DisplayContentsInvalidated(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const;
        using DisplayContentsInvalidated_revoker = impl::event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics, &impl::abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_DisplayContentsInvalidated>;
        [[nodiscard]] DisplayContentsInvalidated_revoker DisplayContentsInvalidated(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const;
        WINRT_IMPL_AUTO(void) DisplayContentsInvalidated(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Graphics::Display::IDisplayPropertiesStatics>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IDisplayServices
    {
    };
    template <> struct consume<Windows::Graphics::Display::IDisplayServices>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IDisplayServices<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Display_IDisplayServicesStatics
    {
        WINRT_IMPL_AUTO(com_array<Windows::Graphics::DisplayId>) FindAll() const;
    };
    template <> struct consume<Windows::Graphics::Display::IDisplayServicesStatics>
    {
        template <typename D> using type = consume_Windows_Graphics_Display_IDisplayServicesStatics<D>;
    };
    struct struct_Windows_Graphics_Display_NitRange
    {
        float MinNits;
        float MaxNits;
        float StepSizeNits;
    };
    template <> struct abi<Windows::Graphics::Display::NitRange>
    {
        using type = struct_Windows_Graphics_Display_NitRange;
    };
}
#endif
