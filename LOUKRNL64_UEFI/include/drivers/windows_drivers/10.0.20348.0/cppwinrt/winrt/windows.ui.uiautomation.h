// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_UIAutomation_H
#define WINRT_Windows_UI_UIAutomation_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.200609.3"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.UI.h"
#include "winrt/impl/Windows.UI.UIAutomation.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_UIAutomation_IAutomationElement<D>::IsRemoteSystem() const noexcept
    {
        bool value{};
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::UIAutomation::IAutomationElement)->get_IsRemoteSystem(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_UI_UIAutomation_IAutomationElement<D>::AppUserModelId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::UIAutomation::IAutomationElement)->get_AppUserModelId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_UI_UIAutomation_IAutomationElement<D>::ExecutableFileName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::UIAutomation::IAutomationElement)->get_ExecutableFileName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::UIAutomation::IAutomationElement> : produce_base<D, Windows::UI::UIAutomation::IAutomationElement>
    {
        int32_t __stdcall get_IsRemoteSystem(bool* value) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsRemoteSystem());
            return 0;
        }
        int32_t __stdcall get_AppUserModelId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AppUserModelId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExecutableFileName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ExecutableFileName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::UIAutomation::IAutomationTextRange> : produce_base<D, Windows::UI::UIAutomation::IAutomationTextRange>
    {
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::UI::UIAutomation
{
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::UI::UIAutomation::IAutomationElement> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::UIAutomation::IAutomationTextRange> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::UIAutomation::AutomationElement> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::UIAutomation::AutomationTextRange> : winrt::impl::hash_base {};
#endif
}
#endif
