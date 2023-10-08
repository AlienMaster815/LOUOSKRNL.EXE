// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Navigation_H
#define WINRT_Windows_UI_Xaml_Navigation_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.201201.7"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.201201.7"
#include "winrt/Windows.UI.Xaml.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/impl/Windows.UI.Xaml.Interop.2.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Animation.2.h"
#include "winrt/impl/Windows.UI.Xaml.Navigation.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_Xaml_Navigation_IFrameNavigationOptions<D>::IsNavigationStackEnabled() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Navigation::IFrameNavigationOptions)->get_IsNavigationStackEnabled(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Navigation_IFrameNavigationOptions<D>::IsNavigationStackEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Navigation::IFrameNavigationOptions)->put_IsNavigationStackEnabled(value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo) consume_Windows_UI_Xaml_Navigation_IFrameNavigationOptions<D>::TransitionInfoOverride() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Navigation::IFrameNavigationOptions)->get_TransitionInfoOverride(&value));
        return Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Navigation_IFrameNavigationOptions<D>::TransitionInfoOverride(Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Navigation::IFrameNavigationOptions)->put_TransitionInfoOverride(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Navigation::FrameNavigationOptions) consume_Windows_UI_Xaml_Navigation_IFrameNavigationOptionsFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Navigation::IFrameNavigationOptionsFactory)->CreateInstance(*(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return Windows::UI::Xaml::Navigation::FrameNavigationOptions{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_Xaml_Navigation_INavigatingCancelEventArgs<D>::Cancel() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs)->get_Cancel(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Navigation_INavigatingCancelEventArgs<D>::Cancel(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs)->put_Cancel(value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Navigation::NavigationMode) consume_Windows_UI_Xaml_Navigation_INavigatingCancelEventArgs<D>::NavigationMode() const
    {
        Windows::UI::Xaml::Navigation::NavigationMode value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs)->get_NavigationMode(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Interop::TypeName) consume_Windows_UI_Xaml_Navigation_INavigatingCancelEventArgs<D>::SourcePageType() const
    {
        Windows::UI::Xaml::Interop::TypeName value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs)->get_SourcePageType(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) consume_Windows_UI_Xaml_Navigation_INavigatingCancelEventArgs2<D>::Parameter() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs2)->get_Parameter(&value));
        return Windows::Foundation::IInspectable{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo) consume_Windows_UI_Xaml_Navigation_INavigatingCancelEventArgs2<D>::NavigationTransitionInfo() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs2)->get_NavigationTransitionInfo(&value));
        return Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) consume_Windows_UI_Xaml_Navigation_INavigationEventArgs<D>::Content() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Navigation::INavigationEventArgs)->get_Content(&value));
        return Windows::Foundation::IInspectable{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) consume_Windows_UI_Xaml_Navigation_INavigationEventArgs<D>::Parameter() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Navigation::INavigationEventArgs)->get_Parameter(&value));
        return Windows::Foundation::IInspectable{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Interop::TypeName) consume_Windows_UI_Xaml_Navigation_INavigationEventArgs<D>::SourcePageType() const
    {
        Windows::UI::Xaml::Interop::TypeName value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Navigation::INavigationEventArgs)->get_SourcePageType(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Navigation::NavigationMode) consume_Windows_UI_Xaml_Navigation_INavigationEventArgs<D>::NavigationMode() const
    {
        Windows::UI::Xaml::Navigation::NavigationMode value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Navigation::INavigationEventArgs)->get_NavigationMode(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Uri) consume_Windows_UI_Xaml_Navigation_INavigationEventArgs<D>::Uri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Navigation::INavigationEventArgs)->get_Uri(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Navigation_INavigationEventArgs<D>::Uri(Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Navigation::INavigationEventArgs)->put_Uri(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo) consume_Windows_UI_Xaml_Navigation_INavigationEventArgs2<D>::NavigationTransitionInfo() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Navigation::INavigationEventArgs2)->get_NavigationTransitionInfo(&value));
        return Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::hresult) consume_Windows_UI_Xaml_Navigation_INavigationFailedEventArgs<D>::Exception() const
    {
        winrt::hresult value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Navigation::INavigationFailedEventArgs)->get_Exception(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_Xaml_Navigation_INavigationFailedEventArgs<D>::Handled() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Navigation::INavigationFailedEventArgs)->get_Handled(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Navigation_INavigationFailedEventArgs<D>::Handled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Navigation::INavigationFailedEventArgs)->put_Handled(value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Interop::TypeName) consume_Windows_UI_Xaml_Navigation_INavigationFailedEventArgs<D>::SourcePageType() const
    {
        Windows::UI::Xaml::Interop::TypeName value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Navigation::INavigationFailedEventArgs)->get_SourcePageType(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Interop::TypeName) consume_Windows_UI_Xaml_Navigation_IPageStackEntry<D>::SourcePageType() const
    {
        Windows::UI::Xaml::Interop::TypeName value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Navigation::IPageStackEntry)->get_SourcePageType(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) consume_Windows_UI_Xaml_Navigation_IPageStackEntry<D>::Parameter() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Navigation::IPageStackEntry)->get_Parameter(&value));
        return Windows::Foundation::IInspectable{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo) consume_Windows_UI_Xaml_Navigation_IPageStackEntry<D>::NavigationTransitionInfo() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Navigation::IPageStackEntry)->get_NavigationTransitionInfo(&value));
        return Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Navigation::PageStackEntry) consume_Windows_UI_Xaml_Navigation_IPageStackEntryFactory<D>::CreateInstance(Windows::UI::Xaml::Interop::TypeName const& sourcePageType, Windows::Foundation::IInspectable const& parameter, Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo const& navigationTransitionInfo) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Navigation::IPageStackEntryFactory)->CreateInstance(impl::bind_in(sourcePageType), *(void**)(&parameter), *(void**)(&navigationTransitionInfo), &value));
        return Windows::UI::Xaml::Navigation::PageStackEntry{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) consume_Windows_UI_Xaml_Navigation_IPageStackEntryStatics<D>::SourcePageTypeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Navigation::IPageStackEntryStatics)->get_SourcePageTypeProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename H> struct delegate<Windows::UI::Xaml::Navigation::LoadCompletedEventHandler, H> final : implements_delegate<Windows::UI::Xaml::Navigation::LoadCompletedEventHandler, H>
    {
        delegate(H&& handler) : implements_delegate<Windows::UI::Xaml::Navigation::LoadCompletedEventHandler, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void* sender, void* e) noexcept final try
        {
            (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Navigation::NavigationEventArgs const*>(&e));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename H> struct delegate<Windows::UI::Xaml::Navigation::NavigatedEventHandler, H> final : implements_delegate<Windows::UI::Xaml::Navigation::NavigatedEventHandler, H>
    {
        delegate(H&& handler) : implements_delegate<Windows::UI::Xaml::Navigation::NavigatedEventHandler, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void* sender, void* e) noexcept final try
        {
            (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Navigation::NavigationEventArgs const*>(&e));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename H> struct delegate<Windows::UI::Xaml::Navigation::NavigatingCancelEventHandler, H> final : implements_delegate<Windows::UI::Xaml::Navigation::NavigatingCancelEventHandler, H>
    {
        delegate(H&& handler) : implements_delegate<Windows::UI::Xaml::Navigation::NavigatingCancelEventHandler, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void* sender, void* e) noexcept final try
        {
            (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs const*>(&e));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename H> struct delegate<Windows::UI::Xaml::Navigation::NavigationFailedEventHandler, H> final : implements_delegate<Windows::UI::Xaml::Navigation::NavigationFailedEventHandler, H>
    {
        delegate(H&& handler) : implements_delegate<Windows::UI::Xaml::Navigation::NavigationFailedEventHandler, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void* sender, void* e) noexcept final try
        {
            (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Navigation::NavigationFailedEventArgs const*>(&e));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename H> struct delegate<Windows::UI::Xaml::Navigation::NavigationStoppedEventHandler, H> final : implements_delegate<Windows::UI::Xaml::Navigation::NavigationStoppedEventHandler, H>
    {
        delegate(H&& handler) : implements_delegate<Windows::UI::Xaml::Navigation::NavigationStoppedEventHandler, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void* sender, void* e) noexcept final try
        {
            (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Navigation::NavigationEventArgs const*>(&e));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Navigation::IFrameNavigationOptions> : produce_base<D, Windows::UI::Xaml::Navigation::IFrameNavigationOptions>
    {
        int32_t __stdcall get_IsNavigationStackEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsNavigationStackEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsNavigationStackEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsNavigationStackEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TransitionInfoOverride(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo>(this->shim().TransitionInfoOverride());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TransitionInfoOverride(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransitionInfoOverride(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Navigation::IFrameNavigationOptionsFactory> : produce_base<D, Windows::UI::Xaml::Navigation::IFrameNavigationOptionsFactory>
    {
        int32_t __stdcall CreateInstance(void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Navigation::FrameNavigationOptions>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs> : produce_base<D, Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs>
    {
        int32_t __stdcall get_Cancel(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Cancel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Cancel(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Cancel(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NavigationMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Navigation::NavigationMode>(this->shim().NavigationMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SourcePageType(struct struct_Windows_UI_Xaml_Interop_TypeName* value) noexcept final try
        {
            zero_abi<Windows::UI::Xaml::Interop::TypeName>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Interop::TypeName>(this->shim().SourcePageType());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs2> : produce_base<D, Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs2>
    {
        int32_t __stdcall get_Parameter(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().Parameter());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NavigationTransitionInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo>(this->shim().NavigationTransitionInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Navigation::INavigationEventArgs> : produce_base<D, Windows::UI::Xaml::Navigation::INavigationEventArgs>
    {
        int32_t __stdcall get_Content(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().Content());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Parameter(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().Parameter());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SourcePageType(struct struct_Windows_UI_Xaml_Interop_TypeName* value) noexcept final try
        {
            zero_abi<Windows::UI::Xaml::Interop::TypeName>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Interop::TypeName>(this->shim().SourcePageType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NavigationMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Navigation::NavigationMode>(this->shim().NavigationMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Uri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Uri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Uri(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Uri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Navigation::INavigationEventArgs2> : produce_base<D, Windows::UI::Xaml::Navigation::INavigationEventArgs2>
    {
        int32_t __stdcall get_NavigationTransitionInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo>(this->shim().NavigationTransitionInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Navigation::INavigationFailedEventArgs> : produce_base<D, Windows::UI::Xaml::Navigation::INavigationFailedEventArgs>
    {
        int32_t __stdcall get_Exception(winrt::hresult* value) noexcept final try
        {
            zero_abi<winrt::hresult>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::hresult>(this->shim().Exception());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Handled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Handled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Handled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Handled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SourcePageType(struct struct_Windows_UI_Xaml_Interop_TypeName* value) noexcept final try
        {
            zero_abi<Windows::UI::Xaml::Interop::TypeName>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Interop::TypeName>(this->shim().SourcePageType());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Navigation::IPageStackEntry> : produce_base<D, Windows::UI::Xaml::Navigation::IPageStackEntry>
    {
        int32_t __stdcall get_SourcePageType(struct struct_Windows_UI_Xaml_Interop_TypeName* value) noexcept final try
        {
            zero_abi<Windows::UI::Xaml::Interop::TypeName>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Interop::TypeName>(this->shim().SourcePageType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Parameter(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().Parameter());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NavigationTransitionInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo>(this->shim().NavigationTransitionInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Navigation::IPageStackEntryFactory> : produce_base<D, Windows::UI::Xaml::Navigation::IPageStackEntryFactory>
    {
        int32_t __stdcall CreateInstance(struct struct_Windows_UI_Xaml_Interop_TypeName sourcePageType, void* parameter, void* navigationTransitionInfo, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Navigation::PageStackEntry>(this->shim().CreateInstance(*reinterpret_cast<Windows::UI::Xaml::Interop::TypeName const*>(&sourcePageType), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&parameter), *reinterpret_cast<Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo const*>(&navigationTransitionInfo)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Navigation::IPageStackEntryStatics> : produce_base<D, Windows::UI::Xaml::Navigation::IPageStackEntryStatics>
    {
        int32_t __stdcall get_SourcePageTypeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().SourcePageTypeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Navigation
{
    inline FrameNavigationOptions::FrameNavigationOptions()
    {
        Windows::Foundation::IInspectable baseInterface, innerInterface;
        *this = impl::call_factory<FrameNavigationOptions, IFrameNavigationOptionsFactory>([&](IFrameNavigationOptionsFactory const& f) { return f.CreateInstance(baseInterface, innerInterface); });
    }
    inline PageStackEntry::PageStackEntry(Windows::UI::Xaml::Interop::TypeName const& sourcePageType, Windows::Foundation::IInspectable const& parameter, Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo const& navigationTransitionInfo) :
        PageStackEntry(impl::call_factory<PageStackEntry, IPageStackEntryFactory>([&](IPageStackEntryFactory const& f) { return f.CreateInstance(sourcePageType, parameter, navigationTransitionInfo); }))
    {
    }
    inline auto PageStackEntry::SourcePageTypeProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::DependencyProperty(*)(IPageStackEntryStatics const&), PageStackEntry, IPageStackEntryStatics>([](IPageStackEntryStatics const& f) { return f.SourcePageTypeProperty(); });
    }
    template <typename L> LoadCompletedEventHandler::LoadCompletedEventHandler(L handler) :
        LoadCompletedEventHandler(impl::make_delegate<LoadCompletedEventHandler>(std::forward<L>(handler)))
    {
    }
    template <typename F> LoadCompletedEventHandler::LoadCompletedEventHandler(F* handler) :
        LoadCompletedEventHandler([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> LoadCompletedEventHandler::LoadCompletedEventHandler(O* object, M method) :
        LoadCompletedEventHandler([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> LoadCompletedEventHandler::LoadCompletedEventHandler(com_ptr<O>&& object, M method) :
        LoadCompletedEventHandler([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> LoadCompletedEventHandler::LoadCompletedEventHandler(weak_ref<O>&& object, M method) :
        LoadCompletedEventHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto LoadCompletedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Navigation::NavigationEventArgs const& e) const
    {
        check_hresult((*(impl::abi_t<LoadCompletedEventHandler>**)this)->Invoke(*(void**)(&sender), *(void**)(&e)));
    }
    template <typename L> NavigatedEventHandler::NavigatedEventHandler(L handler) :
        NavigatedEventHandler(impl::make_delegate<NavigatedEventHandler>(std::forward<L>(handler)))
    {
    }
    template <typename F> NavigatedEventHandler::NavigatedEventHandler(F* handler) :
        NavigatedEventHandler([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> NavigatedEventHandler::NavigatedEventHandler(O* object, M method) :
        NavigatedEventHandler([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> NavigatedEventHandler::NavigatedEventHandler(com_ptr<O>&& object, M method) :
        NavigatedEventHandler([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> NavigatedEventHandler::NavigatedEventHandler(weak_ref<O>&& object, M method) :
        NavigatedEventHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto NavigatedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Navigation::NavigationEventArgs const& e) const
    {
        check_hresult((*(impl::abi_t<NavigatedEventHandler>**)this)->Invoke(*(void**)(&sender), *(void**)(&e)));
    }
    template <typename L> NavigatingCancelEventHandler::NavigatingCancelEventHandler(L handler) :
        NavigatingCancelEventHandler(impl::make_delegate<NavigatingCancelEventHandler>(std::forward<L>(handler)))
    {
    }
    template <typename F> NavigatingCancelEventHandler::NavigatingCancelEventHandler(F* handler) :
        NavigatingCancelEventHandler([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> NavigatingCancelEventHandler::NavigatingCancelEventHandler(O* object, M method) :
        NavigatingCancelEventHandler([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> NavigatingCancelEventHandler::NavigatingCancelEventHandler(com_ptr<O>&& object, M method) :
        NavigatingCancelEventHandler([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> NavigatingCancelEventHandler::NavigatingCancelEventHandler(weak_ref<O>&& object, M method) :
        NavigatingCancelEventHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto NavigatingCancelEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs const& e) const
    {
        check_hresult((*(impl::abi_t<NavigatingCancelEventHandler>**)this)->Invoke(*(void**)(&sender), *(void**)(&e)));
    }
    template <typename L> NavigationFailedEventHandler::NavigationFailedEventHandler(L handler) :
        NavigationFailedEventHandler(impl::make_delegate<NavigationFailedEventHandler>(std::forward<L>(handler)))
    {
    }
    template <typename F> NavigationFailedEventHandler::NavigationFailedEventHandler(F* handler) :
        NavigationFailedEventHandler([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> NavigationFailedEventHandler::NavigationFailedEventHandler(O* object, M method) :
        NavigationFailedEventHandler([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> NavigationFailedEventHandler::NavigationFailedEventHandler(com_ptr<O>&& object, M method) :
        NavigationFailedEventHandler([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> NavigationFailedEventHandler::NavigationFailedEventHandler(weak_ref<O>&& object, M method) :
        NavigationFailedEventHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto NavigationFailedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Navigation::NavigationFailedEventArgs const& e) const
    {
        check_hresult((*(impl::abi_t<NavigationFailedEventHandler>**)this)->Invoke(*(void**)(&sender), *(void**)(&e)));
    }
    template <typename L> NavigationStoppedEventHandler::NavigationStoppedEventHandler(L handler) :
        NavigationStoppedEventHandler(impl::make_delegate<NavigationStoppedEventHandler>(std::forward<L>(handler)))
    {
    }
    template <typename F> NavigationStoppedEventHandler::NavigationStoppedEventHandler(F* handler) :
        NavigationStoppedEventHandler([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> NavigationStoppedEventHandler::NavigationStoppedEventHandler(O* object, M method) :
        NavigationStoppedEventHandler([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> NavigationStoppedEventHandler::NavigationStoppedEventHandler(com_ptr<O>&& object, M method) :
        NavigationStoppedEventHandler([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> NavigationStoppedEventHandler::NavigationStoppedEventHandler(weak_ref<O>&& object, M method) :
        NavigationStoppedEventHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto NavigationStoppedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Navigation::NavigationEventArgs const& e) const
    {
        check_hresult((*(impl::abi_t<NavigationStoppedEventHandler>**)this)->Invoke(*(void**)(&sender), *(void**)(&e)));
    }
    template <typename D, typename... Interfaces>
    struct FrameNavigationOptionsT :
        implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
        impl::require<D, Windows::UI::Xaml::Navigation::IFrameNavigationOptions>,
        impl::base<D, FrameNavigationOptions>
    {
        using composable = FrameNavigationOptions;
    protected:
        FrameNavigationOptionsT()
        {
            impl::call_factory<FrameNavigationOptions, IFrameNavigationOptionsFactory>([&](IFrameNavigationOptionsFactory const& f) { [[maybe_unused]] auto winrt_impl_discarded = f.CreateInstance(*this, this->m_inner); });
        }
    };
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::UI::Xaml::Navigation::IFrameNavigationOptions> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Navigation::IFrameNavigationOptionsFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Navigation::INavigationEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Navigation::INavigationEventArgs2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Navigation::INavigationFailedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Navigation::IPageStackEntry> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Navigation::IPageStackEntryFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Navigation::IPageStackEntryStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Navigation::FrameNavigationOptions> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Navigation::NavigationFailedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Navigation::PageStackEntry> : winrt::impl::hash_base {};
#endif
}
#endif
