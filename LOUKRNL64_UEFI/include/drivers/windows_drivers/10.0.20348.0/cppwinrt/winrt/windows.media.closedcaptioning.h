// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_ClosedCaptioning_H
#define WINRT_Windows_Media_ClosedCaptioning_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.200609.3"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Media.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.Media.ClosedCaptioning.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::ClosedCaptioning::ClosedCaptionColor) consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::FontColor() const
    {
        Windows::Media::ClosedCaptioning::ClosedCaptionColor value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics)->get_FontColor(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Color) consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::ComputedFontColor() const
    {
        Windows::UI::Color value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics)->get_ComputedFontColor(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::ClosedCaptioning::ClosedCaptionOpacity) consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::FontOpacity() const
    {
        Windows::Media::ClosedCaptioning::ClosedCaptionOpacity value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics)->get_FontOpacity(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::ClosedCaptioning::ClosedCaptionSize) consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::FontSize() const
    {
        Windows::Media::ClosedCaptioning::ClosedCaptionSize value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics)->get_FontSize(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::ClosedCaptioning::ClosedCaptionStyle) consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::FontStyle() const
    {
        Windows::Media::ClosedCaptioning::ClosedCaptionStyle value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics)->get_FontStyle(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::ClosedCaptioning::ClosedCaptionEdgeEffect) consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::FontEffect() const
    {
        Windows::Media::ClosedCaptioning::ClosedCaptionEdgeEffect value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics)->get_FontEffect(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::ClosedCaptioning::ClosedCaptionColor) consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::BackgroundColor() const
    {
        Windows::Media::ClosedCaptioning::ClosedCaptionColor value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics)->get_BackgroundColor(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Color) consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::ComputedBackgroundColor() const
    {
        Windows::UI::Color value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics)->get_ComputedBackgroundColor(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::ClosedCaptioning::ClosedCaptionOpacity) consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::BackgroundOpacity() const
    {
        Windows::Media::ClosedCaptioning::ClosedCaptionOpacity value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics)->get_BackgroundOpacity(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::ClosedCaptioning::ClosedCaptionColor) consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::RegionColor() const
    {
        Windows::Media::ClosedCaptioning::ClosedCaptionColor value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics)->get_RegionColor(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Color) consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::ComputedRegionColor() const
    {
        Windows::UI::Color value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics)->get_ComputedRegionColor(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Media::ClosedCaptioning::ClosedCaptionOpacity) consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>::RegionOpacity() const
    {
        Windows::Media::ClosedCaptioning::ClosedCaptionOpacity value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics)->get_RegionOpacity(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics> : produce_base<D, Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>
    {
        int32_t __stdcall get_FontColor(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::ClosedCaptioning::ClosedCaptionColor>(this->shim().FontColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ComputedFontColor(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().ComputedFontColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FontOpacity(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::ClosedCaptioning::ClosedCaptionOpacity>(this->shim().FontOpacity());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FontSize(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::ClosedCaptioning::ClosedCaptionSize>(this->shim().FontSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FontStyle(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::ClosedCaptioning::ClosedCaptionStyle>(this->shim().FontStyle());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FontEffect(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::ClosedCaptioning::ClosedCaptionEdgeEffect>(this->shim().FontEffect());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BackgroundColor(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::ClosedCaptioning::ClosedCaptionColor>(this->shim().BackgroundColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ComputedBackgroundColor(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().ComputedBackgroundColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BackgroundOpacity(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::ClosedCaptioning::ClosedCaptionOpacity>(this->shim().BackgroundOpacity());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RegionColor(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::ClosedCaptioning::ClosedCaptionColor>(this->shim().RegionColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ComputedRegionColor(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().ComputedRegionColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RegionOpacity(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::ClosedCaptioning::ClosedCaptionOpacity>(this->shim().RegionOpacity());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Media::ClosedCaptioning
{
    inline auto ClosedCaptionProperties::FontColor()
    {
        return impl::call_factory_cast<Windows::Media::ClosedCaptioning::ClosedCaptionColor(*)(IClosedCaptionPropertiesStatics const&), ClosedCaptionProperties, IClosedCaptionPropertiesStatics>([](IClosedCaptionPropertiesStatics const& f) { return f.FontColor(); });
    }
    inline auto ClosedCaptionProperties::ComputedFontColor()
    {
        return impl::call_factory_cast<Windows::UI::Color(*)(IClosedCaptionPropertiesStatics const&), ClosedCaptionProperties, IClosedCaptionPropertiesStatics>([](IClosedCaptionPropertiesStatics const& f) { return f.ComputedFontColor(); });
    }
    inline auto ClosedCaptionProperties::FontOpacity()
    {
        return impl::call_factory_cast<Windows::Media::ClosedCaptioning::ClosedCaptionOpacity(*)(IClosedCaptionPropertiesStatics const&), ClosedCaptionProperties, IClosedCaptionPropertiesStatics>([](IClosedCaptionPropertiesStatics const& f) { return f.FontOpacity(); });
    }
    inline auto ClosedCaptionProperties::FontSize()
    {
        return impl::call_factory_cast<Windows::Media::ClosedCaptioning::ClosedCaptionSize(*)(IClosedCaptionPropertiesStatics const&), ClosedCaptionProperties, IClosedCaptionPropertiesStatics>([](IClosedCaptionPropertiesStatics const& f) { return f.FontSize(); });
    }
    inline auto ClosedCaptionProperties::FontStyle()
    {
        return impl::call_factory_cast<Windows::Media::ClosedCaptioning::ClosedCaptionStyle(*)(IClosedCaptionPropertiesStatics const&), ClosedCaptionProperties, IClosedCaptionPropertiesStatics>([](IClosedCaptionPropertiesStatics const& f) { return f.FontStyle(); });
    }
    inline auto ClosedCaptionProperties::FontEffect()
    {
        return impl::call_factory_cast<Windows::Media::ClosedCaptioning::ClosedCaptionEdgeEffect(*)(IClosedCaptionPropertiesStatics const&), ClosedCaptionProperties, IClosedCaptionPropertiesStatics>([](IClosedCaptionPropertiesStatics const& f) { return f.FontEffect(); });
    }
    inline auto ClosedCaptionProperties::BackgroundColor()
    {
        return impl::call_factory_cast<Windows::Media::ClosedCaptioning::ClosedCaptionColor(*)(IClosedCaptionPropertiesStatics const&), ClosedCaptionProperties, IClosedCaptionPropertiesStatics>([](IClosedCaptionPropertiesStatics const& f) { return f.BackgroundColor(); });
    }
    inline auto ClosedCaptionProperties::ComputedBackgroundColor()
    {
        return impl::call_factory_cast<Windows::UI::Color(*)(IClosedCaptionPropertiesStatics const&), ClosedCaptionProperties, IClosedCaptionPropertiesStatics>([](IClosedCaptionPropertiesStatics const& f) { return f.ComputedBackgroundColor(); });
    }
    inline auto ClosedCaptionProperties::BackgroundOpacity()
    {
        return impl::call_factory_cast<Windows::Media::ClosedCaptioning::ClosedCaptionOpacity(*)(IClosedCaptionPropertiesStatics const&), ClosedCaptionProperties, IClosedCaptionPropertiesStatics>([](IClosedCaptionPropertiesStatics const& f) { return f.BackgroundOpacity(); });
    }
    inline auto ClosedCaptionProperties::RegionColor()
    {
        return impl::call_factory_cast<Windows::Media::ClosedCaptioning::ClosedCaptionColor(*)(IClosedCaptionPropertiesStatics const&), ClosedCaptionProperties, IClosedCaptionPropertiesStatics>([](IClosedCaptionPropertiesStatics const& f) { return f.RegionColor(); });
    }
    inline auto ClosedCaptionProperties::ComputedRegionColor()
    {
        return impl::call_factory_cast<Windows::UI::Color(*)(IClosedCaptionPropertiesStatics const&), ClosedCaptionProperties, IClosedCaptionPropertiesStatics>([](IClosedCaptionPropertiesStatics const& f) { return f.ComputedRegionColor(); });
    }
    inline auto ClosedCaptionProperties::RegionOpacity()
    {
        return impl::call_factory_cast<Windows::Media::ClosedCaptioning::ClosedCaptionOpacity(*)(IClosedCaptionPropertiesStatics const&), ClosedCaptionProperties, IClosedCaptionPropertiesStatics>([](IClosedCaptionPropertiesStatics const& f) { return f.RegionOpacity(); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties> : winrt::impl::hash_base {};
#endif
}
#endif
