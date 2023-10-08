// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Devices_Usb_0_H
#define WINRT_Windows_Devices_Usb_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    template <typename T> struct __declspec(empty_bases) IReference;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
    struct IInputStream;
    struct IOutputStream;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Usb
{
    enum class UsbControlRecipient : int32_t
    {
        Device = 0,
        SpecifiedInterface = 1,
        Endpoint = 2,
        Other = 3,
        DefaultInterface = 4,
    };
    enum class UsbControlTransferType : int32_t
    {
        Standard = 0,
        Class = 1,
        Vendor = 2,
    };
    enum class UsbEndpointType : int32_t
    {
        Control = 0,
        Isochronous = 1,
        Bulk = 2,
        Interrupt = 3,
    };
    enum class UsbReadOptions : uint32_t
    {
        None = 0,
        AutoClearStall = 0x1,
        OverrideAutomaticBufferManagement = 0x2,
        IgnoreShortPacket = 0x4,
        AllowPartialReads = 0x8,
    };
    enum class UsbTransferDirection : int32_t
    {
        Out = 0,
        In = 1,
    };
    enum class UsbWriteOptions : uint32_t
    {
        None = 0,
        AutoClearStall = 0x1,
        ShortPacketTerminate = 0x2,
    };
    struct IUsbBulkInEndpointDescriptor;
    struct IUsbBulkInPipe;
    struct IUsbBulkOutEndpointDescriptor;
    struct IUsbBulkOutPipe;
    struct IUsbConfiguration;
    struct IUsbConfigurationDescriptor;
    struct IUsbConfigurationDescriptorStatics;
    struct IUsbControlRequestType;
    struct IUsbDescriptor;
    struct IUsbDevice;
    struct IUsbDeviceClass;
    struct IUsbDeviceClasses;
    struct IUsbDeviceClassesStatics;
    struct IUsbDeviceDescriptor;
    struct IUsbDeviceStatics;
    struct IUsbEndpointDescriptor;
    struct IUsbEndpointDescriptorStatics;
    struct IUsbInterface;
    struct IUsbInterfaceDescriptor;
    struct IUsbInterfaceDescriptorStatics;
    struct IUsbInterfaceSetting;
    struct IUsbInterruptInEndpointDescriptor;
    struct IUsbInterruptInEventArgs;
    struct IUsbInterruptInPipe;
    struct IUsbInterruptOutEndpointDescriptor;
    struct IUsbInterruptOutPipe;
    struct IUsbSetupPacket;
    struct IUsbSetupPacketFactory;
    struct UsbBulkInEndpointDescriptor;
    struct UsbBulkInPipe;
    struct UsbBulkOutEndpointDescriptor;
    struct UsbBulkOutPipe;
    struct UsbConfiguration;
    struct UsbConfigurationDescriptor;
    struct UsbControlRequestType;
    struct UsbDescriptor;
    struct UsbDevice;
    struct UsbDeviceClass;
    struct UsbDeviceClasses;
    struct UsbDeviceDescriptor;
    struct UsbEndpointDescriptor;
    struct UsbInterface;
    struct UsbInterfaceDescriptor;
    struct UsbInterfaceSetting;
    struct UsbInterruptInEndpointDescriptor;
    struct UsbInterruptInEventArgs;
    struct UsbInterruptInPipe;
    struct UsbInterruptOutEndpointDescriptor;
    struct UsbInterruptOutPipe;
    struct UsbSetupPacket;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Devices::Usb::IUsbBulkInEndpointDescriptor>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Usb::IUsbBulkInPipe>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Usb::IUsbBulkOutPipe>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Usb::IUsbConfiguration>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Usb::IUsbConfigurationDescriptor>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Usb::IUsbConfigurationDescriptorStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Usb::IUsbControlRequestType>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Usb::IUsbDescriptor>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Usb::IUsbDevice>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Usb::IUsbDeviceClass>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Usb::IUsbDeviceClasses>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Usb::IUsbDeviceClassesStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Usb::IUsbDeviceDescriptor>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Usb::IUsbDeviceStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Usb::IUsbEndpointDescriptor>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Usb::IUsbEndpointDescriptorStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Usb::IUsbInterface>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Usb::IUsbInterfaceDescriptor>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Usb::IUsbInterfaceDescriptorStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Usb::IUsbInterfaceSetting>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Usb::IUsbInterruptInEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Usb::IUsbInterruptInPipe>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Usb::IUsbInterruptOutPipe>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Usb::IUsbSetupPacket>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Usb::IUsbSetupPacketFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Usb::UsbBulkInEndpointDescriptor>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Usb::UsbBulkInPipe>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Usb::UsbBulkOutEndpointDescriptor>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Usb::UsbBulkOutPipe>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Usb::UsbConfiguration>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Usb::UsbConfigurationDescriptor>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Usb::UsbControlRequestType>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Usb::UsbDescriptor>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Usb::UsbDevice>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Usb::UsbDeviceClass>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Usb::UsbDeviceClasses>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Usb::UsbDeviceDescriptor>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Usb::UsbEndpointDescriptor>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Usb::UsbInterface>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Usb::UsbInterfaceDescriptor>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Usb::UsbInterfaceSetting>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Usb::UsbInterruptInEndpointDescriptor>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Usb::UsbInterruptInEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Usb::UsbInterruptInPipe>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Usb::UsbInterruptOutPipe>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Usb::UsbSetupPacket>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Usb::UsbControlRecipient>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::Usb::UsbControlTransferType>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::Usb::UsbEndpointType>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::Usb::UsbReadOptions>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::Usb::UsbTransferDirection>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::Usb::UsbWriteOptions>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::UsbBulkInEndpointDescriptor> = L"Windows.Devices.Usb.UsbBulkInEndpointDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::UsbBulkInPipe> = L"Windows.Devices.Usb.UsbBulkInPipe";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::UsbBulkOutEndpointDescriptor> = L"Windows.Devices.Usb.UsbBulkOutEndpointDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::UsbBulkOutPipe> = L"Windows.Devices.Usb.UsbBulkOutPipe";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::UsbConfiguration> = L"Windows.Devices.Usb.UsbConfiguration";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::UsbConfigurationDescriptor> = L"Windows.Devices.Usb.UsbConfigurationDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::UsbControlRequestType> = L"Windows.Devices.Usb.UsbControlRequestType";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::UsbDescriptor> = L"Windows.Devices.Usb.UsbDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::UsbDevice> = L"Windows.Devices.Usb.UsbDevice";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::UsbDeviceClass> = L"Windows.Devices.Usb.UsbDeviceClass";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::UsbDeviceClasses> = L"Windows.Devices.Usb.UsbDeviceClasses";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::UsbDeviceDescriptor> = L"Windows.Devices.Usb.UsbDeviceDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::UsbEndpointDescriptor> = L"Windows.Devices.Usb.UsbEndpointDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::UsbInterface> = L"Windows.Devices.Usb.UsbInterface";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::UsbInterfaceDescriptor> = L"Windows.Devices.Usb.UsbInterfaceDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::UsbInterfaceSetting> = L"Windows.Devices.Usb.UsbInterfaceSetting";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::UsbInterruptInEndpointDescriptor> = L"Windows.Devices.Usb.UsbInterruptInEndpointDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::UsbInterruptInEventArgs> = L"Windows.Devices.Usb.UsbInterruptInEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::UsbInterruptInPipe> = L"Windows.Devices.Usb.UsbInterruptInPipe";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor> = L"Windows.Devices.Usb.UsbInterruptOutEndpointDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::UsbInterruptOutPipe> = L"Windows.Devices.Usb.UsbInterruptOutPipe";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::UsbSetupPacket> = L"Windows.Devices.Usb.UsbSetupPacket";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::UsbControlRecipient> = L"Windows.Devices.Usb.UsbControlRecipient";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::UsbControlTransferType> = L"Windows.Devices.Usb.UsbControlTransferType";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::UsbEndpointType> = L"Windows.Devices.Usb.UsbEndpointType";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::UsbReadOptions> = L"Windows.Devices.Usb.UsbReadOptions";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::UsbTransferDirection> = L"Windows.Devices.Usb.UsbTransferDirection";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::UsbWriteOptions> = L"Windows.Devices.Usb.UsbWriteOptions";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::IUsbBulkInEndpointDescriptor> = L"Windows.Devices.Usb.IUsbBulkInEndpointDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::IUsbBulkInPipe> = L"Windows.Devices.Usb.IUsbBulkInPipe";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor> = L"Windows.Devices.Usb.IUsbBulkOutEndpointDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::IUsbBulkOutPipe> = L"Windows.Devices.Usb.IUsbBulkOutPipe";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::IUsbConfiguration> = L"Windows.Devices.Usb.IUsbConfiguration";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::IUsbConfigurationDescriptor> = L"Windows.Devices.Usb.IUsbConfigurationDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::IUsbConfigurationDescriptorStatics> = L"Windows.Devices.Usb.IUsbConfigurationDescriptorStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::IUsbControlRequestType> = L"Windows.Devices.Usb.IUsbControlRequestType";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::IUsbDescriptor> = L"Windows.Devices.Usb.IUsbDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::IUsbDevice> = L"Windows.Devices.Usb.IUsbDevice";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::IUsbDeviceClass> = L"Windows.Devices.Usb.IUsbDeviceClass";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::IUsbDeviceClasses> = L"Windows.Devices.Usb.IUsbDeviceClasses";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::IUsbDeviceClassesStatics> = L"Windows.Devices.Usb.IUsbDeviceClassesStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::IUsbDeviceDescriptor> = L"Windows.Devices.Usb.IUsbDeviceDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::IUsbDeviceStatics> = L"Windows.Devices.Usb.IUsbDeviceStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::IUsbEndpointDescriptor> = L"Windows.Devices.Usb.IUsbEndpointDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::IUsbEndpointDescriptorStatics> = L"Windows.Devices.Usb.IUsbEndpointDescriptorStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::IUsbInterface> = L"Windows.Devices.Usb.IUsbInterface";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::IUsbInterfaceDescriptor> = L"Windows.Devices.Usb.IUsbInterfaceDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::IUsbInterfaceDescriptorStatics> = L"Windows.Devices.Usb.IUsbInterfaceDescriptorStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::IUsbInterfaceSetting> = L"Windows.Devices.Usb.IUsbInterfaceSetting";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor> = L"Windows.Devices.Usb.IUsbInterruptInEndpointDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::IUsbInterruptInEventArgs> = L"Windows.Devices.Usb.IUsbInterruptInEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::IUsbInterruptInPipe> = L"Windows.Devices.Usb.IUsbInterruptInPipe";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor> = L"Windows.Devices.Usb.IUsbInterruptOutEndpointDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::IUsbInterruptOutPipe> = L"Windows.Devices.Usb.IUsbInterruptOutPipe";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::IUsbSetupPacket> = L"Windows.Devices.Usb.IUsbSetupPacket";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Usb::IUsbSetupPacketFactory> = L"Windows.Devices.Usb.IUsbSetupPacketFactory";
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Usb::IUsbBulkInEndpointDescriptor>{ 0x3C6E4846,0x06CF,0x42A9,{ 0x9D,0xC2,0x97,0x1C,0x1B,0x14,0xB6,0xE3 } }; // 3C6E4846-06CF-42A9-9DC2-971C1B14B6E3
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Usb::IUsbBulkInPipe>{ 0xF01D2D3B,0x4548,0x4D50,{ 0xB3,0x26,0xD8,0x2C,0xDA,0xBE,0x12,0x20 } }; // F01D2D3B-4548-4D50-B326-D82CDABE1220
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor>{ 0x2820847A,0xFFEE,0x4F60,{ 0x9B,0xE1,0x95,0x6C,0xAC,0x3E,0xCB,0x65 } }; // 2820847A-FFEE-4F60-9BE1-956CAC3ECB65
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Usb::IUsbBulkOutPipe>{ 0xA8E9EE6E,0x0115,0x45AA,{ 0x8B,0x21,0x37,0xB2,0x25,0xBC,0xCE,0xE7 } }; // A8E9EE6E-0115-45AA-8B21-37B225BCCEE7
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Usb::IUsbConfiguration>{ 0x68177429,0x36A9,0x46D7,{ 0xB8,0x73,0xFC,0x68,0x92,0x51,0xEC,0x30 } }; // 68177429-36A9-46D7-B873-FC689251EC30
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Usb::IUsbConfigurationDescriptor>{ 0xF2176D92,0xB442,0x407A,{ 0x82,0x07,0x7D,0x64,0x6C,0x03,0x85,0xF3 } }; // F2176D92-B442-407A-8207-7D646C0385F3
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Usb::IUsbConfigurationDescriptorStatics>{ 0x424CED93,0xE740,0x40A1,{ 0x92,0xBD,0xDA,0x12,0x0E,0xA0,0x49,0x14 } }; // 424CED93-E740-40A1-92BD-DA120EA04914
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Usb::IUsbControlRequestType>{ 0x8E9465A6,0xD73D,0x46DE,{ 0x94,0xBE,0xAA,0xE7,0xF0,0x7C,0x0F,0x5C } }; // 8E9465A6-D73D-46DE-94BE-AAE7F07C0F5C
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Usb::IUsbDescriptor>{ 0x0A89F216,0x5F9D,0x4874,{ 0x89,0x04,0xDA,0x9A,0xD3,0xF5,0x52,0x8F } }; // 0A89F216-5F9D-4874-8904-DA9AD3F5528F
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Usb::IUsbDevice>{ 0x5249B992,0xC456,0x44D5,{ 0xAD,0x5E,0x24,0xF5,0xA0,0x89,0xF6,0x3B } }; // 5249B992-C456-44D5-AD5E-24F5A089F63B
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Usb::IUsbDeviceClass>{ 0x051942F9,0x845E,0x47EB,{ 0xB1,0x2A,0x38,0xF2,0xF6,0x17,0xAF,0xE7 } }; // 051942F9-845E-47EB-B12A-38F2F617AFE7
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Usb::IUsbDeviceClasses>{ 0x686F955D,0x9B92,0x4B30,{ 0x97,0x81,0xC2,0x2C,0x55,0xAC,0x35,0xCB } }; // 686F955D-9B92-4B30-9781-C22C55AC35CB
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Usb::IUsbDeviceClassesStatics>{ 0xB20B0527,0xC580,0x4599,{ 0xA1,0x65,0x98,0x1B,0x4F,0xD0,0x32,0x30 } }; // B20B0527-C580-4599-A165-981B4FD03230
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Usb::IUsbDeviceDescriptor>{ 0x1F48D1F6,0xBA97,0x4322,{ 0xB9,0x2C,0xB5,0xB1,0x89,0x21,0x65,0x88 } }; // 1F48D1F6-BA97-4322-B92C-B5B189216588
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Usb::IUsbDeviceStatics>{ 0x066B85A2,0x09B7,0x4446,{ 0x85,0x02,0x6F,0xE6,0xDC,0xAA,0x73,0x09 } }; // 066B85A2-09B7-4446-8502-6FE6DCAA7309
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Usb::IUsbEndpointDescriptor>{ 0x6B4862D9,0x8DF7,0x4B40,{ 0xAC,0x83,0x57,0x8F,0x13,0x9F,0x05,0x75 } }; // 6B4862D9-8DF7-4B40-AC83-578F139F0575
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Usb::IUsbEndpointDescriptorStatics>{ 0xC890B201,0x9A6A,0x495E,{ 0xA8,0x2C,0x29,0x5B,0x9E,0x70,0x81,0x06 } }; // C890B201-9A6A-495E-A82C-295B9E708106
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Usb::IUsbInterface>{ 0xA0322B95,0x7F47,0x48AB,{ 0xA7,0x27,0x67,0x8C,0x25,0xBE,0x21,0x12 } }; // A0322B95-7F47-48AB-A727-678C25BE2112
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Usb::IUsbInterfaceDescriptor>{ 0x199670C7,0xB7EE,0x4F90,{ 0x8C,0xD5,0x94,0xA2,0xE2,0x57,0x59,0x8A } }; // 199670C7-B7EE-4F90-8CD5-94A2E257598A
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Usb::IUsbInterfaceDescriptorStatics>{ 0xE34A9FF5,0x77D6,0x48B6,{ 0xB0,0xBE,0x16,0xC6,0x42,0x23,0x16,0xFE } }; // E34A9FF5-77D6-48B6-B0BE-16C6422316FE
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Usb::IUsbInterfaceSetting>{ 0x1827BBA7,0x8DA7,0x4AF7,{ 0x8F,0x4C,0x7F,0x30,0x32,0xE7,0x81,0xF5 } }; // 1827BBA7-8DA7-4AF7-8F4C-7F3032E781F5
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor>{ 0xC0528967,0xC911,0x4C3A,{ 0x86,0xB2,0x41,0x9C,0x2D,0xA8,0x90,0x39 } }; // C0528967-C911-4C3A-86B2-419C2DA89039
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Usb::IUsbInterruptInEventArgs>{ 0xB7B04092,0x1418,0x4936,{ 0x82,0x09,0x29,0x9C,0xF5,0x60,0x55,0x83 } }; // B7B04092-1418-4936-8209-299CF5605583
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Usb::IUsbInterruptInPipe>{ 0xFA007116,0x84D7,0x48C7,{ 0x8A,0x3F,0x4C,0x0B,0x23,0x5F,0x2E,0xA6 } }; // FA007116-84D7-48C7-8A3F-4C0B235F2EA6
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor>{ 0xCC9FED81,0x10CA,0x4533,{ 0x95,0x2D,0x9E,0x27,0x83,0x41,0xE8,0x0F } }; // CC9FED81-10CA-4533-952D-9E278341E80F
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Usb::IUsbInterruptOutPipe>{ 0xE984C8A9,0xAAF9,0x49D0,{ 0xB9,0x6C,0xF6,0x61,0xAB,0x4A,0x7F,0x95 } }; // E984C8A9-AAF9-49D0-B96C-F661AB4A7F95
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Usb::IUsbSetupPacket>{ 0x104BA132,0xC78F,0x4C51,{ 0xB6,0x54,0xE4,0x9D,0x02,0xF2,0xCB,0x03 } }; // 104BA132-C78F-4C51-B654-E49D02F2CB03
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Usb::IUsbSetupPacketFactory>{ 0xC9257D50,0x1B2E,0x4A41,{ 0xA2,0xA7,0x33,0x8F,0x0C,0xEF,0x3C,0x14 } }; // C9257D50-1B2E-4A41-A2A7-338F0CEF3C14
    template <> struct default_interface<winrt::Windows::Devices::Usb::UsbBulkInEndpointDescriptor>{ using type = winrt::Windows::Devices::Usb::IUsbBulkInEndpointDescriptor; };
    template <> struct default_interface<winrt::Windows::Devices::Usb::UsbBulkInPipe>{ using type = winrt::Windows::Devices::Usb::IUsbBulkInPipe; };
    template <> struct default_interface<winrt::Windows::Devices::Usb::UsbBulkOutEndpointDescriptor>{ using type = winrt::Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor; };
    template <> struct default_interface<winrt::Windows::Devices::Usb::UsbBulkOutPipe>{ using type = winrt::Windows::Devices::Usb::IUsbBulkOutPipe; };
    template <> struct default_interface<winrt::Windows::Devices::Usb::UsbConfiguration>{ using type = winrt::Windows::Devices::Usb::IUsbConfiguration; };
    template <> struct default_interface<winrt::Windows::Devices::Usb::UsbConfigurationDescriptor>{ using type = winrt::Windows::Devices::Usb::IUsbConfigurationDescriptor; };
    template <> struct default_interface<winrt::Windows::Devices::Usb::UsbControlRequestType>{ using type = winrt::Windows::Devices::Usb::IUsbControlRequestType; };
    template <> struct default_interface<winrt::Windows::Devices::Usb::UsbDescriptor>{ using type = winrt::Windows::Devices::Usb::IUsbDescriptor; };
    template <> struct default_interface<winrt::Windows::Devices::Usb::UsbDevice>{ using type = winrt::Windows::Devices::Usb::IUsbDevice; };
    template <> struct default_interface<winrt::Windows::Devices::Usb::UsbDeviceClass>{ using type = winrt::Windows::Devices::Usb::IUsbDeviceClass; };
    template <> struct default_interface<winrt::Windows::Devices::Usb::UsbDeviceClasses>{ using type = winrt::Windows::Devices::Usb::IUsbDeviceClasses; };
    template <> struct default_interface<winrt::Windows::Devices::Usb::UsbDeviceDescriptor>{ using type = winrt::Windows::Devices::Usb::IUsbDeviceDescriptor; };
    template <> struct default_interface<winrt::Windows::Devices::Usb::UsbEndpointDescriptor>{ using type = winrt::Windows::Devices::Usb::IUsbEndpointDescriptor; };
    template <> struct default_interface<winrt::Windows::Devices::Usb::UsbInterface>{ using type = winrt::Windows::Devices::Usb::IUsbInterface; };
    template <> struct default_interface<winrt::Windows::Devices::Usb::UsbInterfaceDescriptor>{ using type = winrt::Windows::Devices::Usb::IUsbInterfaceDescriptor; };
    template <> struct default_interface<winrt::Windows::Devices::Usb::UsbInterfaceSetting>{ using type = winrt::Windows::Devices::Usb::IUsbInterfaceSetting; };
    template <> struct default_interface<winrt::Windows::Devices::Usb::UsbInterruptInEndpointDescriptor>{ using type = winrt::Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor; };
    template <> struct default_interface<winrt::Windows::Devices::Usb::UsbInterruptInEventArgs>{ using type = winrt::Windows::Devices::Usb::IUsbInterruptInEventArgs; };
    template <> struct default_interface<winrt::Windows::Devices::Usb::UsbInterruptInPipe>{ using type = winrt::Windows::Devices::Usb::IUsbInterruptInPipe; };
    template <> struct default_interface<winrt::Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor>{ using type = winrt::Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor; };
    template <> struct default_interface<winrt::Windows::Devices::Usb::UsbInterruptOutPipe>{ using type = winrt::Windows::Devices::Usb::IUsbInterruptOutPipe; };
    template <> struct default_interface<winrt::Windows::Devices::Usb::UsbSetupPacket>{ using type = winrt::Windows::Devices::Usb::IUsbSetupPacket; };
    template <> struct abi<winrt::Windows::Devices::Usb::IUsbBulkInEndpointDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaxPacketSize(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_EndpointNumber(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Pipe(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Usb::IUsbBulkInPipe>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaxTransferSizeBytes(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_EndpointDescriptor(void**) noexcept = 0;
            virtual int32_t __stdcall ClearStallAsync(void**) noexcept = 0;
            virtual int32_t __stdcall put_ReadOptions(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReadOptions(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall FlushBuffer() noexcept = 0;
            virtual int32_t __stdcall get_InputStream(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaxPacketSize(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_EndpointNumber(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Pipe(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Usb::IUsbBulkOutPipe>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EndpointDescriptor(void**) noexcept = 0;
            virtual int32_t __stdcall ClearStallAsync(void**) noexcept = 0;
            virtual int32_t __stdcall put_WriteOptions(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_WriteOptions(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_OutputStream(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Usb::IUsbConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UsbInterfaces(void**) noexcept = 0;
            virtual int32_t __stdcall get_ConfigurationDescriptor(void**) noexcept = 0;
            virtual int32_t __stdcall get_Descriptors(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Usb::IUsbConfigurationDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ConfigurationValue(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxPowerMilliamps(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SelfPowered(bool*) noexcept = 0;
            virtual int32_t __stdcall get_RemoteWakeup(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Usb::IUsbConfigurationDescriptorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryParse(void*, void**, bool*) noexcept = 0;
            virtual int32_t __stdcall Parse(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Usb::IUsbControlRequestType>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Direction(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Direction(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ControlTransferType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ControlTransferType(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Recipient(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Recipient(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_AsByte(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_AsByte(uint8_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Usb::IUsbDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Length(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_DescriptorType(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall ReadDescriptorBuffer(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Usb::IUsbDevice>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SendControlOutTransferAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SendControlOutTransferAsyncNoBuffer(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SendControlInTransferAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SendControlInTransferAsyncNoBuffer(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_DefaultInterface(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceDescriptor(void**) noexcept = 0;
            virtual int32_t __stdcall get_Configuration(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Usb::IUsbDeviceClass>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ClassCode(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_ClassCode(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_SubclassCode(void**) noexcept = 0;
            virtual int32_t __stdcall put_SubclassCode(void*) noexcept = 0;
            virtual int32_t __stdcall get_ProtocolCode(void**) noexcept = 0;
            virtual int32_t __stdcall put_ProtocolCode(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Usb::IUsbDeviceClasses>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::Devices::Usb::IUsbDeviceClassesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CdcControl(void**) noexcept = 0;
            virtual int32_t __stdcall get_Physical(void**) noexcept = 0;
            virtual int32_t __stdcall get_PersonalHealthcare(void**) noexcept = 0;
            virtual int32_t __stdcall get_ActiveSync(void**) noexcept = 0;
            virtual int32_t __stdcall get_PalmSync(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceFirmwareUpdate(void**) noexcept = 0;
            virtual int32_t __stdcall get_Irda(void**) noexcept = 0;
            virtual int32_t __stdcall get_Measurement(void**) noexcept = 0;
            virtual int32_t __stdcall get_VendorSpecific(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Usb::IUsbDeviceDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BcdUsb(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxPacketSize0(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_VendorId(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ProductId(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_BcdDeviceRevision(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NumberOfConfigurations(uint8_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Usb::IUsbDeviceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(uint32_t, uint32_t, winrt::guid, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorGuidOnly(winrt::guid, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorVidPidOnly(uint32_t, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceClassSelector(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Usb::IUsbEndpointDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EndpointNumber(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Direction(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_EndpointType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AsBulkInEndpointDescriptor(void**) noexcept = 0;
            virtual int32_t __stdcall get_AsInterruptInEndpointDescriptor(void**) noexcept = 0;
            virtual int32_t __stdcall get_AsBulkOutEndpointDescriptor(void**) noexcept = 0;
            virtual int32_t __stdcall get_AsInterruptOutEndpointDescriptor(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Usb::IUsbEndpointDescriptorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryParse(void*, void**, bool*) noexcept = 0;
            virtual int32_t __stdcall Parse(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Usb::IUsbInterface>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BulkInPipes(void**) noexcept = 0;
            virtual int32_t __stdcall get_InterruptInPipes(void**) noexcept = 0;
            virtual int32_t __stdcall get_BulkOutPipes(void**) noexcept = 0;
            virtual int32_t __stdcall get_InterruptOutPipes(void**) noexcept = 0;
            virtual int32_t __stdcall get_InterfaceSettings(void**) noexcept = 0;
            virtual int32_t __stdcall get_InterfaceNumber(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Descriptors(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Usb::IUsbInterfaceDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ClassCode(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_SubclassCode(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_ProtocolCode(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_AlternateSettingNumber(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_InterfaceNumber(uint8_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Usb::IUsbInterfaceDescriptorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryParse(void*, void**, bool*) noexcept = 0;
            virtual int32_t __stdcall Parse(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Usb::IUsbInterfaceSetting>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BulkInEndpoints(void**) noexcept = 0;
            virtual int32_t __stdcall get_InterruptInEndpoints(void**) noexcept = 0;
            virtual int32_t __stdcall get_BulkOutEndpoints(void**) noexcept = 0;
            virtual int32_t __stdcall get_InterruptOutEndpoints(void**) noexcept = 0;
            virtual int32_t __stdcall get_Selected(bool*) noexcept = 0;
            virtual int32_t __stdcall SelectSettingAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_InterfaceDescriptor(void**) noexcept = 0;
            virtual int32_t __stdcall get_Descriptors(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaxPacketSize(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_EndpointNumber(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Interval(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Pipe(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Usb::IUsbInterruptInEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InterruptData(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Usb::IUsbInterruptInPipe>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EndpointDescriptor(void**) noexcept = 0;
            virtual int32_t __stdcall ClearStallAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_DataReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DataReceived(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaxPacketSize(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_EndpointNumber(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Interval(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Pipe(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Usb::IUsbInterruptOutPipe>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EndpointDescriptor(void**) noexcept = 0;
            virtual int32_t __stdcall ClearStallAsync(void**) noexcept = 0;
            virtual int32_t __stdcall put_WriteOptions(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_WriteOptions(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_OutputStream(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Usb::IUsbSetupPacket>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RequestType(void**) noexcept = 0;
            virtual int32_t __stdcall put_RequestType(void*) noexcept = 0;
            virtual int32_t __stdcall get_Request(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_Request(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_Value(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Value(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Index(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Index(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Length(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Length(uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Usb::IUsbSetupPacketFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWithEightByteBuffer(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbBulkInEndpointDescriptor
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaxPacketSize() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint8_t) EndpointNumber() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbBulkInPipe) Pipe() const;
    };
    template <> struct consume<winrt::Windows::Devices::Usb::IUsbBulkInEndpointDescriptor>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbBulkInEndpointDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbBulkInPipe
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaxTransferSizeBytes() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbBulkInEndpointDescriptor) EndpointDescriptor() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) ClearStallAsync() const;
        WINRT_IMPL_AUTO(void) ReadOptions(winrt::Windows::Devices::Usb::UsbReadOptions const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbReadOptions) ReadOptions() const;
        WINRT_IMPL_AUTO(void) FlushBuffer() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Storage::Streams::IInputStream) InputStream() const;
    };
    template <> struct consume<winrt::Windows::Devices::Usb::IUsbBulkInPipe>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbBulkInPipe<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbBulkOutEndpointDescriptor
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaxPacketSize() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint8_t) EndpointNumber() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbBulkOutPipe) Pipe() const;
    };
    template <> struct consume<winrt::Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbBulkOutEndpointDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbBulkOutPipe
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbBulkOutEndpointDescriptor) EndpointDescriptor() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) ClearStallAsync() const;
        WINRT_IMPL_AUTO(void) WriteOptions(winrt::Windows::Devices::Usb::UsbWriteOptions const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbWriteOptions) WriteOptions() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Storage::Streams::IOutputStream) OutputStream() const;
    };
    template <> struct consume<winrt::Windows::Devices::Usb::IUsbBulkOutPipe>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbBulkOutPipe<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbConfiguration
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbInterface>) UsbInterfaces() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbConfigurationDescriptor) ConfigurationDescriptor() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbDescriptor>) Descriptors() const;
    };
    template <> struct consume<winrt::Windows::Devices::Usb::IUsbConfiguration>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbConfigurationDescriptor
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint8_t) ConfigurationValue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaxPowerMilliamps() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) SelfPowered() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) RemoteWakeup() const;
    };
    template <> struct consume<winrt::Windows::Devices::Usb::IUsbConfigurationDescriptor>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbConfigurationDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbConfigurationDescriptorStatics
    {
        WINRT_IMPL_AUTO(bool) TryParse(winrt::Windows::Devices::Usb::UsbDescriptor const& descriptor, winrt::Windows::Devices::Usb::UsbConfigurationDescriptor& parsed) const;
        WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbConfigurationDescriptor) Parse(winrt::Windows::Devices::Usb::UsbDescriptor const& descriptor) const;
    };
    template <> struct consume<winrt::Windows::Devices::Usb::IUsbConfigurationDescriptorStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbConfigurationDescriptorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbControlRequestType
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbTransferDirection) Direction() const;
        WINRT_IMPL_AUTO(void) Direction(winrt::Windows::Devices::Usb::UsbTransferDirection const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbControlTransferType) ControlTransferType() const;
        WINRT_IMPL_AUTO(void) ControlTransferType(winrt::Windows::Devices::Usb::UsbControlTransferType const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbControlRecipient) Recipient() const;
        WINRT_IMPL_AUTO(void) Recipient(winrt::Windows::Devices::Usb::UsbControlRecipient const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint8_t) AsByte() const;
        WINRT_IMPL_AUTO(void) AsByte(uint8_t value) const;
    };
    template <> struct consume<winrt::Windows::Devices::Usb::IUsbControlRequestType>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbControlRequestType<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbDescriptor
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint8_t) Length() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint8_t) DescriptorType() const;
        WINRT_IMPL_AUTO(void) ReadDescriptorBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer) const;
    };
    template <> struct consume<winrt::Windows::Devices::Usb::IUsbDescriptor>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbDevice
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<uint32_t>) SendControlOutTransferAsync(winrt::Windows::Devices::Usb::UsbSetupPacket const& setupPacket, winrt::Windows::Storage::Streams::IBuffer const& buffer) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<uint32_t>) SendControlOutTransferAsync(winrt::Windows::Devices::Usb::UsbSetupPacket const& setupPacket) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IBuffer>) SendControlInTransferAsync(winrt::Windows::Devices::Usb::UsbSetupPacket const& setupPacket, winrt::Windows::Storage::Streams::IBuffer const& buffer) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IBuffer>) SendControlInTransferAsync(winrt::Windows::Devices::Usb::UsbSetupPacket const& setupPacket) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbInterface) DefaultInterface() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbDeviceDescriptor) DeviceDescriptor() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbConfiguration) Configuration() const;
    };
    template <> struct consume<winrt::Windows::Devices::Usb::IUsbDevice>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbDevice<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbDeviceClass
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint8_t) ClassCode() const;
        WINRT_IMPL_AUTO(void) ClassCode(uint8_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<uint8_t>) SubclassCode() const;
        WINRT_IMPL_AUTO(void) SubclassCode(winrt::Windows::Foundation::IReference<uint8_t> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<uint8_t>) ProtocolCode() const;
        WINRT_IMPL_AUTO(void) ProtocolCode(winrt::Windows::Foundation::IReference<uint8_t> const& value) const;
    };
    template <> struct consume<winrt::Windows::Devices::Usb::IUsbDeviceClass>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbDeviceClass<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbDeviceClasses
    {
    };
    template <> struct consume<winrt::Windows::Devices::Usb::IUsbDeviceClasses>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbDeviceClasses<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbDeviceClassesStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbDeviceClass) CdcControl() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbDeviceClass) Physical() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbDeviceClass) PersonalHealthcare() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbDeviceClass) ActiveSync() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbDeviceClass) PalmSync() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbDeviceClass) DeviceFirmwareUpdate() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbDeviceClass) Irda() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbDeviceClass) Measurement() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbDeviceClass) VendorSpecific() const;
    };
    template <> struct consume<winrt::Windows::Devices::Usb::IUsbDeviceClassesStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbDeviceClassesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbDeviceDescriptor
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) BcdUsb() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint8_t) MaxPacketSize0() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) VendorId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ProductId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) BcdDeviceRevision() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint8_t) NumberOfConfigurations() const;
    };
    template <> struct consume<winrt::Windows::Devices::Usb::IUsbDeviceDescriptor>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbDeviceDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbDeviceStatics
    {
        WINRT_IMPL_AUTO(hstring) GetDeviceSelector(uint32_t vendorId, uint32_t productId, winrt::guid const& winUsbInterfaceClass) const;
        WINRT_IMPL_AUTO(hstring) GetDeviceSelector(winrt::guid const& winUsbInterfaceClass) const;
        WINRT_IMPL_AUTO(hstring) GetDeviceSelector(uint32_t vendorId, uint32_t productId) const;
        WINRT_IMPL_AUTO(hstring) GetDeviceClassSelector(winrt::Windows::Devices::Usb::UsbDeviceClass const& usbClass) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Usb::UsbDevice>) FromIdAsync(param::hstring const& deviceId) const;
    };
    template <> struct consume<winrt::Windows::Devices::Usb::IUsbDeviceStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbDeviceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbEndpointDescriptor
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint8_t) EndpointNumber() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbTransferDirection) Direction() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbEndpointType) EndpointType() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbBulkInEndpointDescriptor) AsBulkInEndpointDescriptor() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbInterruptInEndpointDescriptor) AsInterruptInEndpointDescriptor() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbBulkOutEndpointDescriptor) AsBulkOutEndpointDescriptor() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor) AsInterruptOutEndpointDescriptor() const;
    };
    template <> struct consume<winrt::Windows::Devices::Usb::IUsbEndpointDescriptor>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbEndpointDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbEndpointDescriptorStatics
    {
        WINRT_IMPL_AUTO(bool) TryParse(winrt::Windows::Devices::Usb::UsbDescriptor const& descriptor, winrt::Windows::Devices::Usb::UsbEndpointDescriptor& parsed) const;
        WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbEndpointDescriptor) Parse(winrt::Windows::Devices::Usb::UsbDescriptor const& descriptor) const;
    };
    template <> struct consume<winrt::Windows::Devices::Usb::IUsbEndpointDescriptorStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbEndpointDescriptorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbInterface
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbBulkInPipe>) BulkInPipes() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbInterruptInPipe>) InterruptInPipes() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbBulkOutPipe>) BulkOutPipes() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbInterruptOutPipe>) InterruptOutPipes() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbInterfaceSetting>) InterfaceSettings() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint8_t) InterfaceNumber() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbDescriptor>) Descriptors() const;
    };
    template <> struct consume<winrt::Windows::Devices::Usb::IUsbInterface>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbInterface<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbInterfaceDescriptor
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint8_t) ClassCode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint8_t) SubclassCode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint8_t) ProtocolCode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint8_t) AlternateSettingNumber() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint8_t) InterfaceNumber() const;
    };
    template <> struct consume<winrt::Windows::Devices::Usb::IUsbInterfaceDescriptor>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbInterfaceDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbInterfaceDescriptorStatics
    {
        WINRT_IMPL_AUTO(bool) TryParse(winrt::Windows::Devices::Usb::UsbDescriptor const& descriptor, winrt::Windows::Devices::Usb::UsbInterfaceDescriptor& parsed) const;
        WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbInterfaceDescriptor) Parse(winrt::Windows::Devices::Usb::UsbDescriptor const& descriptor) const;
    };
    template <> struct consume<winrt::Windows::Devices::Usb::IUsbInterfaceDescriptorStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbInterfaceDescriptorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbInterfaceSetting
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbBulkInEndpointDescriptor>) BulkInEndpoints() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbInterruptInEndpointDescriptor>) InterruptInEndpoints() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbBulkOutEndpointDescriptor>) BulkOutEndpoints() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor>) InterruptOutEndpoints() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Selected() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) SelectSettingAsync() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbInterfaceDescriptor) InterfaceDescriptor() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbDescriptor>) Descriptors() const;
    };
    template <> struct consume<winrt::Windows::Devices::Usb::IUsbInterfaceSetting>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbInterfaceSetting<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbInterruptInEndpointDescriptor
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaxPacketSize() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint8_t) EndpointNumber() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) Interval() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbInterruptInPipe) Pipe() const;
    };
    template <> struct consume<winrt::Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbInterruptInEndpointDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbInterruptInEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Storage::Streams::IBuffer) InterruptData() const;
    };
    template <> struct consume<winrt::Windows::Devices::Usb::IUsbInterruptInEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbInterruptInEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbInterruptInPipe
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbInterruptInEndpointDescriptor) EndpointDescriptor() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) ClearStallAsync() const;
        WINRT_IMPL_AUTO(winrt::event_token) DataReceived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Usb::UsbInterruptInPipe, winrt::Windows::Devices::Usb::UsbInterruptInEventArgs> const& handler) const;
        using DataReceived_revoker = impl::event_revoker<winrt::Windows::Devices::Usb::IUsbInterruptInPipe, &impl::abi_t<winrt::Windows::Devices::Usb::IUsbInterruptInPipe>::remove_DataReceived>;
        [[nodiscard]] DataReceived_revoker DataReceived(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Usb::UsbInterruptInPipe, winrt::Windows::Devices::Usb::UsbInterruptInEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) DataReceived(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::Devices::Usb::IUsbInterruptInPipe>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbInterruptInPipe<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbInterruptOutEndpointDescriptor
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaxPacketSize() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint8_t) EndpointNumber() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) Interval() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbInterruptOutPipe) Pipe() const;
    };
    template <> struct consume<winrt::Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbInterruptOutEndpointDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbInterruptOutPipe
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor) EndpointDescriptor() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) ClearStallAsync() const;
        WINRT_IMPL_AUTO(void) WriteOptions(winrt::Windows::Devices::Usb::UsbWriteOptions const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbWriteOptions) WriteOptions() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Storage::Streams::IOutputStream) OutputStream() const;
    };
    template <> struct consume<winrt::Windows::Devices::Usb::IUsbInterruptOutPipe>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbInterruptOutPipe<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbSetupPacket
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbControlRequestType) RequestType() const;
        WINRT_IMPL_AUTO(void) RequestType(winrt::Windows::Devices::Usb::UsbControlRequestType const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint8_t) Request() const;
        WINRT_IMPL_AUTO(void) Request(uint8_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Value() const;
        WINRT_IMPL_AUTO(void) Value(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Index() const;
        WINRT_IMPL_AUTO(void) Index(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Length() const;
        WINRT_IMPL_AUTO(void) Length(uint32_t value) const;
    };
    template <> struct consume<winrt::Windows::Devices::Usb::IUsbSetupPacket>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbSetupPacket<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Usb_IUsbSetupPacketFactory
    {
        WINRT_IMPL_AUTO(winrt::Windows::Devices::Usb::UsbSetupPacket) CreateWithEightByteBuffer(winrt::Windows::Storage::Streams::IBuffer const& eightByteBuffer) const;
    };
    template <> struct consume<winrt::Windows::Devices::Usb::IUsbSetupPacketFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Usb_IUsbSetupPacketFactory<D>;
    };
}
#endif
