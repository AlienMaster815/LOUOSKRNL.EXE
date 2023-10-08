// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Networking_XboxLive_2_H
#define WINRT_Windows_Networking_XboxLive_2_H
#include "winrt/impl/Windows.Networking.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Networking.XboxLive.1.h"
WINRT_EXPORT namespace winrt::Windows::Networking::XboxLive
{
    struct __declspec(empty_bases) XboxLiveDeviceAddress : Windows::Networking::XboxLive::IXboxLiveDeviceAddress
    {
        XboxLiveDeviceAddress(std::nullptr_t) noexcept {}
        XboxLiveDeviceAddress(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::XboxLive::IXboxLiveDeviceAddress(ptr, take_ownership_from_abi) {}
        static auto CreateFromSnapshotBase64(param::hstring const& base64);
        static auto CreateFromSnapshotBuffer(Windows::Storage::Streams::IBuffer const& buffer);
        static auto CreateFromSnapshotBytes(array_view<uint8_t const> buffer);
        static auto GetLocal();
        [[nodiscard]] static auto MaxSnapshotBytesSize();
    };
    struct __declspec(empty_bases) XboxLiveEndpointPair : Windows::Networking::XboxLive::IXboxLiveEndpointPair
    {
        XboxLiveEndpointPair(std::nullptr_t) noexcept {}
        XboxLiveEndpointPair(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::XboxLive::IXboxLiveEndpointPair(ptr, take_ownership_from_abi) {}
        static auto FindEndpointPairBySocketAddressBytes(array_view<uint8_t const> localSocketAddress, array_view<uint8_t const> remoteSocketAddress);
        static auto FindEndpointPairByHostNamesAndPorts(Windows::Networking::HostName const& localHostName, param::hstring const& localPort, Windows::Networking::HostName const& remoteHostName, param::hstring const& remotePort);
    };
    struct __declspec(empty_bases) XboxLiveEndpointPairCreationResult : Windows::Networking::XboxLive::IXboxLiveEndpointPairCreationResult
    {
        XboxLiveEndpointPairCreationResult(std::nullptr_t) noexcept {}
        XboxLiveEndpointPairCreationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::XboxLive::IXboxLiveEndpointPairCreationResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) XboxLiveEndpointPairStateChangedEventArgs : Windows::Networking::XboxLive::IXboxLiveEndpointPairStateChangedEventArgs
    {
        XboxLiveEndpointPairStateChangedEventArgs(std::nullptr_t) noexcept {}
        XboxLiveEndpointPairStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::XboxLive::IXboxLiveEndpointPairStateChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) XboxLiveEndpointPairTemplate : Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate
    {
        XboxLiveEndpointPairTemplate(std::nullptr_t) noexcept {}
        XboxLiveEndpointPairTemplate(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate(ptr, take_ownership_from_abi) {}
        static auto GetTemplateByName(param::hstring const& name);
        [[nodiscard]] static auto Templates();
    };
    struct __declspec(empty_bases) XboxLiveInboundEndpointPairCreatedEventArgs : Windows::Networking::XboxLive::IXboxLiveInboundEndpointPairCreatedEventArgs
    {
        XboxLiveInboundEndpointPairCreatedEventArgs(std::nullptr_t) noexcept {}
        XboxLiveInboundEndpointPairCreatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::XboxLive::IXboxLiveInboundEndpointPairCreatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) XboxLiveQualityOfServiceMeasurement : Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement
    {
        XboxLiveQualityOfServiceMeasurement(std::nullptr_t) noexcept {}
        XboxLiveQualityOfServiceMeasurement(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement(ptr, take_ownership_from_abi) {}
        XboxLiveQualityOfServiceMeasurement();
        static auto PublishPrivatePayloadBytes(array_view<uint8_t const> payload);
        static auto ClearPrivatePayload();
        [[nodiscard]] static auto MaxSimultaneousProbeConnections();
        static auto MaxSimultaneousProbeConnections(uint32_t value);
        [[nodiscard]] static auto IsSystemOutboundBandwidthConstrained();
        static auto IsSystemOutboundBandwidthConstrained(bool value);
        [[nodiscard]] static auto IsSystemInboundBandwidthConstrained();
        static auto IsSystemInboundBandwidthConstrained(bool value);
        [[nodiscard]] static auto PublishedPrivatePayload();
        static auto PublishedPrivatePayload(Windows::Storage::Streams::IBuffer const& value);
        [[nodiscard]] static auto MaxPrivatePayloadSize();
    };
    struct __declspec(empty_bases) XboxLiveQualityOfServiceMetricResult : Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult
    {
        XboxLiveQualityOfServiceMetricResult(std::nullptr_t) noexcept {}
        XboxLiveQualityOfServiceMetricResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) XboxLiveQualityOfServicePrivatePayloadResult : Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult
    {
        XboxLiveQualityOfServicePrivatePayloadResult(std::nullptr_t) noexcept {}
        XboxLiveQualityOfServicePrivatePayloadResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult(ptr, take_ownership_from_abi) {}
    };
}
#endif
