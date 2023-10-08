// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Authentication_Identity_0_H
#define WINRT_Windows_Security_Authentication_Identity_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Identity
{
    struct IEnterpriseKeyCredentialRegistrationInfo;
    struct IEnterpriseKeyCredentialRegistrationManager;
    struct IEnterpriseKeyCredentialRegistrationManagerStatics;
    struct EnterpriseKeyCredentialRegistrationInfo;
    struct EnterpriseKeyCredentialRegistrationManager;
}
namespace winrt::impl
{
    template <> struct category<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo>{ using type = interface_category; };
    template <> struct category<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager>{ using type = interface_category; };
    template <> struct category<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo>{ using type = class_category; };
    template <> struct category<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager>{ using type = class_category; };
    template <> inline constexpr auto& name_v<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo> = L"Windows.Security.Authentication.Identity.EnterpriseKeyCredentialRegistrationInfo";
    template <> inline constexpr auto& name_v<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager> = L"Windows.Security.Authentication.Identity.EnterpriseKeyCredentialRegistrationManager";
    template <> inline constexpr auto& name_v<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo> = L"Windows.Security.Authentication.Identity.IEnterpriseKeyCredentialRegistrationInfo";
    template <> inline constexpr auto& name_v<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager> = L"Windows.Security.Authentication.Identity.IEnterpriseKeyCredentialRegistrationManager";
    template <> inline constexpr auto& name_v<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManagerStatics> = L"Windows.Security.Authentication.Identity.IEnterpriseKeyCredentialRegistrationManagerStatics";
    template <> inline constexpr guid guid_v<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo>{ 0x38321ACC,0x672B,0x4823,{ 0xB6,0x03,0x6B,0x3C,0x75,0x3D,0xAF,0x97 } }; // 38321ACC-672B-4823-B603-6B3C753DAF97
    template <> inline constexpr guid guid_v<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager>{ 0x83F3BE3F,0xA25F,0x4CBA,{ 0xBB,0x8E,0xBD,0xC3,0x2D,0x03,0xC2,0x97 } }; // 83F3BE3F-A25F-4CBA-BB8E-BDC32D03C297
    template <> inline constexpr guid guid_v<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManagerStatics>{ 0x77B85E9E,0xACF4,0x4BC0,{ 0xBA,0xC2,0x40,0xBB,0x46,0xEF,0xBB,0x3F } }; // 77B85E9E-ACF4-4BC0-BAC2-40BB46EFBB3F
    template <> struct default_interface<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo>{ using type = Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo; };
    template <> struct default_interface<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager>{ using type = Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager; };
    template <> struct abi<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TenantId(void**) noexcept = 0;
            virtual int32_t __stdcall get_TenantName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Subject(void**) noexcept = 0;
            virtual int32_t __stdcall get_KeyId(void**) noexcept = 0;
            virtual int32_t __stdcall get_KeyName(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetRegistrationsAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Current(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TenantId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TenantName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Subject() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) KeyId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) KeyName() const;
    };
    template <> struct consume<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationManager
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo>>) GetRegistrationsAsync() const;
    };
    template <> struct consume<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationManager<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationManagerStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager) Current() const;
    };
    template <> struct consume<Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManagerStatics>
    {
        template <typename D> using type = consume_Windows_Security_Authentication_Identity_IEnterpriseKeyCredentialRegistrationManagerStatics<D>;
    };
}
#endif
