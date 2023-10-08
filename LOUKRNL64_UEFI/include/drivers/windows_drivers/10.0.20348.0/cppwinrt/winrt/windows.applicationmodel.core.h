// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Core_H
#define WINRT_Windows_ApplicationModel_Core_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.200609.3"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.ApplicationModel.h"
#include "winrt/impl/Windows.ApplicationModel.2.h"
#include "winrt/impl/Windows.ApplicationModel.Activation.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.UI.Core.2.h"
#include "winrt/impl/Windows.ApplicationModel.Core.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::AppDisplayInfo) consume_Windows_ApplicationModel_Core_IAppListEntry<D>::DisplayInfo() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::IAppListEntry)->get_DisplayInfo(&value));
        return Windows::ApplicationModel::AppDisplayInfo{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) consume_Windows_ApplicationModel_Core_IAppListEntry<D>::LaunchAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::IAppListEntry)->LaunchAsync(&operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Core_IAppListEntry2<D>::AppUserModelId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::IAppListEntry2)->get_AppUserModelId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) consume_Windows_ApplicationModel_Core_IAppListEntry3<D>::LaunchForUserAsync(Windows::System::User const& user) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::IAppListEntry3)->LaunchForUserAsync(*(void**)(&user), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::AppInfo) consume_Windows_ApplicationModel_Core_IAppListEntry4<D>::AppInfo() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::IAppListEntry4)->get_AppInfo(&value));
        return Windows::ApplicationModel::AppInfo{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Core_ICoreApplication<D>::Id() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplication)->get_Id(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_ApplicationModel_Core_ICoreApplication<D>::Suspending(Windows::Foundation::EventHandler<Windows::ApplicationModel::SuspendingEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplication)->add_Suspending(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ApplicationModel_Core_ICoreApplication<D>::Suspending_revoker consume_Windows_ApplicationModel_Core_ICoreApplication<D>::Suspending(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::SuspendingEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, Suspending_revoker>(this, Suspending(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Core_ICoreApplication<D>::Suspending(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplication)->remove_Suspending(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_ApplicationModel_Core_ICoreApplication<D>::Resuming(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplication)->add_Resuming(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ApplicationModel_Core_ICoreApplication<D>::Resuming_revoker consume_Windows_ApplicationModel_Core_ICoreApplication<D>::Resuming(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, Resuming_revoker>(this, Resuming(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Core_ICoreApplication<D>::Resuming(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplication)->remove_Resuming(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IPropertySet) consume_Windows_ApplicationModel_Core_ICoreApplication<D>::Properties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplication)->get_Properties(&value));
        return Windows::Foundation::Collections::IPropertySet{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Core::CoreApplicationView) consume_Windows_ApplicationModel_Core_ICoreApplication<D>::GetCurrentView() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplication)->GetCurrentView(&value));
        return Windows::ApplicationModel::Core::CoreApplicationView{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Core_ICoreApplication<D>::Run(Windows::ApplicationModel::Core::IFrameworkViewSource const& viewSource) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplication)->Run(*(void**)(&viewSource)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Core_ICoreApplication<D>::RunWithActivationFactories(Windows::Foundation::IGetActivationFactory const& activationFactoryCallback) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplication)->RunWithActivationFactories(*(void**)(&activationFactoryCallback)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_ApplicationModel_Core_ICoreApplication2<D>::BackgroundActivated(Windows::Foundation::EventHandler<Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplication2)->add_BackgroundActivated(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ApplicationModel_Core_ICoreApplication2<D>::BackgroundActivated_revoker consume_Windows_ApplicationModel_Core_ICoreApplication2<D>::BackgroundActivated(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, BackgroundActivated_revoker>(this, BackgroundActivated(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Core_ICoreApplication2<D>::BackgroundActivated(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplication2)->remove_BackgroundActivated(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_ApplicationModel_Core_ICoreApplication2<D>::LeavingBackground(Windows::Foundation::EventHandler<Windows::ApplicationModel::LeavingBackgroundEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplication2)->add_LeavingBackground(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ApplicationModel_Core_ICoreApplication2<D>::LeavingBackground_revoker consume_Windows_ApplicationModel_Core_ICoreApplication2<D>::LeavingBackground(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::LeavingBackgroundEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, LeavingBackground_revoker>(this, LeavingBackground(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Core_ICoreApplication2<D>::LeavingBackground(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplication2)->remove_LeavingBackground(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_ApplicationModel_Core_ICoreApplication2<D>::EnteredBackground(Windows::Foundation::EventHandler<Windows::ApplicationModel::EnteredBackgroundEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplication2)->add_EnteredBackground(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ApplicationModel_Core_ICoreApplication2<D>::EnteredBackground_revoker consume_Windows_ApplicationModel_Core_ICoreApplication2<D>::EnteredBackground(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::EnteredBackgroundEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, EnteredBackground_revoker>(this, EnteredBackground(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Core_ICoreApplication2<D>::EnteredBackground(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplication2)->remove_EnteredBackground(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Core_ICoreApplication2<D>::EnablePrelaunch(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplication2)->EnablePrelaunch(value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Core::AppRestartFailureReason>) consume_Windows_ApplicationModel_Core_ICoreApplication3<D>::RequestRestartAsync(param::hstring const& launchArguments) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplication3)->RequestRestartAsync(*(void**)(&launchArguments), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Core::AppRestartFailureReason>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Core::AppRestartFailureReason>) consume_Windows_ApplicationModel_Core_ICoreApplication3<D>::RequestRestartForUserAsync(Windows::System::User const& user, param::hstring const& launchArguments) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplication3)->RequestRestartForUserAsync(*(void**)(&user), *(void**)(&launchArguments), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Core::AppRestartFailureReason>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Core_ICoreApplicationExit<D>::Exit() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplicationExit)->Exit());
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_ApplicationModel_Core_ICoreApplicationExit<D>::Exiting(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplicationExit)->add_Exiting(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ApplicationModel_Core_ICoreApplicationExit<D>::Exiting_revoker consume_Windows_ApplicationModel_Core_ICoreApplicationExit<D>::Exiting(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, Exiting_revoker>(this, Exiting(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Core_ICoreApplicationExit<D>::Exiting(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplicationExit)->remove_Exiting(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_ApplicationModel_Core_ICoreApplicationUnhandledError<D>::UnhandledErrorDetected(Windows::Foundation::EventHandler<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplicationUnhandledError)->add_UnhandledErrorDetected(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ApplicationModel_Core_ICoreApplicationUnhandledError<D>::UnhandledErrorDetected_revoker consume_Windows_ApplicationModel_Core_ICoreApplicationUnhandledError<D>::UnhandledErrorDetected(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, UnhandledErrorDetected_revoker>(this, UnhandledErrorDetected(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Core_ICoreApplicationUnhandledError<D>::UnhandledErrorDetected(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplicationUnhandledError)->remove_UnhandledErrorDetected(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Core_ICoreApplicationUseCount<D>::IncrementApplicationUseCount() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplicationUseCount)->IncrementApplicationUseCount());
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Core_ICoreApplicationUseCount<D>::DecrementApplicationUseCount() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplicationUseCount)->DecrementApplicationUseCount());
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Core::CoreWindow) consume_Windows_ApplicationModel_Core_ICoreApplicationView<D>::CoreWindow() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplicationView)->get_CoreWindow(&value));
        return Windows::UI::Core::CoreWindow{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_ApplicationModel_Core_ICoreApplicationView<D>::Activated(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Activation::IActivatedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplicationView)->add_Activated(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ApplicationModel_Core_ICoreApplicationView<D>::Activated_revoker consume_Windows_ApplicationModel_Core_ICoreApplicationView<D>::Activated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Activation::IActivatedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, Activated_revoker>(this, Activated(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Core_ICoreApplicationView<D>::Activated(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplicationView)->remove_Activated(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Core_ICoreApplicationView<D>::IsMain() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplicationView)->get_IsMain(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Core_ICoreApplicationView<D>::IsHosted() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplicationView)->get_IsHosted(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Core::CoreDispatcher) consume_Windows_ApplicationModel_Core_ICoreApplicationView2<D>::Dispatcher() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplicationView2)->get_Dispatcher(&value));
        return Windows::UI::Core::CoreDispatcher{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Core_ICoreApplicationView3<D>::IsComponent() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplicationView3)->get_IsComponent(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Core::CoreApplicationViewTitleBar) consume_Windows_ApplicationModel_Core_ICoreApplicationView3<D>::TitleBar() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplicationView3)->get_TitleBar(&value));
        return Windows::ApplicationModel::Core::CoreApplicationViewTitleBar{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_ApplicationModel_Core_ICoreApplicationView3<D>::HostedViewClosing(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Core::HostedViewClosingEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplicationView3)->add_HostedViewClosing(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ApplicationModel_Core_ICoreApplicationView3<D>::HostedViewClosing_revoker consume_Windows_ApplicationModel_Core_ICoreApplicationView3<D>::HostedViewClosing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Core::HostedViewClosingEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, HostedViewClosing_revoker>(this, HostedViewClosing(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Core_ICoreApplicationView3<D>::HostedViewClosing(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplicationView3)->remove_HostedViewClosing(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IPropertySet) consume_Windows_ApplicationModel_Core_ICoreApplicationView5<D>::Properties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplicationView5)->get_Properties(&value));
        return Windows::Foundation::Collections::IPropertySet{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::System::DispatcherQueue) consume_Windows_ApplicationModel_Core_ICoreApplicationView6<D>::DispatcherQueue() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplicationView6)->get_DispatcherQueue(&value));
        return Windows::System::DispatcherQueue{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar<D>::ExtendViewIntoTitleBar(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar)->put_ExtendViewIntoTitleBar(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar<D>::ExtendViewIntoTitleBar() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar)->get_ExtendViewIntoTitleBar(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(double) consume_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar<D>::SystemOverlayLeftInset() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar)->get_SystemOverlayLeftInset(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(double) consume_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar<D>::SystemOverlayRightInset() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar)->get_SystemOverlayRightInset(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(double) consume_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar<D>::Height() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar)->get_Height(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar<D>::LayoutMetricsChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar)->add_LayoutMetricsChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar<D>::LayoutMetricsChanged_revoker consume_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar<D>::LayoutMetricsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, LayoutMetricsChanged_revoker>(this, LayoutMetricsChanged(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar<D>::LayoutMetricsChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar)->remove_LayoutMetricsChanged(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar<D>::IsVisible() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar)->get_IsVisible(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar<D>::IsVisibleChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar)->add_IsVisibleChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar<D>::IsVisibleChanged_revoker consume_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar<D>::IsVisibleChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, IsVisibleChanged_revoker>(this, IsVisibleChanged(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar<D>::IsVisibleChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar)->remove_IsVisibleChanged(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::CoreApplicationView>) consume_Windows_ApplicationModel_Core_ICoreImmersiveApplication<D>::Views() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreImmersiveApplication)->get_Views(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::CoreApplicationView>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Core::CoreApplicationView) consume_Windows_ApplicationModel_Core_ICoreImmersiveApplication<D>::CreateNewView(param::hstring const& runtimeType, param::hstring const& entryPoint) const
    {
        void* view{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreImmersiveApplication)->CreateNewView(*(void**)(&runtimeType), *(void**)(&entryPoint), &view));
        return Windows::ApplicationModel::Core::CoreApplicationView{ view, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Core::CoreApplicationView) consume_Windows_ApplicationModel_Core_ICoreImmersiveApplication<D>::MainView() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreImmersiveApplication)->get_MainView(&value));
        return Windows::ApplicationModel::Core::CoreApplicationView{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Core::CoreApplicationView) consume_Windows_ApplicationModel_Core_ICoreImmersiveApplication2<D>::CreateNewView() const
    {
        void* view{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreImmersiveApplication2)->CreateNewViewFromMainView(&view));
        return Windows::ApplicationModel::Core::CoreApplicationView{ view, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Core::CoreApplicationView) consume_Windows_ApplicationModel_Core_ICoreImmersiveApplication3<D>::CreateNewView(Windows::ApplicationModel::Core::IFrameworkViewSource const& viewSource) const
    {
        void* view{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::ICoreImmersiveApplication3)->CreateNewViewWithViewSource(*(void**)(&viewSource), &view));
        return Windows::ApplicationModel::Core::CoreApplicationView{ view, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Core_IFrameworkView<D>::Initialize(Windows::ApplicationModel::Core::CoreApplicationView const& applicationView) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::IFrameworkView)->Initialize(*(void**)(&applicationView)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Core_IFrameworkView<D>::SetWindow(Windows::UI::Core::CoreWindow const& window) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::IFrameworkView)->SetWindow(*(void**)(&window)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Core_IFrameworkView<D>::Load(param::hstring const& entryPoint) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::IFrameworkView)->Load(*(void**)(&entryPoint)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Core_IFrameworkView<D>::Run() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::IFrameworkView)->Run());
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Core_IFrameworkView<D>::Uninitialize() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::IFrameworkView)->Uninitialize());
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Core::IFrameworkView) consume_Windows_ApplicationModel_Core_IFrameworkViewSource<D>::CreateView() const
    {
        void* viewProvider{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::IFrameworkViewSource)->CreateView(&viewProvider));
        return Windows::ApplicationModel::Core::IFrameworkView{ viewProvider, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Deferral) consume_Windows_ApplicationModel_Core_IHostedViewClosingEventArgs<D>::GetDeferral() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::IHostedViewClosingEventArgs)->GetDeferral(&result));
        return Windows::Foundation::Deferral{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Core_IUnhandledError<D>::Handled() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::IUnhandledError)->get_Handled(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Core_IUnhandledError<D>::Propagate() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::IUnhandledError)->Propagate());
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Core::UnhandledError) consume_Windows_ApplicationModel_Core_IUnhandledErrorDetectedEventArgs<D>::UnhandledError() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs)->get_UnhandledError(&value));
        return Windows::ApplicationModel::Core::UnhandledError{ value, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Core::IAppListEntry> : produce_base<D, Windows::ApplicationModel::Core::IAppListEntry>
    {
        int32_t __stdcall get_DisplayInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::AppDisplayInfo>(this->shim().DisplayInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LaunchAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().LaunchAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Core::IAppListEntry2> : produce_base<D, Windows::ApplicationModel::Core::IAppListEntry2>
    {
        int32_t __stdcall get_AppUserModelId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AppUserModelId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Core::IAppListEntry3> : produce_base<D, Windows::ApplicationModel::Core::IAppListEntry3>
    {
        int32_t __stdcall LaunchForUserAsync(void* user, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().LaunchForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Core::IAppListEntry4> : produce_base<D, Windows::ApplicationModel::Core::IAppListEntry4>
    {
        int32_t __stdcall get_AppInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::AppInfo>(this->shim().AppInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Core::ICoreApplication> : produce_base<D, Windows::ApplicationModel::Core::ICoreApplication>
    {
        int32_t __stdcall get_Id(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_Suspending(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Suspending(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::ApplicationModel::SuspendingEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Suspending(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Suspending(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_Resuming(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Resuming(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Resuming(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Resuming(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_Properties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IPropertySet>(this->shim().Properties());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetCurrentView(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Core::CoreApplicationView>(this->shim().GetCurrentView());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Run(void* viewSource) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Run(*reinterpret_cast<Windows::ApplicationModel::Core::IFrameworkViewSource const*>(&viewSource));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RunWithActivationFactories(void* activationFactoryCallback) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RunWithActivationFactories(*reinterpret_cast<Windows::Foundation::IGetActivationFactory const*>(&activationFactoryCallback));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Core::ICoreApplication2> : produce_base<D, Windows::ApplicationModel::Core::ICoreApplication2>
    {
        int32_t __stdcall add_BackgroundActivated(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().BackgroundActivated(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_BackgroundActivated(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BackgroundActivated(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_LeavingBackground(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().LeavingBackground(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::ApplicationModel::LeavingBackgroundEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_LeavingBackground(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LeavingBackground(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_EnteredBackground(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().EnteredBackground(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::ApplicationModel::EnteredBackgroundEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_EnteredBackground(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnteredBackground(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall EnablePrelaunch(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnablePrelaunch(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Core::ICoreApplication3> : produce_base<D, Windows::ApplicationModel::Core::ICoreApplication3>
    {
        int32_t __stdcall RequestRestartAsync(void* launchArguments, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Core::AppRestartFailureReason>>(this->shim().RequestRestartAsync(*reinterpret_cast<hstring const*>(&launchArguments)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestRestartForUserAsync(void* user, void* launchArguments, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Core::AppRestartFailureReason>>(this->shim().RequestRestartForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<hstring const*>(&launchArguments)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Core::ICoreApplicationExit> : produce_base<D, Windows::ApplicationModel::Core::ICoreApplicationExit>
    {
        int32_t __stdcall Exit() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Exit();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_Exiting(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Exiting(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Exiting(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Exiting(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Core::ICoreApplicationUnhandledError> : produce_base<D, Windows::ApplicationModel::Core::ICoreApplicationUnhandledError>
    {
        int32_t __stdcall add_UnhandledErrorDetected(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().UnhandledErrorDetected(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_UnhandledErrorDetected(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UnhandledErrorDetected(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Core::ICoreApplicationUseCount> : produce_base<D, Windows::ApplicationModel::Core::ICoreApplicationUseCount>
    {
        int32_t __stdcall IncrementApplicationUseCount() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IncrementApplicationUseCount();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DecrementApplicationUseCount() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DecrementApplicationUseCount();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Core::ICoreApplicationView> : produce_base<D, Windows::ApplicationModel::Core::ICoreApplicationView>
    {
        int32_t __stdcall get_CoreWindow(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Core::CoreWindow>(this->shim().CoreWindow());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_Activated(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Activated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Activation::IActivatedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Activated(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Activated(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_IsMain(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsMain());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsHosted(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsHosted());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Core::ICoreApplicationView2> : produce_base<D, Windows::ApplicationModel::Core::ICoreApplicationView2>
    {
        int32_t __stdcall get_Dispatcher(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Core::CoreDispatcher>(this->shim().Dispatcher());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Core::ICoreApplicationView3> : produce_base<D, Windows::ApplicationModel::Core::ICoreApplicationView3>
    {
        int32_t __stdcall get_IsComponent(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsComponent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TitleBar(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar>(this->shim().TitleBar());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_HostedViewClosing(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().HostedViewClosing(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Core::HostedViewClosingEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_HostedViewClosing(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HostedViewClosing(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Core::ICoreApplicationView5> : produce_base<D, Windows::ApplicationModel::Core::ICoreApplicationView5>
    {
        int32_t __stdcall get_Properties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IPropertySet>(this->shim().Properties());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Core::ICoreApplicationView6> : produce_base<D, Windows::ApplicationModel::Core::ICoreApplicationView6>
    {
        int32_t __stdcall get_DispatcherQueue(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::DispatcherQueue>(this->shim().DispatcherQueue());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar> : produce_base<D, Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar>
    {
        int32_t __stdcall put_ExtendViewIntoTitleBar(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExtendViewIntoTitleBar(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExtendViewIntoTitleBar(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ExtendViewIntoTitleBar());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SystemOverlayLeftInset(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().SystemOverlayLeftInset());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SystemOverlayRightInset(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().SystemOverlayRightInset());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Height(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Height());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_LayoutMetricsChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().LayoutMetricsChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_LayoutMetricsChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LayoutMetricsChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_IsVisible(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsVisible());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_IsVisibleChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().IsVisibleChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_IsVisibleChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsVisibleChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Core::ICoreImmersiveApplication> : produce_base<D, Windows::ApplicationModel::Core::ICoreImmersiveApplication>
    {
        int32_t __stdcall get_Views(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::CoreApplicationView>>(this->shim().Views());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateNewView(void* runtimeType, void* entryPoint, void** view) noexcept final try
        {
            clear_abi(view);
            typename D::abi_guard guard(this->shim());
            *view = detach_from<Windows::ApplicationModel::Core::CoreApplicationView>(this->shim().CreateNewView(*reinterpret_cast<hstring const*>(&runtimeType), *reinterpret_cast<hstring const*>(&entryPoint)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MainView(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Core::CoreApplicationView>(this->shim().MainView());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Core::ICoreImmersiveApplication2> : produce_base<D, Windows::ApplicationModel::Core::ICoreImmersiveApplication2>
    {
        int32_t __stdcall CreateNewViewFromMainView(void** view) noexcept final try
        {
            clear_abi(view);
            typename D::abi_guard guard(this->shim());
            *view = detach_from<Windows::ApplicationModel::Core::CoreApplicationView>(this->shim().CreateNewView());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Core::ICoreImmersiveApplication3> : produce_base<D, Windows::ApplicationModel::Core::ICoreImmersiveApplication3>
    {
        int32_t __stdcall CreateNewViewWithViewSource(void* viewSource, void** view) noexcept final try
        {
            clear_abi(view);
            typename D::abi_guard guard(this->shim());
            *view = detach_from<Windows::ApplicationModel::Core::CoreApplicationView>(this->shim().CreateNewView(*reinterpret_cast<Windows::ApplicationModel::Core::IFrameworkViewSource const*>(&viewSource)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Core::IFrameworkView> : produce_base<D, Windows::ApplicationModel::Core::IFrameworkView>
    {
        int32_t __stdcall Initialize(void* applicationView) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Initialize(*reinterpret_cast<Windows::ApplicationModel::Core::CoreApplicationView const*>(&applicationView));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetWindow(void* window) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetWindow(*reinterpret_cast<Windows::UI::Core::CoreWindow const*>(&window));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Load(void* entryPoint) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Load(*reinterpret_cast<hstring const*>(&entryPoint));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Run() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Run();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Uninitialize() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Uninitialize();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Core::IFrameworkViewSource> : produce_base<D, Windows::ApplicationModel::Core::IFrameworkViewSource>
    {
        int32_t __stdcall CreateView(void** viewProvider) noexcept final try
        {
            clear_abi(viewProvider);
            typename D::abi_guard guard(this->shim());
            *viewProvider = detach_from<Windows::ApplicationModel::Core::IFrameworkView>(this->shim().CreateView());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Core::IHostedViewClosingEventArgs> : produce_base<D, Windows::ApplicationModel::Core::IHostedViewClosingEventArgs>
    {
        int32_t __stdcall GetDeferral(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Core::IUnhandledError> : produce_base<D, Windows::ApplicationModel::Core::IUnhandledError>
    {
        int32_t __stdcall get_Handled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Handled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Propagate() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Propagate();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs> : produce_base<D, Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs>
    {
        int32_t __stdcall get_UnhandledError(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Core::UnhandledError>(this->shim().UnhandledError());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Core
{
    inline auto CoreApplication::Id()
    {
        return impl::call_factory_cast<hstring(*)(ICoreApplication const&), CoreApplication, ICoreApplication>([](ICoreApplication const& f) { return f.Id(); });
    }
    inline auto CoreApplication::Suspending(Windows::Foundation::EventHandler<Windows::ApplicationModel::SuspendingEventArgs> const& handler)
    {
        return impl::call_factory<CoreApplication, ICoreApplication>([&](ICoreApplication const& f) { return f.Suspending(handler); });
    }
    inline CoreApplication::Suspending_revoker CoreApplication::Suspending(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::SuspendingEventArgs> const& handler)
    {
        auto f = get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplication>();
        return { f, f.Suspending(handler) };
    }
    inline auto CoreApplication::Suspending(winrt::event_token const& token)
    {
        impl::call_factory<CoreApplication, ICoreApplication>([&](ICoreApplication const& f) { return f.Suspending(token); });
    }
    inline auto CoreApplication::Resuming(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
    {
        return impl::call_factory<CoreApplication, ICoreApplication>([&](ICoreApplication const& f) { return f.Resuming(handler); });
    }
    inline CoreApplication::Resuming_revoker CoreApplication::Resuming(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
    {
        auto f = get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplication>();
        return { f, f.Resuming(handler) };
    }
    inline auto CoreApplication::Resuming(winrt::event_token const& token)
    {
        impl::call_factory<CoreApplication, ICoreApplication>([&](ICoreApplication const& f) { return f.Resuming(token); });
    }
    inline auto CoreApplication::Properties()
    {
        return impl::call_factory_cast<Windows::Foundation::Collections::IPropertySet(*)(ICoreApplication const&), CoreApplication, ICoreApplication>([](ICoreApplication const& f) { return f.Properties(); });
    }
    inline auto CoreApplication::GetCurrentView()
    {
        return impl::call_factory_cast<Windows::ApplicationModel::Core::CoreApplicationView(*)(ICoreApplication const&), CoreApplication, ICoreApplication>([](ICoreApplication const& f) { return f.GetCurrentView(); });
    }
    inline auto CoreApplication::Run(Windows::ApplicationModel::Core::IFrameworkViewSource const& viewSource)
    {
        impl::call_factory<CoreApplication, ICoreApplication>([&](ICoreApplication const& f) { return f.Run(viewSource); });
    }
    inline auto CoreApplication::RunWithActivationFactories(Windows::Foundation::IGetActivationFactory const& activationFactoryCallback)
    {
        impl::call_factory<CoreApplication, ICoreApplication>([&](ICoreApplication const& f) { return f.RunWithActivationFactories(activationFactoryCallback); });
    }
    inline auto CoreApplication::BackgroundActivated(Windows::Foundation::EventHandler<Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const& handler)
    {
        return impl::call_factory<CoreApplication, ICoreApplication2>([&](ICoreApplication2 const& f) { return f.BackgroundActivated(handler); });
    }
    inline CoreApplication::BackgroundActivated_revoker CoreApplication::BackgroundActivated(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const& handler)
    {
        auto f = get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplication2>();
        return { f, f.BackgroundActivated(handler) };
    }
    inline auto CoreApplication::BackgroundActivated(winrt::event_token const& token)
    {
        impl::call_factory<CoreApplication, ICoreApplication2>([&](ICoreApplication2 const& f) { return f.BackgroundActivated(token); });
    }
    inline auto CoreApplication::LeavingBackground(Windows::Foundation::EventHandler<Windows::ApplicationModel::LeavingBackgroundEventArgs> const& handler)
    {
        return impl::call_factory<CoreApplication, ICoreApplication2>([&](ICoreApplication2 const& f) { return f.LeavingBackground(handler); });
    }
    inline CoreApplication::LeavingBackground_revoker CoreApplication::LeavingBackground(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::LeavingBackgroundEventArgs> const& handler)
    {
        auto f = get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplication2>();
        return { f, f.LeavingBackground(handler) };
    }
    inline auto CoreApplication::LeavingBackground(winrt::event_token const& token)
    {
        impl::call_factory<CoreApplication, ICoreApplication2>([&](ICoreApplication2 const& f) { return f.LeavingBackground(token); });
    }
    inline auto CoreApplication::EnteredBackground(Windows::Foundation::EventHandler<Windows::ApplicationModel::EnteredBackgroundEventArgs> const& handler)
    {
        return impl::call_factory<CoreApplication, ICoreApplication2>([&](ICoreApplication2 const& f) { return f.EnteredBackground(handler); });
    }
    inline CoreApplication::EnteredBackground_revoker CoreApplication::EnteredBackground(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::EnteredBackgroundEventArgs> const& handler)
    {
        auto f = get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplication2>();
        return { f, f.EnteredBackground(handler) };
    }
    inline auto CoreApplication::EnteredBackground(winrt::event_token const& token)
    {
        impl::call_factory<CoreApplication, ICoreApplication2>([&](ICoreApplication2 const& f) { return f.EnteredBackground(token); });
    }
    inline auto CoreApplication::EnablePrelaunch(bool value)
    {
        impl::call_factory<CoreApplication, ICoreApplication2>([&](ICoreApplication2 const& f) { return f.EnablePrelaunch(value); });
    }
    inline auto CoreApplication::RequestRestartAsync(param::hstring const& launchArguments)
    {
        return impl::call_factory<CoreApplication, ICoreApplication3>([&](ICoreApplication3 const& f) { return f.RequestRestartAsync(launchArguments); });
    }
    inline auto CoreApplication::RequestRestartForUserAsync(Windows::System::User const& user, param::hstring const& launchArguments)
    {
        return impl::call_factory<CoreApplication, ICoreApplication3>([&](ICoreApplication3 const& f) { return f.RequestRestartForUserAsync(user, launchArguments); });
    }
    inline auto CoreApplication::Exit()
    {
        impl::call_factory_cast<void(*)(ICoreApplicationExit const&), CoreApplication, ICoreApplicationExit>([](ICoreApplicationExit const& f) { return f.Exit(); });
    }
    inline auto CoreApplication::Exiting(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
    {
        return impl::call_factory<CoreApplication, ICoreApplicationExit>([&](ICoreApplicationExit const& f) { return f.Exiting(handler); });
    }
    inline CoreApplication::Exiting_revoker CoreApplication::Exiting(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
    {
        auto f = get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplicationExit>();
        return { f, f.Exiting(handler) };
    }
    inline auto CoreApplication::Exiting(winrt::event_token const& token)
    {
        impl::call_factory<CoreApplication, ICoreApplicationExit>([&](ICoreApplicationExit const& f) { return f.Exiting(token); });
    }
    inline auto CoreApplication::UnhandledErrorDetected(Windows::Foundation::EventHandler<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> const& handler)
    {
        return impl::call_factory<CoreApplication, ICoreApplicationUnhandledError>([&](ICoreApplicationUnhandledError const& f) { return f.UnhandledErrorDetected(handler); });
    }
    inline CoreApplication::UnhandledErrorDetected_revoker CoreApplication::UnhandledErrorDetected(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> const& handler)
    {
        auto f = get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplicationUnhandledError>();
        return { f, f.UnhandledErrorDetected(handler) };
    }
    inline auto CoreApplication::UnhandledErrorDetected(winrt::event_token const& token)
    {
        impl::call_factory<CoreApplication, ICoreApplicationUnhandledError>([&](ICoreApplicationUnhandledError const& f) { return f.UnhandledErrorDetected(token); });
    }
    inline auto CoreApplication::IncrementApplicationUseCount()
    {
        impl::call_factory_cast<void(*)(ICoreApplicationUseCount const&), CoreApplication, ICoreApplicationUseCount>([](ICoreApplicationUseCount const& f) { return f.IncrementApplicationUseCount(); });
    }
    inline auto CoreApplication::DecrementApplicationUseCount()
    {
        impl::call_factory_cast<void(*)(ICoreApplicationUseCount const&), CoreApplication, ICoreApplicationUseCount>([](ICoreApplicationUseCount const& f) { return f.DecrementApplicationUseCount(); });
    }
    inline auto CoreApplication::Views()
    {
        return impl::call_factory_cast<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::CoreApplicationView>(*)(ICoreImmersiveApplication const&), CoreApplication, ICoreImmersiveApplication>([](ICoreImmersiveApplication const& f) { return f.Views(); });
    }
    inline auto CoreApplication::CreateNewView(param::hstring const& runtimeType, param::hstring const& entryPoint)
    {
        return impl::call_factory<CoreApplication, ICoreImmersiveApplication>([&](ICoreImmersiveApplication const& f) { return f.CreateNewView(runtimeType, entryPoint); });
    }
    inline auto CoreApplication::MainView()
    {
        return impl::call_factory_cast<Windows::ApplicationModel::Core::CoreApplicationView(*)(ICoreImmersiveApplication const&), CoreApplication, ICoreImmersiveApplication>([](ICoreImmersiveApplication const& f) { return f.MainView(); });
    }
    inline auto CoreApplication::CreateNewView()
    {
        return impl::call_factory_cast<Windows::ApplicationModel::Core::CoreApplicationView(*)(ICoreImmersiveApplication2 const&), CoreApplication, ICoreImmersiveApplication2>([](ICoreImmersiveApplication2 const& f) { return f.CreateNewView(); });
    }
    inline auto CoreApplication::CreateNewView(Windows::ApplicationModel::Core::IFrameworkViewSource const& viewSource)
    {
        return impl::call_factory<CoreApplication, ICoreImmersiveApplication3>([&](ICoreImmersiveApplication3 const& f) { return f.CreateNewView(viewSource); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::ApplicationModel::Core::IAppListEntry> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Core::IAppListEntry2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Core::IAppListEntry3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Core::IAppListEntry4> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Core::ICoreApplication> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Core::ICoreApplication2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Core::ICoreApplication3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Core::ICoreApplicationExit> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Core::ICoreApplicationUnhandledError> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Core::ICoreApplicationUseCount> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Core::ICoreApplicationView> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Core::ICoreApplicationView2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Core::ICoreApplicationView3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Core::ICoreApplicationView5> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Core::ICoreApplicationView6> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Core::ICoreImmersiveApplication> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Core::ICoreImmersiveApplication2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Core::ICoreImmersiveApplication3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Core::IFrameworkView> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Core::IFrameworkViewSource> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Core::IHostedViewClosingEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Core::IUnhandledError> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Core::AppListEntry> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Core::CoreApplication> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Core::CoreApplicationView> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Core::CoreApplicationViewTitleBar> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Core::HostedViewClosingEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Core::UnhandledError> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> : winrt::impl::hash_base {};
#endif
}
#endif
