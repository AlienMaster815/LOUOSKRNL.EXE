// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_ApplicationModel_Appointments_DataProvider_0_H
#define WINRT_Windows_ApplicationModel_Appointments_DataProvider_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Appointments
{
    struct Appointment;
    struct AppointmentInvitee;
    enum class AppointmentParticipantResponse : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename T> struct __declspec(empty_bases) IReference;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Appointments::DataProvider
{
    struct IAppointmentCalendarCancelMeetingRequest;
    struct IAppointmentCalendarCancelMeetingRequestEventArgs;
    struct IAppointmentCalendarCreateOrUpdateAppointmentRequest;
    struct IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs;
    struct IAppointmentCalendarForwardMeetingRequest;
    struct IAppointmentCalendarForwardMeetingRequestEventArgs;
    struct IAppointmentCalendarProposeNewTimeForMeetingRequest;
    struct IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs;
    struct IAppointmentCalendarSyncManagerSyncRequest;
    struct IAppointmentCalendarSyncManagerSyncRequestEventArgs;
    struct IAppointmentCalendarUpdateMeetingResponseRequest;
    struct IAppointmentCalendarUpdateMeetingResponseRequestEventArgs;
    struct IAppointmentDataProviderConnection;
    struct IAppointmentDataProviderTriggerDetails;
    struct AppointmentCalendarCancelMeetingRequest;
    struct AppointmentCalendarCancelMeetingRequestEventArgs;
    struct AppointmentCalendarCreateOrUpdateAppointmentRequest;
    struct AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs;
    struct AppointmentCalendarForwardMeetingRequest;
    struct AppointmentCalendarForwardMeetingRequestEventArgs;
    struct AppointmentCalendarProposeNewTimeForMeetingRequest;
    struct AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs;
    struct AppointmentCalendarSyncManagerSyncRequest;
    struct AppointmentCalendarSyncManagerSyncRequestEventArgs;
    struct AppointmentCalendarUpdateMeetingResponseRequest;
    struct AppointmentCalendarUpdateMeetingResponseRequestEventArgs;
    struct AppointmentDataProviderConnection;
    struct AppointmentDataProviderTriggerDetails;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequest>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequestEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequest>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequest>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequestEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequest>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequest>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequestEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequest>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequestEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderTriggerDetails>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCancelMeetingRequest>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCancelMeetingRequestEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCreateOrUpdateAppointmentRequest>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarForwardMeetingRequest>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarForwardMeetingRequestEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarProposeNewTimeForMeetingRequest>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarSyncManagerSyncRequest>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarSyncManagerSyncRequestEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarUpdateMeetingResponseRequest>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarUpdateMeetingResponseRequestEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderTriggerDetails>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCancelMeetingRequest> = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCancelMeetingRequest";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCancelMeetingRequestEventArgs> = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCancelMeetingRequestEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCreateOrUpdateAppointmentRequest> = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCreateOrUpdateAppointmentRequest";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs> = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarForwardMeetingRequest> = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarForwardMeetingRequest";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarForwardMeetingRequestEventArgs> = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarForwardMeetingRequestEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarProposeNewTimeForMeetingRequest> = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarProposeNewTimeForMeetingRequest";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs> = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarSyncManagerSyncRequest> = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarSyncManagerSyncRequest";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarSyncManagerSyncRequestEventArgs> = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarSyncManagerSyncRequestEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarUpdateMeetingResponseRequest> = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarUpdateMeetingResponseRequest";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarUpdateMeetingResponseRequestEventArgs> = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarUpdateMeetingResponseRequestEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection> = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentDataProviderConnection";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderTriggerDetails> = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentDataProviderTriggerDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequest> = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCancelMeetingRequest";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequestEventArgs> = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCancelMeetingRequestEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequest> = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCreateOrUpdateAppointmentRequest";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs> = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequest> = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarForwardMeetingRequest";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequestEventArgs> = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarForwardMeetingRequestEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequest> = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarProposeNewTimeForMeetingRequest";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs> = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequest> = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarSyncManagerSyncRequest";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequestEventArgs> = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarSyncManagerSyncRequestEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequest> = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarUpdateMeetingResponseRequest";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequestEventArgs> = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarUpdateMeetingResponseRequestEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection> = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentDataProviderConnection";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderTriggerDetails> = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentDataProviderTriggerDetails";
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequest>{ 0x49460F8D,0x6434,0x40D7,{ 0xAD,0x46,0x62,0x97,0x41,0x93,0x14,0xD1 } }; // 49460F8D-6434-40D7-AD46-6297419314D1
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequestEventArgs>{ 0x1A79BE16,0x7F30,0x4E35,{ 0xBE,0xEF,0x9D,0x2C,0x7B,0x6D,0xCA,0xE1 } }; // 1A79BE16-7F30-4E35-BEEF-9D2C7B6DCAE1
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequest>{ 0x2E62F2B2,0xCA96,0x48AC,{ 0x91,0x24,0x40,0x6B,0x19,0xFE,0xFA,0x70 } }; // 2E62F2B2-CA96-48AC-9124-406B19FEFA70
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs>{ 0xCF8DED28,0x002E,0x4BF7,{ 0x8E,0x9D,0x5E,0x20,0xD4,0x9A,0xA3,0xBA } }; // CF8DED28-002E-4BF7-8E9D-5E20D49AA3BA
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequest>{ 0x82E5EE56,0x26B6,0x4253,{ 0x8A,0x8F,0x6C,0xF5,0xF2,0xFF,0x78,0x84 } }; // 82E5EE56-26B6-4253-8A8F-6CF5F2FF7884
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequestEventArgs>{ 0x3109151A,0x23A2,0x42FD,{ 0x9C,0x82,0xC9,0xA6,0x0D,0x59,0xF8,0xA8 } }; // 3109151A-23A2-42FD-9C82-C9A60D59F8A8
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequest>{ 0xCE1C63F5,0xEDF6,0x43C3,{ 0x82,0xB7,0xBE,0x6B,0x36,0x8C,0x69,0x00 } }; // CE1C63F5-EDF6-43C3-82B7-BE6B368C6900
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs>{ 0xD2D777D8,0xFED1,0x4280,{ 0xA3,0xBA,0x2E,0x1F,0x47,0x60,0x9A,0xA2 } }; // D2D777D8-FED1-4280-A3BA-2E1F47609AA2
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequest>{ 0x12AB382B,0x7163,0x4A56,{ 0x9A,0x4E,0x72,0x23,0xA8,0x4A,0xDF,0x46 } }; // 12AB382B-7163-4A56-9A4E-7223A84ADF46
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequestEventArgs>{ 0xCA17C6F7,0x0284,0x4EDD,{ 0x87,0xBA,0x4D,0x8F,0x69,0xDC,0xF5,0xC0 } }; // CA17C6F7-0284-4EDD-87BA-4D8F69DCF5C0
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequest>{ 0xA36D608C,0xC29D,0x4B94,{ 0xB0,0x86,0x7E,0x9F,0xF7,0xBD,0x84,0xA0 } }; // A36D608C-C29D-4B94-B086-7E9FF7BD84A0
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequestEventArgs>{ 0x88759883,0x97BF,0x479D,{ 0xAE,0xD5,0x0B,0xE8,0xCE,0x56,0x7D,0x1E } }; // 88759883-97BF-479D-AED5-0BE8CE567D1E
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection>{ 0xF3DD9D83,0x3254,0x465F,{ 0xAB,0xDB,0x92,0x80,0x46,0x55,0x2C,0xF4 } }; // F3DD9D83-3254-465F-ABDB-928046552CF4
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderTriggerDetails>{ 0xB3283C01,0x7E12,0x4E5E,{ 0xB1,0xEF,0x74,0xFB,0x68,0xAC,0x6F,0x2A } }; // B3283C01-7E12-4E5E-B1EF-74FB68AC6F2A
    template <> struct default_interface<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCancelMeetingRequest>{ using type = winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequest; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCancelMeetingRequestEventArgs>{ using type = winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequestEventArgs; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCreateOrUpdateAppointmentRequest>{ using type = winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequest; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs>{ using type = winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarForwardMeetingRequest>{ using type = winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequest; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarForwardMeetingRequestEventArgs>{ using type = winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequestEventArgs; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarProposeNewTimeForMeetingRequest>{ using type = winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequest; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs>{ using type = winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarSyncManagerSyncRequest>{ using type = winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequest; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarSyncManagerSyncRequestEventArgs>{ using type = winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequestEventArgs; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarUpdateMeetingResponseRequest>{ using type = winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequest; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarUpdateMeetingResponseRequestEventArgs>{ using type = winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequestEventArgs; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection>{ using type = winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderTriggerDetails>{ using type = winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderTriggerDetails; };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppointmentCalendarLocalId(void**) noexcept = 0;
            virtual int32_t __stdcall get_AppointmentLocalId(void**) noexcept = 0;
            virtual int32_t __stdcall get_AppointmentOriginalStartTime(void**) noexcept = 0;
            virtual int32_t __stdcall get_Subject(void**) noexcept = 0;
            virtual int32_t __stdcall get_Comment(void**) noexcept = 0;
            virtual int32_t __stdcall get_NotifyInvitees(bool*) noexcept = 0;
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppointmentCalendarLocalId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Appointment(void**) noexcept = 0;
            virtual int32_t __stdcall get_NotifyInvitees(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ChangedProperties(void**) noexcept = 0;
            virtual int32_t __stdcall ReportCompletedAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppointmentCalendarLocalId(void**) noexcept = 0;
            virtual int32_t __stdcall get_AppointmentLocalId(void**) noexcept = 0;
            virtual int32_t __stdcall get_AppointmentOriginalStartTime(void**) noexcept = 0;
            virtual int32_t __stdcall get_Invitees(void**) noexcept = 0;
            virtual int32_t __stdcall get_Subject(void**) noexcept = 0;
            virtual int32_t __stdcall get_ForwardHeader(void**) noexcept = 0;
            virtual int32_t __stdcall get_Comment(void**) noexcept = 0;
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppointmentCalendarLocalId(void**) noexcept = 0;
            virtual int32_t __stdcall get_AppointmentLocalId(void**) noexcept = 0;
            virtual int32_t __stdcall get_AppointmentOriginalStartTime(void**) noexcept = 0;
            virtual int32_t __stdcall get_NewStartTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_NewDuration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Subject(void**) noexcept = 0;
            virtual int32_t __stdcall get_Comment(void**) noexcept = 0;
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppointmentCalendarLocalId(void**) noexcept = 0;
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppointmentCalendarLocalId(void**) noexcept = 0;
            virtual int32_t __stdcall get_AppointmentLocalId(void**) noexcept = 0;
            virtual int32_t __stdcall get_AppointmentOriginalStartTime(void**) noexcept = 0;
            virtual int32_t __stdcall get_Response(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Subject(void**) noexcept = 0;
            virtual int32_t __stdcall get_Comment(void**) noexcept = 0;
            virtual int32_t __stdcall get_SendUpdate(bool*) noexcept = 0;
            virtual int32_t __stdcall ReportCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ReportFailedAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequestEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_SyncRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SyncRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CreateOrUpdateAppointmentRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CreateOrUpdateAppointmentRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CancelMeetingRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CancelMeetingRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ForwardMeetingRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ForwardMeetingRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ProposeNewTimeForMeetingRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ProposeNewTimeForMeetingRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_UpdateMeetingResponseRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_UpdateMeetingResponseRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Connection(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarCancelMeetingRequest
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AppointmentCalendarLocalId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AppointmentLocalId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime>) AppointmentOriginalStartTime() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Subject() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Comment() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) NotifyInvitees() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) ReportCompletedAsync() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) ReportFailedAsync() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarCancelMeetingRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarCancelMeetingRequestEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCancelMeetingRequest) Request() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarCancelMeetingRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarCreateOrUpdateAppointmentRequest
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AppointmentCalendarLocalId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::Appointment) Appointment() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) NotifyInvitees() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<hstring>) ChangedProperties() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) ReportCompletedAsync(winrt::Windows::ApplicationModel::Appointments::Appointment const& createdOrUpdatedAppointment) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) ReportFailedAsync() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarCreateOrUpdateAppointmentRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCreateOrUpdateAppointmentRequest) Request() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarForwardMeetingRequest
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AppointmentCalendarLocalId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AppointmentLocalId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime>) AppointmentOriginalStartTime() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::Appointments::AppointmentInvitee>) Invitees() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Subject() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ForwardHeader() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Comment() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) ReportCompletedAsync() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) ReportFailedAsync() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarForwardMeetingRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarForwardMeetingRequestEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarForwardMeetingRequest) Request() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarForwardMeetingRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarProposeNewTimeForMeetingRequest
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AppointmentCalendarLocalId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AppointmentLocalId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime>) AppointmentOriginalStartTime() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::DateTime) NewStartTime() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) NewDuration() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Subject() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Comment() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) ReportCompletedAsync() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) ReportFailedAsync() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarProposeNewTimeForMeetingRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarProposeNewTimeForMeetingRequest) Request() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarSyncManagerSyncRequest
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AppointmentCalendarLocalId() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) ReportCompletedAsync() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) ReportFailedAsync() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarSyncManagerSyncRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarSyncManagerSyncRequestEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarSyncManagerSyncRequest) Request() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarSyncManagerSyncRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarUpdateMeetingResponseRequest
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AppointmentCalendarLocalId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AppointmentLocalId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime>) AppointmentOriginalStartTime() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::AppointmentParticipantResponse) Response() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Subject() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Comment() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) SendUpdate() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) ReportCompletedAsync() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) ReportFailedAsync() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarUpdateMeetingResponseRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarUpdateMeetingResponseRequestEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarUpdateMeetingResponseRequest) Request() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequestEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarUpdateMeetingResponseRequestEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentDataProviderConnection
    {
        WINRT_IMPL_AUTO(winrt::event_token) SyncRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarSyncManagerSyncRequestEventArgs> const& handler) const;
        using SyncRequested_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection, &impl::abi_t<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection>::remove_SyncRequested>;
        [[nodiscard]] SyncRequested_revoker SyncRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarSyncManagerSyncRequestEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) SyncRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) CreateOrUpdateAppointmentRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs> const& handler) const;
        using CreateOrUpdateAppointmentRequested_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection, &impl::abi_t<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection>::remove_CreateOrUpdateAppointmentRequested>;
        [[nodiscard]] CreateOrUpdateAppointmentRequested_revoker CreateOrUpdateAppointmentRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) CreateOrUpdateAppointmentRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) CancelMeetingRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCancelMeetingRequestEventArgs> const& handler) const;
        using CancelMeetingRequested_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection, &impl::abi_t<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection>::remove_CancelMeetingRequested>;
        [[nodiscard]] CancelMeetingRequested_revoker CancelMeetingRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCancelMeetingRequestEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) CancelMeetingRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) ForwardMeetingRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarForwardMeetingRequestEventArgs> const& handler) const;
        using ForwardMeetingRequested_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection, &impl::abi_t<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection>::remove_ForwardMeetingRequested>;
        [[nodiscard]] ForwardMeetingRequested_revoker ForwardMeetingRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarForwardMeetingRequestEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ForwardMeetingRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) ProposeNewTimeForMeetingRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs> const& handler) const;
        using ProposeNewTimeForMeetingRequested_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection, &impl::abi_t<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection>::remove_ProposeNewTimeForMeetingRequested>;
        [[nodiscard]] ProposeNewTimeForMeetingRequested_revoker ProposeNewTimeForMeetingRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ProposeNewTimeForMeetingRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) UpdateMeetingResponseRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarUpdateMeetingResponseRequestEventArgs> const& handler) const;
        using UpdateMeetingResponseRequested_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection, &impl::abi_t<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection>::remove_UpdateMeetingResponseRequested>;
        [[nodiscard]] UpdateMeetingResponseRequested_revoker UpdateMeetingResponseRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarUpdateMeetingResponseRequestEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) UpdateMeetingResponseRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(void) Start() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentDataProviderConnection<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentDataProviderTriggerDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection) Connection() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderTriggerDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentDataProviderTriggerDetails<D>;
    };
}
#endif
