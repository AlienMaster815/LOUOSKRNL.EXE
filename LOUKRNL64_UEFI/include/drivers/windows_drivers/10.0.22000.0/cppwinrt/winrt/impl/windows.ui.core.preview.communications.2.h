// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Core_Preview_Communications_2_H
#define WINRT_Windows_UI_Core_Preview_Communications_2_H
#include "winrt/impl/Windows.UI.Core.Preview.Communications.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Core::Preview::Communications
{
    struct __declspec(empty_bases) PreviewTeamCleanupRequestedEventArgs : Windows::UI::Core::Preview::Communications::IPreviewTeamCleanupRequestedEventArgs
    {
        PreviewTeamCleanupRequestedEventArgs(std::nullptr_t) noexcept {}
        PreviewTeamCleanupRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::Preview::Communications::IPreviewTeamCleanupRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PreviewTeamCommandInvokedEventArgs : Windows::UI::Core::Preview::Communications::IPreviewTeamCommandInvokedEventArgs
    {
        PreviewTeamCommandInvokedEventArgs(std::nullptr_t) noexcept {}
        PreviewTeamCommandInvokedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::Preview::Communications::IPreviewTeamCommandInvokedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PreviewTeamDeviceCredentials : Windows::UI::Core::Preview::Communications::IPreviewTeamDeviceCredentials
    {
        PreviewTeamDeviceCredentials(std::nullptr_t) noexcept {}
        PreviewTeamDeviceCredentials(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::Preview::Communications::IPreviewTeamDeviceCredentials(ptr, take_ownership_from_abi) {}
        PreviewTeamDeviceCredentials();
    };
    struct __declspec(empty_bases) PreviewTeamEndMeetingRequestedEventArgs : Windows::UI::Core::Preview::Communications::IPreviewTeamEndMeetingRequestedEventArgs
    {
        PreviewTeamEndMeetingRequestedEventArgs(std::nullptr_t) noexcept {}
        PreviewTeamEndMeetingRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::Preview::Communications::IPreviewTeamEndMeetingRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PreviewTeamJoinMeetingRequestedEventArgs : Windows::UI::Core::Preview::Communications::IPreviewTeamJoinMeetingRequestedEventArgs
    {
        PreviewTeamJoinMeetingRequestedEventArgs(std::nullptr_t) noexcept {}
        PreviewTeamJoinMeetingRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::Preview::Communications::IPreviewTeamJoinMeetingRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PreviewTeamView : Windows::UI::Core::Preview::Communications::IPreviewTeamView,
        impl::require<PreviewTeamView, Windows::UI::Core::Preview::Communications::IPreviewTeamView2>
    {
        PreviewTeamView(std::nullptr_t) noexcept {}
        PreviewTeamView(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::Preview::Communications::IPreviewTeamView(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
    };
}
#endif
