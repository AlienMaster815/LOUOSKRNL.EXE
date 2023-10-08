// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_UI_Accessibility_0_H
#define WINRT_Windows_UI_Accessibility_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct Rect;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::UI::Accessibility
{
    struct IScreenReaderPositionChangedEventArgs;
    struct IScreenReaderService;
    struct ScreenReaderPositionChangedEventArgs;
    struct ScreenReaderService;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::UI::Accessibility::IScreenReaderPositionChangedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Accessibility::IScreenReaderService>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Accessibility::ScreenReaderPositionChangedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Accessibility::ScreenReaderService>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Accessibility::ScreenReaderPositionChangedEventArgs> = L"Windows.UI.Accessibility.ScreenReaderPositionChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Accessibility::ScreenReaderService> = L"Windows.UI.Accessibility.ScreenReaderService";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Accessibility::IScreenReaderPositionChangedEventArgs> = L"Windows.UI.Accessibility.IScreenReaderPositionChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Accessibility::IScreenReaderService> = L"Windows.UI.Accessibility.IScreenReaderService";
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Accessibility::IScreenReaderPositionChangedEventArgs>{ 0x557EB5E5,0x54D0,0x5CCD,{ 0x9F,0xC5,0xED,0x33,0x35,0x7F,0x8A,0x9F } }; // 557EB5E5-54D0-5CCD-9FC5-ED33357F8A9F
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Accessibility::IScreenReaderService>{ 0x19475427,0xEAC0,0x50D3,{ 0xBD,0xD9,0x9B,0x48,0x7A,0x22,0x62,0x56 } }; // 19475427-EAC0-50D3-BDD9-9B487A226256
    template <> struct default_interface<winrt::Windows::UI::Accessibility::ScreenReaderPositionChangedEventArgs>{ using type = winrt::Windows::UI::Accessibility::IScreenReaderPositionChangedEventArgs; };
    template <> struct default_interface<winrt::Windows::UI::Accessibility::ScreenReaderService>{ using type = winrt::Windows::UI::Accessibility::IScreenReaderService; };
    template <> struct abi<winrt::Windows::UI::Accessibility::IScreenReaderPositionChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ScreenPositionInRawPixels(winrt::Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_IsReadingText(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Accessibility::IScreenReaderService>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CurrentScreenReaderPosition(void**) noexcept = 0;
            virtual int32_t __stdcall add_ScreenReaderPositionChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ScreenReaderPositionChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Accessibility_IScreenReaderPositionChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Rect) ScreenPositionInRawPixels() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsReadingText() const;
    };
    template <> struct consume<winrt::Windows::UI::Accessibility::IScreenReaderPositionChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Accessibility_IScreenReaderPositionChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Accessibility_IScreenReaderService
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Accessibility::ScreenReaderPositionChangedEventArgs) CurrentScreenReaderPosition() const;
        WINRT_IMPL_AUTO(winrt::event_token) ScreenReaderPositionChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Accessibility::ScreenReaderService, winrt::Windows::UI::Accessibility::ScreenReaderPositionChangedEventArgs> const& handler) const;
        using ScreenReaderPositionChanged_revoker = impl::event_revoker<winrt::Windows::UI::Accessibility::IScreenReaderService, &impl::abi_t<winrt::Windows::UI::Accessibility::IScreenReaderService>::remove_ScreenReaderPositionChanged>;
        [[nodiscard]] ScreenReaderPositionChanged_revoker ScreenReaderPositionChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Accessibility::ScreenReaderService, winrt::Windows::UI::Accessibility::ScreenReaderPositionChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ScreenReaderPositionChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::UI::Accessibility::IScreenReaderService>
    {
        template <typename D> using type = consume_Windows_UI_Accessibility_IScreenReaderService<D>;
    };
}
#endif
