// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Perception_0_H
#define WINRT_Windows_Devices_Perception_0_H
WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration
{
    enum class DeviceWatcherStatus : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    struct Point;
    struct Rect;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    enum class CollectionChange : int32_t;
    template <typename K, typename V> struct __declspec(empty_bases) IMapView;
    template <typename T> struct __declspec(empty_bases) IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Numerics
{
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging
{
    enum class BitmapAlphaMode : int32_t;
    enum class BitmapPixelFormat : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Media
{
    struct VideoFrame;
}
WINRT_EXPORT namespace winrt::Windows::Media::Devices::Core
{
    struct CameraIntrinsics;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Perception
{
    enum class PerceptionFrameSourceAccessStatus : int32_t
    {
        Unspecified = 0,
        Allowed = 1,
        DeniedByUser = 2,
        DeniedBySystem = 3,
    };
    enum class PerceptionFrameSourcePropertyChangeStatus : int32_t
    {
        Unknown = 0,
        Accepted = 1,
        LostControl = 2,
        PropertyNotSupported = 3,
        PropertyReadOnly = 4,
        ValueOutOfRange = 5,
    };
    struct IKnownCameraIntrinsicsPropertiesStatics;
    struct IKnownPerceptionColorFrameSourcePropertiesStatics;
    struct IKnownPerceptionDepthFrameSourcePropertiesStatics;
    struct IKnownPerceptionFrameSourcePropertiesStatics;
    struct IKnownPerceptionFrameSourcePropertiesStatics2;
    struct IKnownPerceptionInfraredFrameSourcePropertiesStatics;
    struct IKnownPerceptionVideoFrameSourcePropertiesStatics;
    struct IKnownPerceptionVideoProfilePropertiesStatics;
    struct IPerceptionColorFrame;
    struct IPerceptionColorFrameArrivedEventArgs;
    struct IPerceptionColorFrameReader;
    struct IPerceptionColorFrameSource;
    struct IPerceptionColorFrameSource2;
    struct IPerceptionColorFrameSourceAddedEventArgs;
    struct IPerceptionColorFrameSourceRemovedEventArgs;
    struct IPerceptionColorFrameSourceStatics;
    struct IPerceptionColorFrameSourceWatcher;
    struct IPerceptionControlSession;
    struct IPerceptionDepthCorrelatedCameraIntrinsics;
    struct IPerceptionDepthCorrelatedCoordinateMapper;
    struct IPerceptionDepthFrame;
    struct IPerceptionDepthFrameArrivedEventArgs;
    struct IPerceptionDepthFrameReader;
    struct IPerceptionDepthFrameSource;
    struct IPerceptionDepthFrameSource2;
    struct IPerceptionDepthFrameSourceAddedEventArgs;
    struct IPerceptionDepthFrameSourceRemovedEventArgs;
    struct IPerceptionDepthFrameSourceStatics;
    struct IPerceptionDepthFrameSourceWatcher;
    struct IPerceptionFrameSourcePropertiesChangedEventArgs;
    struct IPerceptionFrameSourcePropertyChangeResult;
    struct IPerceptionInfraredFrame;
    struct IPerceptionInfraredFrameArrivedEventArgs;
    struct IPerceptionInfraredFrameReader;
    struct IPerceptionInfraredFrameSource;
    struct IPerceptionInfraredFrameSource2;
    struct IPerceptionInfraredFrameSourceAddedEventArgs;
    struct IPerceptionInfraredFrameSourceRemovedEventArgs;
    struct IPerceptionInfraredFrameSourceStatics;
    struct IPerceptionInfraredFrameSourceWatcher;
    struct IPerceptionVideoProfile;
    struct KnownCameraIntrinsicsProperties;
    struct KnownPerceptionColorFrameSourceProperties;
    struct KnownPerceptionDepthFrameSourceProperties;
    struct KnownPerceptionFrameSourceProperties;
    struct KnownPerceptionInfraredFrameSourceProperties;
    struct KnownPerceptionVideoFrameSourceProperties;
    struct KnownPerceptionVideoProfileProperties;
    struct PerceptionColorFrame;
    struct PerceptionColorFrameArrivedEventArgs;
    struct PerceptionColorFrameReader;
    struct PerceptionColorFrameSource;
    struct PerceptionColorFrameSourceAddedEventArgs;
    struct PerceptionColorFrameSourceRemovedEventArgs;
    struct PerceptionColorFrameSourceWatcher;
    struct PerceptionControlSession;
    struct PerceptionDepthCorrelatedCameraIntrinsics;
    struct PerceptionDepthCorrelatedCoordinateMapper;
    struct PerceptionDepthFrame;
    struct PerceptionDepthFrameArrivedEventArgs;
    struct PerceptionDepthFrameReader;
    struct PerceptionDepthFrameSource;
    struct PerceptionDepthFrameSourceAddedEventArgs;
    struct PerceptionDepthFrameSourceRemovedEventArgs;
    struct PerceptionDepthFrameSourceWatcher;
    struct PerceptionFrameSourcePropertiesChangedEventArgs;
    struct PerceptionFrameSourcePropertyChangeResult;
    struct PerceptionInfraredFrame;
    struct PerceptionInfraredFrameArrivedEventArgs;
    struct PerceptionInfraredFrameReader;
    struct PerceptionInfraredFrameSource;
    struct PerceptionInfraredFrameSourceAddedEventArgs;
    struct PerceptionInfraredFrameSourceRemovedEventArgs;
    struct PerceptionInfraredFrameSourceWatcher;
    struct PerceptionVideoProfile;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionColorFrame>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionColorFrameReader>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionColorFrameSource>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionColorFrameSource2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionColorFrameSourceAddedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionColorFrameSourceRemovedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionColorFrameSourceStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionControlSession>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionDepthFrame>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionDepthFrameReader>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionDepthFrameSource>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionDepthFrameSource2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionDepthFrameSourceAddedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionDepthFrameSourceRemovedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionInfraredFrame>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionInfraredFrameReader>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionInfraredFrameSource>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionInfraredFrameSource2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionInfraredFrameSourceAddedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionInfraredFrameSourceRemovedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::IPerceptionVideoProfile>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Perception::KnownCameraIntrinsicsProperties>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::KnownPerceptionColorFrameSourceProperties>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::KnownPerceptionDepthFrameSourceProperties>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::KnownPerceptionFrameSourceProperties>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::KnownPerceptionInfraredFrameSourceProperties>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::KnownPerceptionVideoFrameSourceProperties>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::KnownPerceptionVideoProfileProperties>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::PerceptionColorFrame>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::PerceptionColorFrameArrivedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::PerceptionColorFrameReader>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::PerceptionColorFrameSource>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::PerceptionColorFrameSourceAddedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::PerceptionColorFrameSourceRemovedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::PerceptionControlSession>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::PerceptionDepthFrame>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::PerceptionDepthFrameArrivedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::PerceptionDepthFrameReader>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::PerceptionDepthFrameSource>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::PerceptionDepthFrameSourceAddedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::PerceptionDepthFrameSourceRemovedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::PerceptionInfraredFrame>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::PerceptionInfraredFrameArrivedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::PerceptionInfraredFrameReader>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::PerceptionInfraredFrameSource>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::PerceptionInfraredFrameSourceAddedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::PerceptionInfraredFrameSourceRemovedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::PerceptionVideoProfile>{ using type = class_category; };
    template <> struct category<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus>{ using type = enum_category; };
    template <> struct category<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::KnownCameraIntrinsicsProperties> = L"Windows.Devices.Perception.KnownCameraIntrinsicsProperties";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::KnownPerceptionColorFrameSourceProperties> = L"Windows.Devices.Perception.KnownPerceptionColorFrameSourceProperties";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::KnownPerceptionDepthFrameSourceProperties> = L"Windows.Devices.Perception.KnownPerceptionDepthFrameSourceProperties";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::KnownPerceptionFrameSourceProperties> = L"Windows.Devices.Perception.KnownPerceptionFrameSourceProperties";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::KnownPerceptionInfraredFrameSourceProperties> = L"Windows.Devices.Perception.KnownPerceptionInfraredFrameSourceProperties";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::KnownPerceptionVideoFrameSourceProperties> = L"Windows.Devices.Perception.KnownPerceptionVideoFrameSourceProperties";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::KnownPerceptionVideoProfileProperties> = L"Windows.Devices.Perception.KnownPerceptionVideoProfileProperties";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::PerceptionColorFrame> = L"Windows.Devices.Perception.PerceptionColorFrame";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::PerceptionColorFrameArrivedEventArgs> = L"Windows.Devices.Perception.PerceptionColorFrameArrivedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::PerceptionColorFrameReader> = L"Windows.Devices.Perception.PerceptionColorFrameReader";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::PerceptionColorFrameSource> = L"Windows.Devices.Perception.PerceptionColorFrameSource";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::PerceptionColorFrameSourceAddedEventArgs> = L"Windows.Devices.Perception.PerceptionColorFrameSourceAddedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::PerceptionColorFrameSourceRemovedEventArgs> = L"Windows.Devices.Perception.PerceptionColorFrameSourceRemovedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher> = L"Windows.Devices.Perception.PerceptionColorFrameSourceWatcher";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::PerceptionControlSession> = L"Windows.Devices.Perception.PerceptionControlSession";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics> = L"Windows.Devices.Perception.PerceptionDepthCorrelatedCameraIntrinsics";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper> = L"Windows.Devices.Perception.PerceptionDepthCorrelatedCoordinateMapper";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::PerceptionDepthFrame> = L"Windows.Devices.Perception.PerceptionDepthFrame";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::PerceptionDepthFrameArrivedEventArgs> = L"Windows.Devices.Perception.PerceptionDepthFrameArrivedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::PerceptionDepthFrameReader> = L"Windows.Devices.Perception.PerceptionDepthFrameReader";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::PerceptionDepthFrameSource> = L"Windows.Devices.Perception.PerceptionDepthFrameSource";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::PerceptionDepthFrameSourceAddedEventArgs> = L"Windows.Devices.Perception.PerceptionDepthFrameSourceAddedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::PerceptionDepthFrameSourceRemovedEventArgs> = L"Windows.Devices.Perception.PerceptionDepthFrameSourceRemovedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher> = L"Windows.Devices.Perception.PerceptionDepthFrameSourceWatcher";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> = L"Windows.Devices.Perception.PerceptionFrameSourcePropertiesChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> = L"Windows.Devices.Perception.PerceptionFrameSourcePropertyChangeResult";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::PerceptionInfraredFrame> = L"Windows.Devices.Perception.PerceptionInfraredFrame";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::PerceptionInfraredFrameArrivedEventArgs> = L"Windows.Devices.Perception.PerceptionInfraredFrameArrivedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::PerceptionInfraredFrameReader> = L"Windows.Devices.Perception.PerceptionInfraredFrameReader";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::PerceptionInfraredFrameSource> = L"Windows.Devices.Perception.PerceptionInfraredFrameSource";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::PerceptionInfraredFrameSourceAddedEventArgs> = L"Windows.Devices.Perception.PerceptionInfraredFrameSourceAddedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::PerceptionInfraredFrameSourceRemovedEventArgs> = L"Windows.Devices.Perception.PerceptionInfraredFrameSourceRemovedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher> = L"Windows.Devices.Perception.PerceptionInfraredFrameSourceWatcher";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::PerceptionVideoProfile> = L"Windows.Devices.Perception.PerceptionVideoProfile";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> = L"Windows.Devices.Perception.PerceptionFrameSourceAccessStatus";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus> = L"Windows.Devices.Perception.PerceptionFrameSourcePropertyChangeStatus";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics> = L"Windows.Devices.Perception.IKnownCameraIntrinsicsPropertiesStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics> = L"Windows.Devices.Perception.IKnownPerceptionColorFrameSourcePropertiesStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics> = L"Windows.Devices.Perception.IKnownPerceptionDepthFrameSourcePropertiesStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics> = L"Windows.Devices.Perception.IKnownPerceptionFrameSourcePropertiesStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics2> = L"Windows.Devices.Perception.IKnownPerceptionFrameSourcePropertiesStatics2";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics> = L"Windows.Devices.Perception.IKnownPerceptionInfraredFrameSourcePropertiesStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics> = L"Windows.Devices.Perception.IKnownPerceptionVideoFrameSourcePropertiesStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics> = L"Windows.Devices.Perception.IKnownPerceptionVideoProfilePropertiesStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionColorFrame> = L"Windows.Devices.Perception.IPerceptionColorFrame";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs> = L"Windows.Devices.Perception.IPerceptionColorFrameArrivedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionColorFrameReader> = L"Windows.Devices.Perception.IPerceptionColorFrameReader";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionColorFrameSource> = L"Windows.Devices.Perception.IPerceptionColorFrameSource";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionColorFrameSource2> = L"Windows.Devices.Perception.IPerceptionColorFrameSource2";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionColorFrameSourceAddedEventArgs> = L"Windows.Devices.Perception.IPerceptionColorFrameSourceAddedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionColorFrameSourceRemovedEventArgs> = L"Windows.Devices.Perception.IPerceptionColorFrameSourceRemovedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionColorFrameSourceStatics> = L"Windows.Devices.Perception.IPerceptionColorFrameSourceStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher> = L"Windows.Devices.Perception.IPerceptionColorFrameSourceWatcher";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionControlSession> = L"Windows.Devices.Perception.IPerceptionControlSession";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics> = L"Windows.Devices.Perception.IPerceptionDepthCorrelatedCameraIntrinsics";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper> = L"Windows.Devices.Perception.IPerceptionDepthCorrelatedCoordinateMapper";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionDepthFrame> = L"Windows.Devices.Perception.IPerceptionDepthFrame";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs> = L"Windows.Devices.Perception.IPerceptionDepthFrameArrivedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionDepthFrameReader> = L"Windows.Devices.Perception.IPerceptionDepthFrameReader";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionDepthFrameSource> = L"Windows.Devices.Perception.IPerceptionDepthFrameSource";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionDepthFrameSource2> = L"Windows.Devices.Perception.IPerceptionDepthFrameSource2";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionDepthFrameSourceAddedEventArgs> = L"Windows.Devices.Perception.IPerceptionDepthFrameSourceAddedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionDepthFrameSourceRemovedEventArgs> = L"Windows.Devices.Perception.IPerceptionDepthFrameSourceRemovedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics> = L"Windows.Devices.Perception.IPerceptionDepthFrameSourceStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher> = L"Windows.Devices.Perception.IPerceptionDepthFrameSourceWatcher";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs> = L"Windows.Devices.Perception.IPerceptionFrameSourcePropertiesChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult> = L"Windows.Devices.Perception.IPerceptionFrameSourcePropertyChangeResult";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionInfraredFrame> = L"Windows.Devices.Perception.IPerceptionInfraredFrame";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs> = L"Windows.Devices.Perception.IPerceptionInfraredFrameArrivedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionInfraredFrameReader> = L"Windows.Devices.Perception.IPerceptionInfraredFrameReader";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionInfraredFrameSource> = L"Windows.Devices.Perception.IPerceptionInfraredFrameSource";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionInfraredFrameSource2> = L"Windows.Devices.Perception.IPerceptionInfraredFrameSource2";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionInfraredFrameSourceAddedEventArgs> = L"Windows.Devices.Perception.IPerceptionInfraredFrameSourceAddedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionInfraredFrameSourceRemovedEventArgs> = L"Windows.Devices.Perception.IPerceptionInfraredFrameSourceRemovedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics> = L"Windows.Devices.Perception.IPerceptionInfraredFrameSourceStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher> = L"Windows.Devices.Perception.IPerceptionInfraredFrameSourceWatcher";
    template <> inline constexpr auto& name_v<Windows::Devices::Perception::IPerceptionVideoProfile> = L"Windows.Devices.Perception.IPerceptionVideoProfile";
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics>{ 0x08C03978,0x437A,0x4D97,{ 0xA6,0x63,0xFD,0x31,0x95,0x60,0x02,0x49 } }; // 08C03978-437A-4D97-A663-FD3195600249
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics>{ 0x5DF1CCA2,0x01F8,0x4A87,{ 0xB8,0x59,0xD5,0xE5,0xB7,0xE1,0xDE,0x4B } }; // 5DF1CCA2-01F8-4A87-B859-D5E5B7E1DE4B
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics>{ 0x5DF1CCA2,0x01F8,0x4A87,{ 0xB8,0x59,0xD5,0xE5,0xB7,0xE1,0xDE,0x4A } }; // 5DF1CCA2-01F8-4A87-B859-D5E5B7E1DE4A
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics>{ 0x5DF1CCA2,0x01F8,0x4A87,{ 0xB8,0x59,0xD5,0xE5,0xB7,0xE1,0xDE,0x47 } }; // 5DF1CCA2-01F8-4A87-B859-D5E5B7E1DE47
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics2>{ 0xA9C86871,0x05DC,0x4A4D,{ 0x8A,0x5C,0xA4,0xEC,0xF2,0x6B,0xBC,0x46 } }; // A9C86871-05DC-4A4D-8A5C-A4ECF26BBC46
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics>{ 0x5DF1CCA2,0x01F8,0x4A87,{ 0xB8,0x59,0xD5,0xE5,0xB7,0xE1,0xDE,0x49 } }; // 5DF1CCA2-01F8-4A87-B859-D5E5B7E1DE49
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics>{ 0x5DF1CCA2,0x01F8,0x4A87,{ 0xB8,0x59,0xD5,0xE5,0xB7,0xE1,0xDE,0x48 } }; // 5DF1CCA2-01F8-4A87-B859-D5E5B7E1DE48
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics>{ 0x8F08E2E7,0x5A76,0x43E3,{ 0xA1,0x3A,0xDA,0x3D,0x91,0xA9,0xEF,0x98 } }; // 8F08E2E7-5A76-43E3-A13A-DA3D91A9EF98
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionColorFrame>{ 0xFE621549,0x2CBF,0x4F94,{ 0x98,0x61,0xF8,0x17,0xEA,0x31,0x77,0x47 } }; // FE621549-2CBF-4F94-9861-F817EA317747
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs>{ 0x8FAD02D5,0x86F7,0x4D8D,{ 0xB9,0x66,0x5A,0x37,0x61,0xBA,0x9F,0x59 } }; // 8FAD02D5-86F7-4D8D-B966-5A3761BA9F59
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionColorFrameReader>{ 0x7650F56E,0xB9F5,0x461B,{ 0x83,0xAD,0xF2,0x22,0xAF,0x2A,0xAA,0xDC } }; // 7650F56E-B9F5-461B-83AD-F222AF2AAADC
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionColorFrameSource>{ 0xDC6DBA7C,0x0B58,0x468D,{ 0x9C,0xA1,0x6D,0xB0,0x4C,0xC0,0x47,0x7C } }; // DC6DBA7C-0B58-468D-9CA1-6DB04CC0477C
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionColorFrameSource2>{ 0xF88008E5,0x5631,0x45ED,{ 0xAD,0x98,0x8C,0x6A,0xA0,0x4C,0xFB,0x91 } }; // F88008E5-5631-45ED-AD98-8C6AA04CFB91
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionColorFrameSourceAddedEventArgs>{ 0xD16BF4E6,0xDA24,0x442C,{ 0xBB,0xD5,0x55,0x54,0x9B,0x5B,0x94,0xF3 } }; // D16BF4E6-DA24-442C-BBD5-55549B5B94F3
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionColorFrameSourceRemovedEventArgs>{ 0xD277FA69,0xEB4C,0x42EF,{ 0xBA,0x4F,0x28,0x8F,0x61,0x5C,0x93,0xC1 } }; // D277FA69-EB4C-42EF-BA4F-288F615C93C1
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionColorFrameSourceStatics>{ 0x5DF3CCA2,0x01F8,0x4A87,{ 0xB8,0x59,0xD5,0xE5,0xB7,0xE1,0xDE,0x49 } }; // 5DF3CCA2-01F8-4A87-B859-D5E5B7E1DE49
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>{ 0x96BD1392,0xE667,0x40C4,{ 0x89,0xF9,0x14,0x62,0xDE,0xA6,0xA9,0xCC } }; // 96BD1392-E667-40C4-89F9-1462DEA6A9CC
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionControlSession>{ 0x99998653,0x5A3D,0x417F,{ 0x92,0x39,0xF1,0x88,0x9E,0x54,0x8B,0x48 } }; // 99998653-5A3D-417F-9239-F1889E548B48
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics>{ 0x6548CA01,0x86DE,0x5BE1,{ 0x65,0x82,0x80,0x7F,0xCF,0x4C,0x95,0xCF } }; // 6548CA01-86DE-5BE1-6582-807FCF4C95CF
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper>{ 0x5B4D9D1D,0xB5F6,0x469C,{ 0xB8,0xC2,0xB9,0x7A,0x45,0xE6,0x86,0x3B } }; // 5B4D9D1D-B5F6-469C-B8C2-B97A45E6863B
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionDepthFrame>{ 0xA37B81FC,0x9906,0x4FFD,{ 0x91,0x61,0x00,0x24,0xB3,0x60,0xB6,0x57 } }; // A37B81FC-9906-4FFD-9161-0024B360B657
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs>{ 0x443D25B2,0xB282,0x4637,{ 0x91,0x73,0xAC,0x97,0x84,0x35,0xC9,0x85 } }; // 443D25B2-B282-4637-9173-AC978435C985
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionDepthFrameReader>{ 0xB1A3C09F,0x299B,0x4612,{ 0xA4,0xF7,0x27,0x0F,0x25,0xA0,0x96,0xEC } }; // B1A3C09F-299B-4612-A4F7-270F25A096EC
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionDepthFrameSource>{ 0x79D433D6,0x47FB,0x4DF1,{ 0xBF,0xC9,0xF0,0x1D,0x40,0xBD,0x99,0x42 } }; // 79D433D6-47FB-4DF1-BFC9-F01D40BD9942
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionDepthFrameSource2>{ 0xE3D23D2E,0x6E2C,0x4E6D,{ 0x91,0xD9,0x70,0x4C,0xD8,0xDF,0xF7,0x9D } }; // E3D23D2E-6E2C-4E6D-91D9-704CD8DFF79D
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionDepthFrameSourceAddedEventArgs>{ 0x93A48168,0x8BF8,0x45D2,{ 0xA2,0xF8,0x4A,0xC0,0x93,0x1C,0xC7,0xA6 } }; // 93A48168-8BF8-45D2-A2F8-4AC0931CC7A6
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionDepthFrameSourceRemovedEventArgs>{ 0xA0C0CC4D,0xE96C,0x4D81,{ 0x86,0xDD,0x38,0xB9,0x5E,0x49,0xC6,0xDF } }; // A0C0CC4D-E96C-4D81-86DD-38B95E49C6DF
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics>{ 0x5DF3CCA2,0x01F8,0x4A87,{ 0xB8,0x59,0xD5,0xE5,0xB7,0xE1,0xDE,0x48 } }; // 5DF3CCA2-01F8-4A87-B859-D5E5B7E1DE48
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>{ 0x780E96D1,0x8D02,0x4D2B,{ 0xAD,0xA4,0x5B,0xA6,0x24,0xA0,0xEB,0x10 } }; // 780E96D1-8D02-4D2B-ADA4-5BA624A0EB10
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs>{ 0x6C68E068,0xBCF1,0x4ECC,{ 0xB8,0x91,0x76,0x25,0xD1,0x24,0x4B,0x6B } }; // 6C68E068-BCF1-4ECC-B891-7625D1244B6B
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult>{ 0x1E33390A,0x3C90,0x4D22,{ 0xB8,0x98,0xF4,0x2B,0xBA,0x64,0x18,0xFF } }; // 1E33390A-3C90-4D22-B898-F42BBA6418FF
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionInfraredFrame>{ 0xB0886276,0x849E,0x4C7A,{ 0x8A,0xE6,0xB5,0x60,0x64,0x53,0x21,0x53 } }; // B0886276-849E-4C7A-8AE6-B56064532153
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs>{ 0x9F77FAC7,0xB4BD,0x4857,{ 0x9D,0x50,0xBE,0x8E,0xF0,0x75,0xDA,0xEF } }; // 9F77FAC7-B4BD-4857-9D50-BE8EF075DAEF
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionInfraredFrameReader>{ 0x7960CE18,0xD39B,0x4FC8,{ 0xA0,0x4A,0x92,0x97,0x34,0xC6,0x75,0x6C } }; // 7960CE18-D39B-4FC8-A04A-929734C6756C
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionInfraredFrameSource>{ 0x55B08742,0x1808,0x494E,{ 0x9E,0x30,0x9D,0x2A,0x7B,0xE8,0xF7,0x00 } }; // 55B08742-1808-494E-9E30-9D2A7BE8F700
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionInfraredFrameSource2>{ 0xDCD4D798,0x4B0B,0x4300,{ 0x8D,0x85,0x41,0x08,0x17,0xFA,0xA0,0x32 } }; // DCD4D798-4B0B-4300-8D85-410817FAA032
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionInfraredFrameSourceAddedEventArgs>{ 0x6D334120,0x95CE,0x4660,{ 0x90,0x7A,0xD9,0x80,0x35,0xAA,0x2B,0x7C } }; // 6D334120-95CE-4660-907A-D98035AA2B7C
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionInfraredFrameSourceRemovedEventArgs>{ 0xEA1A8071,0x7A70,0x4A61,{ 0xAF,0x94,0x07,0x30,0x38,0x53,0xF6,0x95 } }; // EA1A8071-7A70-4A61-AF94-07303853F695
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics>{ 0x5DF3CCA2,0x01F8,0x4A87,{ 0xB8,0x59,0xD5,0xE5,0xB7,0xE1,0xDE,0x47 } }; // 5DF3CCA2-01F8-4A87-B859-D5E5B7E1DE47
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>{ 0x383CFF99,0xD70C,0x444D,{ 0xA8,0xB0,0x72,0x0C,0x2E,0x66,0xFE,0x3B } }; // 383CFF99-D70C-444D-A8B0-720C2E66FE3B
    template <> inline constexpr guid guid_v<Windows::Devices::Perception::IPerceptionVideoProfile>{ 0x75763EA3,0x011A,0x470E,{ 0x82,0x25,0x6F,0x05,0xAD,0xE2,0x56,0x48 } }; // 75763EA3-011A-470E-8225-6F05ADE25648
    template <> struct default_interface<Windows::Devices::Perception::PerceptionColorFrame>{ using type = Windows::Devices::Perception::IPerceptionColorFrame; };
    template <> struct default_interface<Windows::Devices::Perception::PerceptionColorFrameArrivedEventArgs>{ using type = Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs; };
    template <> struct default_interface<Windows::Devices::Perception::PerceptionColorFrameReader>{ using type = Windows::Devices::Perception::IPerceptionColorFrameReader; };
    template <> struct default_interface<Windows::Devices::Perception::PerceptionColorFrameSource>{ using type = Windows::Devices::Perception::IPerceptionColorFrameSource; };
    template <> struct default_interface<Windows::Devices::Perception::PerceptionColorFrameSourceAddedEventArgs>{ using type = Windows::Devices::Perception::IPerceptionColorFrameSourceAddedEventArgs; };
    template <> struct default_interface<Windows::Devices::Perception::PerceptionColorFrameSourceRemovedEventArgs>{ using type = Windows::Devices::Perception::IPerceptionColorFrameSourceRemovedEventArgs; };
    template <> struct default_interface<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher>{ using type = Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher; };
    template <> struct default_interface<Windows::Devices::Perception::PerceptionControlSession>{ using type = Windows::Devices::Perception::IPerceptionControlSession; };
    template <> struct default_interface<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics>{ using type = Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics; };
    template <> struct default_interface<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper>{ using type = Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper; };
    template <> struct default_interface<Windows::Devices::Perception::PerceptionDepthFrame>{ using type = Windows::Devices::Perception::IPerceptionDepthFrame; };
    template <> struct default_interface<Windows::Devices::Perception::PerceptionDepthFrameArrivedEventArgs>{ using type = Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs; };
    template <> struct default_interface<Windows::Devices::Perception::PerceptionDepthFrameReader>{ using type = Windows::Devices::Perception::IPerceptionDepthFrameReader; };
    template <> struct default_interface<Windows::Devices::Perception::PerceptionDepthFrameSource>{ using type = Windows::Devices::Perception::IPerceptionDepthFrameSource; };
    template <> struct default_interface<Windows::Devices::Perception::PerceptionDepthFrameSourceAddedEventArgs>{ using type = Windows::Devices::Perception::IPerceptionDepthFrameSourceAddedEventArgs; };
    template <> struct default_interface<Windows::Devices::Perception::PerceptionDepthFrameSourceRemovedEventArgs>{ using type = Windows::Devices::Perception::IPerceptionDepthFrameSourceRemovedEventArgs; };
    template <> struct default_interface<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher>{ using type = Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher; };
    template <> struct default_interface<Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs>{ using type = Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs; };
    template <> struct default_interface<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult>{ using type = Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult; };
    template <> struct default_interface<Windows::Devices::Perception::PerceptionInfraredFrame>{ using type = Windows::Devices::Perception::IPerceptionInfraredFrame; };
    template <> struct default_interface<Windows::Devices::Perception::PerceptionInfraredFrameArrivedEventArgs>{ using type = Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs; };
    template <> struct default_interface<Windows::Devices::Perception::PerceptionInfraredFrameReader>{ using type = Windows::Devices::Perception::IPerceptionInfraredFrameReader; };
    template <> struct default_interface<Windows::Devices::Perception::PerceptionInfraredFrameSource>{ using type = Windows::Devices::Perception::IPerceptionInfraredFrameSource; };
    template <> struct default_interface<Windows::Devices::Perception::PerceptionInfraredFrameSourceAddedEventArgs>{ using type = Windows::Devices::Perception::IPerceptionInfraredFrameSourceAddedEventArgs; };
    template <> struct default_interface<Windows::Devices::Perception::PerceptionInfraredFrameSourceRemovedEventArgs>{ using type = Windows::Devices::Perception::IPerceptionInfraredFrameSourceRemovedEventArgs; };
    template <> struct default_interface<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher>{ using type = Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher; };
    template <> struct default_interface<Windows::Devices::Perception::PerceptionVideoProfile>{ using type = Windows::Devices::Perception::IPerceptionVideoProfile; };
    template <> struct abi<Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FocalLength(void**) noexcept = 0;
            virtual int32_t __stdcall get_PrincipalPoint(void**) noexcept = 0;
            virtual int32_t __stdcall get_RadialDistortion(void**) noexcept = 0;
            virtual int32_t __stdcall get_TangentialDistortion(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Exposure(void**) noexcept = 0;
            virtual int32_t __stdcall get_AutoExposureEnabled(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExposureCompensation(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MinDepth(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaxDepth(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_PhysicalDeviceIds(void**) noexcept = 0;
            virtual int32_t __stdcall get_FrameKind(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceModelVersion(void**) noexcept = 0;
            virtual int32_t __stdcall get_EnclosureLocation(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Exposure(void**) noexcept = 0;
            virtual int32_t __stdcall get_AutoExposureEnabled(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExposureCompensation(void**) noexcept = 0;
            virtual int32_t __stdcall get_ActiveIlluminationEnabled(void**) noexcept = 0;
            virtual int32_t __stdcall get_AmbientSubtractionEnabled(void**) noexcept = 0;
            virtual int32_t __stdcall get_StructureLightPatternEnabled(void**) noexcept = 0;
            virtual int32_t __stdcall get_InterleavedIlluminationEnabled(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_VideoProfile(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedVideoProfiles(void**) noexcept = 0;
            virtual int32_t __stdcall get_AvailableVideoProfiles(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsMirrored(void**) noexcept = 0;
            virtual int32_t __stdcall get_CameraIntrinsics(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BitmapPixelFormat(void**) noexcept = 0;
            virtual int32_t __stdcall get_BitmapAlphaMode(void**) noexcept = 0;
            virtual int32_t __stdcall get_Width(void**) noexcept = 0;
            virtual int32_t __stdcall get_Height(void**) noexcept = 0;
            virtual int32_t __stdcall get_FrameDuration(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionColorFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_VideoFrame(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RelativeTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall TryOpenFrame(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionColorFrameReader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_FrameArrived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_FrameArrived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Source(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsPaused(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsPaused(bool) noexcept = 0;
            virtual int32_t __stdcall TryReadLatestFrame(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionColorFrameSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_AvailableChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AvailableChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ActiveChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ActiveChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PropertiesChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PropertiesChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_VideoProfileChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_VideoProfileChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CameraIntrinsicsChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CameraIntrinsicsChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceKind(void**) noexcept = 0;
            virtual int32_t __stdcall get_Available(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Active(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsControlled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedVideoProfiles(void**) noexcept = 0;
            virtual int32_t __stdcall get_AvailableVideoProfiles(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoProfile(void**) noexcept = 0;
            virtual int32_t __stdcall get_CameraIntrinsics(void**) noexcept = 0;
            virtual int32_t __stdcall AcquireControlSession(void**) noexcept = 0;
            virtual int32_t __stdcall CanControlIndependentlyFrom(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall IsCorrelatedWith(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall TryGetTransformTo(void*, Windows::Foundation::Numerics::float4x4*, bool*) noexcept = 0;
            virtual int32_t __stdcall TryGetDepthCorrelatedCameraIntrinsicsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryGetDepthCorrelatedCoordinateMapperAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall TrySetVideoProfileAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall OpenReader(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionColorFrameSource2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionColorFrameSourceAddedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FrameSource(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionColorFrameSourceRemovedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FrameSource(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionColorFrameSourceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWatcher(void**) noexcept = 0;
            virtual int32_t __stdcall FindAllAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestAccessAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_SourceAdded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SourceAdded(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SourceRemoved(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SourceRemoved(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Stopped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Stopped(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_EnumerationCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EnumerationCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionControlSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_ControlLost(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ControlLost(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall TrySetPropertyAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall UnprojectPixelAtCorrelatedDepth(Windows::Foundation::Point, void*, Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall UnprojectPixelsAtCorrelatedDepth(uint32_t, Windows::Foundation::Point*, void*, uint32_t, Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall UnprojectRegionPixelsAtCorrelatedDepthAsync(Windows::Foundation::Rect, void*, uint32_t, Windows::Foundation::Numerics::float3*, void**) noexcept = 0;
            virtual int32_t __stdcall UnprojectAllPixelsAtCorrelatedDepthAsync(void*, uint32_t, Windows::Foundation::Numerics::float3*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall MapPixelToTarget(Windows::Foundation::Point, void*, Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall MapPixelsToTarget(uint32_t, Windows::Foundation::Point*, void*, uint32_t, Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall MapRegionOfPixelsToTargetAsync(Windows::Foundation::Rect, void*, uint32_t, Windows::Foundation::Point*, void**) noexcept = 0;
            virtual int32_t __stdcall MapAllPixelsToTargetAsync(void*, uint32_t, Windows::Foundation::Point*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionDepthFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_VideoFrame(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RelativeTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall TryOpenFrame(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionDepthFrameReader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_FrameArrived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_FrameArrived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Source(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsPaused(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsPaused(bool) noexcept = 0;
            virtual int32_t __stdcall TryReadLatestFrame(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionDepthFrameSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_AvailableChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AvailableChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ActiveChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ActiveChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PropertiesChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PropertiesChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_VideoProfileChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_VideoProfileChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CameraIntrinsicsChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CameraIntrinsicsChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceKind(void**) noexcept = 0;
            virtual int32_t __stdcall get_Available(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Active(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsControlled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedVideoProfiles(void**) noexcept = 0;
            virtual int32_t __stdcall get_AvailableVideoProfiles(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoProfile(void**) noexcept = 0;
            virtual int32_t __stdcall get_CameraIntrinsics(void**) noexcept = 0;
            virtual int32_t __stdcall AcquireControlSession(void**) noexcept = 0;
            virtual int32_t __stdcall CanControlIndependentlyFrom(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall IsCorrelatedWith(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall TryGetTransformTo(void*, Windows::Foundation::Numerics::float4x4*, bool*) noexcept = 0;
            virtual int32_t __stdcall TryGetDepthCorrelatedCameraIntrinsicsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryGetDepthCorrelatedCoordinateMapperAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall TrySetVideoProfileAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall OpenReader(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionDepthFrameSource2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionDepthFrameSourceAddedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FrameSource(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionDepthFrameSourceRemovedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FrameSource(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWatcher(void**) noexcept = 0;
            virtual int32_t __stdcall FindAllAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestAccessAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_SourceAdded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SourceAdded(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SourceRemoved(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SourceRemoved(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Stopped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Stopped(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_EnumerationCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EnumerationCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CollectionChange(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Key(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NewValue(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionInfraredFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_VideoFrame(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RelativeTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall TryOpenFrame(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionInfraredFrameReader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_FrameArrived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_FrameArrived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Source(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsPaused(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsPaused(bool) noexcept = 0;
            virtual int32_t __stdcall TryReadLatestFrame(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionInfraredFrameSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_AvailableChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AvailableChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ActiveChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ActiveChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PropertiesChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PropertiesChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_VideoProfileChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_VideoProfileChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CameraIntrinsicsChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CameraIntrinsicsChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceKind(void**) noexcept = 0;
            virtual int32_t __stdcall get_Available(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Active(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsControlled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedVideoProfiles(void**) noexcept = 0;
            virtual int32_t __stdcall get_AvailableVideoProfiles(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoProfile(void**) noexcept = 0;
            virtual int32_t __stdcall get_CameraIntrinsics(void**) noexcept = 0;
            virtual int32_t __stdcall AcquireControlSession(void**) noexcept = 0;
            virtual int32_t __stdcall CanControlIndependentlyFrom(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall IsCorrelatedWith(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall TryGetTransformTo(void*, Windows::Foundation::Numerics::float4x4*, bool*) noexcept = 0;
            virtual int32_t __stdcall TryGetDepthCorrelatedCameraIntrinsicsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryGetDepthCorrelatedCoordinateMapperAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall TrySetVideoProfileAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall OpenReader(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionInfraredFrameSource2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionInfraredFrameSourceAddedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FrameSource(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionInfraredFrameSourceRemovedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FrameSource(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWatcher(void**) noexcept = 0;
            virtual int32_t __stdcall FindAllAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestAccessAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_SourceAdded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SourceAdded(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SourceRemoved(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SourceRemoved(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Stopped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Stopped(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_EnumerationCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EnumerationCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Perception::IPerceptionVideoProfile>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BitmapPixelFormat(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_BitmapAlphaMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Width(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Height(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_FrameDuration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall IsEqual(void*, bool*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IKnownCameraIntrinsicsPropertiesStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) FocalLength() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) PrincipalPoint() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) RadialDistortion() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TangentialDistortion() const;
    };
    template <> struct consume<Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IKnownCameraIntrinsicsPropertiesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IKnownPerceptionColorFrameSourcePropertiesStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Exposure() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AutoExposureEnabled() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ExposureCompensation() const;
    };
    template <> struct consume<Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IKnownPerceptionColorFrameSourcePropertiesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IKnownPerceptionDepthFrameSourcePropertiesStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) MinDepth() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) MaxDepth() const;
    };
    template <> struct consume<Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IKnownPerceptionDepthFrameSourcePropertiesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IKnownPerceptionFrameSourcePropertiesStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) PhysicalDeviceIds() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) FrameKind() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceModelVersion() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) EnclosureLocation() const;
    };
    template <> struct consume<Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IKnownPerceptionFrameSourcePropertiesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IKnownPerceptionFrameSourcePropertiesStatics2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
    };
    template <> struct consume<Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IKnownPerceptionFrameSourcePropertiesStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IKnownPerceptionInfraredFrameSourcePropertiesStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Exposure() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AutoExposureEnabled() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ExposureCompensation() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ActiveIlluminationEnabled() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AmbientSubtractionEnabled() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) StructureLightPatternEnabled() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) InterleavedIlluminationEnabled() const;
    };
    template <> struct consume<Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IKnownPerceptionInfraredFrameSourcePropertiesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IKnownPerceptionVideoFrameSourcePropertiesStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VideoProfile() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SupportedVideoProfiles() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AvailableVideoProfiles() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) IsMirrored() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) CameraIntrinsics() const;
    };
    template <> struct consume<Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IKnownPerceptionVideoFrameSourcePropertiesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IKnownPerceptionVideoProfilePropertiesStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) BitmapPixelFormat() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) BitmapAlphaMode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Width() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Height() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) FrameDuration() const;
    };
    template <> struct consume<Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IKnownPerceptionVideoProfilePropertiesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionColorFrame
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::VideoFrame) VideoFrame() const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionColorFrame>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionColorFrame<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionColorFrameArrivedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) RelativeTime() const;
        WINRT_IMPL_AUTO(Windows::Devices::Perception::PerceptionColorFrame) TryOpenFrame() const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionColorFrameArrivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionColorFrameReader
    {
        WINRT_IMPL_AUTO(winrt::event_token) FrameArrived(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameReader, Windows::Devices::Perception::PerceptionColorFrameArrivedEventArgs> const& handler) const;
        using FrameArrived_revoker = impl::event_revoker<Windows::Devices::Perception::IPerceptionColorFrameReader, &impl::abi_t<Windows::Devices::Perception::IPerceptionColorFrameReader>::remove_FrameArrived>;
        [[nodiscard]] FrameArrived_revoker FrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameReader, Windows::Devices::Perception::PerceptionColorFrameArrivedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) FrameArrived(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Perception::PerceptionColorFrameSource) Source() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsPaused() const;
        WINRT_IMPL_AUTO(void) IsPaused(bool value) const;
        WINRT_IMPL_AUTO(Windows::Devices::Perception::PerceptionColorFrame) TryReadLatestFrame() const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionColorFrameReader>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionColorFrameReader<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionColorFrameSource
    {
        WINRT_IMPL_AUTO(winrt::event_token) AvailableChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const;
        using AvailableChanged_revoker = impl::event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSource, &impl::abi_t<Windows::Devices::Perception::IPerceptionColorFrameSource>::remove_AvailableChanged>;
        [[nodiscard]] AvailableChanged_revoker AvailableChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) AvailableChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) ActiveChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const;
        using ActiveChanged_revoker = impl::event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSource, &impl::abi_t<Windows::Devices::Perception::IPerceptionColorFrameSource>::remove_ActiveChanged>;
        [[nodiscard]] ActiveChanged_revoker ActiveChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) ActiveChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PropertiesChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const& handler) const;
        using PropertiesChanged_revoker = impl::event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSource, &impl::abi_t<Windows::Devices::Perception::IPerceptionColorFrameSource>::remove_PropertiesChanged>;
        [[nodiscard]] PropertiesChanged_revoker PropertiesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PropertiesChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) VideoProfileChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const;
        using VideoProfileChanged_revoker = impl::event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSource, &impl::abi_t<Windows::Devices::Perception::IPerceptionColorFrameSource>::remove_VideoProfileChanged>;
        [[nodiscard]] VideoProfileChanged_revoker VideoProfileChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) VideoProfileChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) CameraIntrinsicsChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const;
        using CameraIntrinsicsChanged_revoker = impl::event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSource, &impl::abi_t<Windows::Devices::Perception::IPerceptionColorFrameSource>::remove_CameraIntrinsicsChanged>;
        [[nodiscard]] CameraIntrinsicsChanged_revoker CameraIntrinsicsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) CameraIntrinsicsChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceKind() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Available() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Active() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsControlled() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>) Properties() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile>) SupportedVideoProfiles() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile>) AvailableVideoProfiles() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Perception::PerceptionVideoProfile) VideoProfile() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Devices::Core::CameraIntrinsics) CameraIntrinsics() const;
        WINRT_IMPL_AUTO(Windows::Devices::Perception::PerceptionControlSession) AcquireControlSession() const;
        WINRT_IMPL_AUTO(bool) CanControlIndependentlyFrom(param::hstring const& targetId) const;
        WINRT_IMPL_AUTO(bool) IsCorrelatedWith(param::hstring const& targetId) const;
        WINRT_IMPL_AUTO(bool) TryGetTransformTo(param::hstring const& targetId, Windows::Foundation::Numerics::float4x4& result) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics>) TryGetDepthCorrelatedCameraIntrinsicsAsync(Windows::Devices::Perception::PerceptionDepthFrameSource const& correlatedDepthFrameSource) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper>) TryGetDepthCorrelatedCoordinateMapperAsync(param::hstring const& targetSourceId, Windows::Devices::Perception::PerceptionDepthFrameSource const& correlatedDepthFrameSource) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult>) TrySetVideoProfileAsync(Windows::Devices::Perception::PerceptionControlSession const& controlSession, Windows::Devices::Perception::PerceptionVideoProfile const& profile) const;
        WINRT_IMPL_AUTO(Windows::Devices::Perception::PerceptionColorFrameReader) OpenReader() const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionColorFrameSource>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionColorFrameSource2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionColorFrameSource2>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionColorFrameSource2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionColorFrameSourceAddedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Perception::PerceptionColorFrameSource) FrameSource() const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionColorFrameSourceAddedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionColorFrameSourceAddedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionColorFrameSourceRemovedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Perception::PerceptionColorFrameSource) FrameSource() const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionColorFrameSourceRemovedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionColorFrameSourceRemovedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionColorFrameSourceStatics
    {
        WINRT_IMPL_AUTO(Windows::Devices::Perception::PerceptionColorFrameSourceWatcher) CreateWatcher() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionColorFrameSource>>) FindAllAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionColorFrameSource>) FromIdAsync(param::hstring const& id) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus>) RequestAccessAsync() const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionColorFrameSourceStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionColorFrameSourceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher
    {
        WINRT_IMPL_AUTO(winrt::event_token) SourceAdded(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceAddedEventArgs> const& handler) const;
        using SourceAdded_revoker = impl::event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher, &impl::abi_t<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>::remove_SourceAdded>;
        [[nodiscard]] SourceAdded_revoker SourceAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceAddedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) SourceAdded(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) SourceRemoved(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceRemovedEventArgs> const& handler) const;
        using SourceRemoved_revoker = impl::event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher, &impl::abi_t<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>::remove_SourceRemoved>;
        [[nodiscard]] SourceRemoved_revoker SourceRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceRemovedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) SourceRemoved(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Stopped(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const;
        using Stopped_revoker = impl::event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher, &impl::abi_t<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>::remove_Stopped>;
        [[nodiscard]] Stopped_revoker Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Stopped(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const;
        using EnumerationCompleted_revoker = impl::event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher, &impl::abi_t<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>::remove_EnumerationCompleted>;
        [[nodiscard]] EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) EnumerationCompleted(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DeviceWatcherStatus) Status() const;
        WINRT_IMPL_AUTO(void) Start() const;
        WINRT_IMPL_AUTO(void) Stop() const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionControlSession
    {
        WINRT_IMPL_AUTO(winrt::event_token) ControlLost(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionControlSession, Windows::Foundation::IInspectable> const& handler) const;
        using ControlLost_revoker = impl::event_revoker<Windows::Devices::Perception::IPerceptionControlSession, &impl::abi_t<Windows::Devices::Perception::IPerceptionControlSession>::remove_ControlLost>;
        [[nodiscard]] ControlLost_revoker ControlLost(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionControlSession, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) ControlLost(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult>) TrySetPropertyAsync(param::hstring const& name, Windows::Foundation::IInspectable const& value) const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionControlSession>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionControlSession<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionDepthCorrelatedCameraIntrinsics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float3) UnprojectPixelAtCorrelatedDepth(Windows::Foundation::Point const& pixelCoordinate, Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame) const;
        WINRT_IMPL_AUTO(void) UnprojectPixelsAtCorrelatedDepth(array_view<Windows::Foundation::Point const> sourceCoordinates, Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame, array_view<Windows::Foundation::Numerics::float3> results) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) UnprojectRegionPixelsAtCorrelatedDepthAsync(Windows::Foundation::Rect const& region, Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame, array_view<Windows::Foundation::Numerics::float3> results) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) UnprojectAllPixelsAtCorrelatedDepthAsync(Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame, array_view<Windows::Foundation::Numerics::float3> results) const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionDepthCorrelatedCameraIntrinsics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionDepthCorrelatedCoordinateMapper
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Point) MapPixelToTarget(Windows::Foundation::Point const& sourcePixelCoordinate, Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame) const;
        WINRT_IMPL_AUTO(void) MapPixelsToTarget(array_view<Windows::Foundation::Point const> sourceCoordinates, Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame, array_view<Windows::Foundation::Point> results) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) MapRegionOfPixelsToTargetAsync(Windows::Foundation::Rect const& region, Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame, array_view<Windows::Foundation::Point> targetCoordinates) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) MapAllPixelsToTargetAsync(Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame, array_view<Windows::Foundation::Point> targetCoordinates) const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionDepthCorrelatedCoordinateMapper<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionDepthFrame
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::VideoFrame) VideoFrame() const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionDepthFrame>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionDepthFrame<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionDepthFrameArrivedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) RelativeTime() const;
        WINRT_IMPL_AUTO(Windows::Devices::Perception::PerceptionDepthFrame) TryOpenFrame() const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionDepthFrameArrivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionDepthFrameReader
    {
        WINRT_IMPL_AUTO(winrt::event_token) FrameArrived(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameReader, Windows::Devices::Perception::PerceptionDepthFrameArrivedEventArgs> const& handler) const;
        using FrameArrived_revoker = impl::event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameReader, &impl::abi_t<Windows::Devices::Perception::IPerceptionDepthFrameReader>::remove_FrameArrived>;
        [[nodiscard]] FrameArrived_revoker FrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameReader, Windows::Devices::Perception::PerceptionDepthFrameArrivedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) FrameArrived(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Perception::PerceptionDepthFrameSource) Source() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsPaused() const;
        WINRT_IMPL_AUTO(void) IsPaused(bool value) const;
        WINRT_IMPL_AUTO(Windows::Devices::Perception::PerceptionDepthFrame) TryReadLatestFrame() const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionDepthFrameReader>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionDepthFrameReader<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionDepthFrameSource
    {
        WINRT_IMPL_AUTO(winrt::event_token) AvailableChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const;
        using AvailableChanged_revoker = impl::event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSource, &impl::abi_t<Windows::Devices::Perception::IPerceptionDepthFrameSource>::remove_AvailableChanged>;
        [[nodiscard]] AvailableChanged_revoker AvailableChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) AvailableChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) ActiveChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const;
        using ActiveChanged_revoker = impl::event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSource, &impl::abi_t<Windows::Devices::Perception::IPerceptionDepthFrameSource>::remove_ActiveChanged>;
        [[nodiscard]] ActiveChanged_revoker ActiveChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) ActiveChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PropertiesChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const& handler) const;
        using PropertiesChanged_revoker = impl::event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSource, &impl::abi_t<Windows::Devices::Perception::IPerceptionDepthFrameSource>::remove_PropertiesChanged>;
        [[nodiscard]] PropertiesChanged_revoker PropertiesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PropertiesChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) VideoProfileChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const;
        using VideoProfileChanged_revoker = impl::event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSource, &impl::abi_t<Windows::Devices::Perception::IPerceptionDepthFrameSource>::remove_VideoProfileChanged>;
        [[nodiscard]] VideoProfileChanged_revoker VideoProfileChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) VideoProfileChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) CameraIntrinsicsChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const;
        using CameraIntrinsicsChanged_revoker = impl::event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSource, &impl::abi_t<Windows::Devices::Perception::IPerceptionDepthFrameSource>::remove_CameraIntrinsicsChanged>;
        [[nodiscard]] CameraIntrinsicsChanged_revoker CameraIntrinsicsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) CameraIntrinsicsChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceKind() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Available() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Active() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsControlled() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>) Properties() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile>) SupportedVideoProfiles() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile>) AvailableVideoProfiles() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Perception::PerceptionVideoProfile) VideoProfile() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Devices::Core::CameraIntrinsics) CameraIntrinsics() const;
        WINRT_IMPL_AUTO(Windows::Devices::Perception::PerceptionControlSession) AcquireControlSession() const;
        WINRT_IMPL_AUTO(bool) CanControlIndependentlyFrom(param::hstring const& targetId) const;
        WINRT_IMPL_AUTO(bool) IsCorrelatedWith(param::hstring const& targetId) const;
        WINRT_IMPL_AUTO(bool) TryGetTransformTo(param::hstring const& targetId, Windows::Foundation::Numerics::float4x4& result) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics>) TryGetDepthCorrelatedCameraIntrinsicsAsync(Windows::Devices::Perception::PerceptionDepthFrameSource const& target) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper>) TryGetDepthCorrelatedCoordinateMapperAsync(param::hstring const& targetId, Windows::Devices::Perception::PerceptionDepthFrameSource const& depthFrameSourceToMapWith) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult>) TrySetVideoProfileAsync(Windows::Devices::Perception::PerceptionControlSession const& controlSession, Windows::Devices::Perception::PerceptionVideoProfile const& profile) const;
        WINRT_IMPL_AUTO(Windows::Devices::Perception::PerceptionDepthFrameReader) OpenReader() const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionDepthFrameSource>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionDepthFrameSource2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionDepthFrameSource2>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionDepthFrameSource2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceAddedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Perception::PerceptionDepthFrameSource) FrameSource() const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionDepthFrameSourceAddedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceAddedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceRemovedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Perception::PerceptionDepthFrameSource) FrameSource() const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionDepthFrameSourceRemovedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceRemovedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceStatics
    {
        WINRT_IMPL_AUTO(Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher) CreateWatcher() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionDepthFrameSource>>) FindAllAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthFrameSource>) FromIdAsync(param::hstring const& id) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus>) RequestAccessAsync() const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher
    {
        WINRT_IMPL_AUTO(winrt::event_token) SourceAdded(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceAddedEventArgs> const& handler) const;
        using SourceAdded_revoker = impl::event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher, &impl::abi_t<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>::remove_SourceAdded>;
        [[nodiscard]] SourceAdded_revoker SourceAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceAddedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) SourceAdded(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) SourceRemoved(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceRemovedEventArgs> const& handler) const;
        using SourceRemoved_revoker = impl::event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher, &impl::abi_t<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>::remove_SourceRemoved>;
        [[nodiscard]] SourceRemoved_revoker SourceRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceRemovedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) SourceRemoved(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Stopped(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const;
        using Stopped_revoker = impl::event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher, &impl::abi_t<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>::remove_Stopped>;
        [[nodiscard]] Stopped_revoker Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Stopped(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const;
        using EnumerationCompleted_revoker = impl::event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher, &impl::abi_t<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>::remove_EnumerationCompleted>;
        [[nodiscard]] EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) EnumerationCompleted(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DeviceWatcherStatus) Status() const;
        WINRT_IMPL_AUTO(void) Start() const;
        WINRT_IMPL_AUTO(void) Stop() const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionFrameSourcePropertiesChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::CollectionChange) CollectionChange() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Key() const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionFrameSourcePropertiesChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionFrameSourcePropertyChangeResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus) Status() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) NewValue() const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionFrameSourcePropertyChangeResult<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionInfraredFrame
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::VideoFrame) VideoFrame() const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionInfraredFrame>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionInfraredFrame<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionInfraredFrameArrivedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) RelativeTime() const;
        WINRT_IMPL_AUTO(Windows::Devices::Perception::PerceptionInfraredFrame) TryOpenFrame() const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionInfraredFrameArrivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionInfraredFrameReader
    {
        WINRT_IMPL_AUTO(winrt::event_token) FrameArrived(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameReader, Windows::Devices::Perception::PerceptionInfraredFrameArrivedEventArgs> const& handler) const;
        using FrameArrived_revoker = impl::event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameReader, &impl::abi_t<Windows::Devices::Perception::IPerceptionInfraredFrameReader>::remove_FrameArrived>;
        [[nodiscard]] FrameArrived_revoker FrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameReader, Windows::Devices::Perception::PerceptionInfraredFrameArrivedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) FrameArrived(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Perception::PerceptionInfraredFrameSource) Source() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsPaused() const;
        WINRT_IMPL_AUTO(void) IsPaused(bool value) const;
        WINRT_IMPL_AUTO(Windows::Devices::Perception::PerceptionInfraredFrame) TryReadLatestFrame() const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionInfraredFrameReader>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionInfraredFrameReader<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource
    {
        WINRT_IMPL_AUTO(winrt::event_token) AvailableChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const;
        using AvailableChanged_revoker = impl::event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSource, &impl::abi_t<Windows::Devices::Perception::IPerceptionInfraredFrameSource>::remove_AvailableChanged>;
        [[nodiscard]] AvailableChanged_revoker AvailableChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) AvailableChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) ActiveChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const;
        using ActiveChanged_revoker = impl::event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSource, &impl::abi_t<Windows::Devices::Perception::IPerceptionInfraredFrameSource>::remove_ActiveChanged>;
        [[nodiscard]] ActiveChanged_revoker ActiveChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) ActiveChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PropertiesChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const& handler) const;
        using PropertiesChanged_revoker = impl::event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSource, &impl::abi_t<Windows::Devices::Perception::IPerceptionInfraredFrameSource>::remove_PropertiesChanged>;
        [[nodiscard]] PropertiesChanged_revoker PropertiesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PropertiesChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) VideoProfileChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const;
        using VideoProfileChanged_revoker = impl::event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSource, &impl::abi_t<Windows::Devices::Perception::IPerceptionInfraredFrameSource>::remove_VideoProfileChanged>;
        [[nodiscard]] VideoProfileChanged_revoker VideoProfileChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) VideoProfileChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) CameraIntrinsicsChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const;
        using CameraIntrinsicsChanged_revoker = impl::event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSource, &impl::abi_t<Windows::Devices::Perception::IPerceptionInfraredFrameSource>::remove_CameraIntrinsicsChanged>;
        [[nodiscard]] CameraIntrinsicsChanged_revoker CameraIntrinsicsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) CameraIntrinsicsChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceKind() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Available() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Active() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsControlled() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>) Properties() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile>) SupportedVideoProfiles() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile>) AvailableVideoProfiles() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Perception::PerceptionVideoProfile) VideoProfile() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Devices::Core::CameraIntrinsics) CameraIntrinsics() const;
        WINRT_IMPL_AUTO(Windows::Devices::Perception::PerceptionControlSession) AcquireControlSession() const;
        WINRT_IMPL_AUTO(bool) CanControlIndependentlyFrom(param::hstring const& targetId) const;
        WINRT_IMPL_AUTO(bool) IsCorrelatedWith(param::hstring const& targetId) const;
        WINRT_IMPL_AUTO(bool) TryGetTransformTo(param::hstring const& targetId, Windows::Foundation::Numerics::float4x4& result) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics>) TryGetDepthCorrelatedCameraIntrinsicsAsync(Windows::Devices::Perception::PerceptionDepthFrameSource const& target) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper>) TryGetDepthCorrelatedCoordinateMapperAsync(param::hstring const& targetId, Windows::Devices::Perception::PerceptionDepthFrameSource const& depthFrameSourceToMapWith) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult>) TrySetVideoProfileAsync(Windows::Devices::Perception::PerceptionControlSession const& controlSession, Windows::Devices::Perception::PerceptionVideoProfile const& profile) const;
        WINRT_IMPL_AUTO(Windows::Devices::Perception::PerceptionInfraredFrameReader) OpenReader() const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionInfraredFrameSource>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionInfraredFrameSource2>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceAddedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Perception::PerceptionInfraredFrameSource) FrameSource() const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionInfraredFrameSourceAddedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceAddedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceRemovedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Perception::PerceptionInfraredFrameSource) FrameSource() const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionInfraredFrameSourceRemovedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceRemovedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceStatics
    {
        WINRT_IMPL_AUTO(Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher) CreateWatcher() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionInfraredFrameSource>>) FindAllAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionInfraredFrameSource>) FromIdAsync(param::hstring const& id) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus>) RequestAccessAsync() const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher
    {
        WINRT_IMPL_AUTO(winrt::event_token) SourceAdded(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceAddedEventArgs> const& handler) const;
        using SourceAdded_revoker = impl::event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher, &impl::abi_t<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>::remove_SourceAdded>;
        [[nodiscard]] SourceAdded_revoker SourceAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceAddedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) SourceAdded(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) SourceRemoved(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceRemovedEventArgs> const& handler) const;
        using SourceRemoved_revoker = impl::event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher, &impl::abi_t<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>::remove_SourceRemoved>;
        [[nodiscard]] SourceRemoved_revoker SourceRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceRemovedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) SourceRemoved(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Stopped(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const;
        using Stopped_revoker = impl::event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher, &impl::abi_t<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>::remove_Stopped>;
        [[nodiscard]] Stopped_revoker Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Stopped(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const;
        using EnumerationCompleted_revoker = impl::event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher, &impl::abi_t<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>::remove_EnumerationCompleted>;
        [[nodiscard]] EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) EnumerationCompleted(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DeviceWatcherStatus) Status() const;
        WINRT_IMPL_AUTO(void) Start() const;
        WINRT_IMPL_AUTO(void) Stop() const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Perception_IPerceptionVideoProfile
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Imaging::BitmapPixelFormat) BitmapPixelFormat() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Imaging::BitmapAlphaMode) BitmapAlphaMode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) Width() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) Height() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) FrameDuration() const;
        WINRT_IMPL_AUTO(bool) IsEqual(Windows::Devices::Perception::PerceptionVideoProfile const& other) const;
    };
    template <> struct consume<Windows::Devices::Perception::IPerceptionVideoProfile>
    {
        template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionVideoProfile<D>;
    };
}
#endif
