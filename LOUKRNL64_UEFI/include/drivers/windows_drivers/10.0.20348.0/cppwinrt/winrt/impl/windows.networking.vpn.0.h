// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Networking_Vpn_0_H
#define WINRT_Windows_Networking_Vpn_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    template <typename T> struct __declspec(empty_bases) IVectorView;
    template <typename T> struct __declspec(empty_bases) IVector;
}
WINRT_EXPORT namespace winrt::Windows::Networking
{
    struct HostName;
}
WINRT_EXPORT namespace winrt::Windows::Networking::Sockets
{
    enum class ControlChannelTriggerStatus : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Security::Credentials
{
    struct PasswordCredential;
}
WINRT_EXPORT namespace winrt::Windows::Security::Cryptography::Certificates
{
    struct Certificate;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct Buffer;
}
WINRT_EXPORT namespace winrt::Windows::Networking::Vpn
{
    enum class VpnAppIdType : int32_t
    {
        PackageFamilyName = 0,
        FullyQualifiedBinaryName = 1,
        FilePath = 2,
    };
    enum class VpnAuthenticationMethod : int32_t
    {
        Mschapv2 = 0,
        Eap = 1,
        Certificate = 2,
        PresharedKey = 3,
    };
    enum class VpnChannelActivityEventType : int32_t
    {
        Idle = 0,
        Active = 1,
    };
    enum class VpnChannelRequestCredentialsOptions : uint32_t
    {
        None = 0,
        Retrying = 0x1,
        UseForSingleSignIn = 0x2,
    };
    enum class VpnCredentialType : int32_t
    {
        UsernamePassword = 0,
        UsernameOtpPin = 1,
        UsernamePasswordAndPin = 2,
        UsernamePasswordChange = 3,
        SmartCard = 4,
        ProtectedCertificate = 5,
        UnProtectedCertificate = 6,
    };
    enum class VpnDataPathType : int32_t
    {
        Send = 0,
        Receive = 1,
    };
    enum class VpnDomainNameType : int32_t
    {
        Suffix = 0,
        FullyQualified = 1,
        Reserved = 65535,
    };
    enum class VpnIPProtocol : int32_t
    {
        None = 0,
        Tcp = 6,
        Udp = 17,
        Icmp = 1,
        Ipv6Icmp = 58,
        Igmp = 2,
        Pgm = 113,
    };
    enum class VpnManagementConnectionStatus : int32_t
    {
        Disconnected = 0,
        Disconnecting = 1,
        Connected = 2,
        Connecting = 3,
    };
    enum class VpnManagementErrorStatus : int32_t
    {
        Ok = 0,
        Other = 1,
        InvalidXmlSyntax = 2,
        ProfileNameTooLong = 3,
        ProfileInvalidAppId = 4,
        AccessDenied = 5,
        CannotFindProfile = 6,
        AlreadyDisconnecting = 7,
        AlreadyConnected = 8,
        GeneralAuthenticationFailure = 9,
        EapFailure = 10,
        SmartCardFailure = 11,
        CertificateFailure = 12,
        ServerConfiguration = 13,
        NoConnection = 14,
        ServerConnection = 15,
        UserNamePassword = 16,
        DnsNotResolvable = 17,
        InvalidIP = 18,
    };
    enum class VpnNativeProtocolType : int32_t
    {
        Pptp = 0,
        L2tp = 1,
        IpsecIkev2 = 2,
    };
    enum class VpnPacketBufferStatus : int32_t
    {
        Ok = 0,
        InvalidBufferSize = 1,
    };
    enum class VpnRoutingPolicyType : int32_t
    {
        SplitRouting = 0,
        ForceAllTrafficOverVpn = 1,
    };
    struct IVpnAppId;
    struct IVpnAppIdFactory;
    struct IVpnChannel;
    struct IVpnChannel2;
    struct IVpnChannel4;
    struct IVpnChannel5;
    struct IVpnChannelActivityEventArgs;
    struct IVpnChannelActivityStateChangedArgs;
    struct IVpnChannelConfiguration;
    struct IVpnChannelConfiguration2;
    struct IVpnChannelStatics;
    struct IVpnCredential;
    struct IVpnCustomCheckBox;
    struct IVpnCustomComboBox;
    struct IVpnCustomEditBox;
    struct IVpnCustomErrorBox;
    struct IVpnCustomPrompt;
    struct IVpnCustomPromptBooleanInput;
    struct IVpnCustomPromptElement;
    struct IVpnCustomPromptOptionSelector;
    struct IVpnCustomPromptText;
    struct IVpnCustomPromptTextInput;
    struct IVpnCustomTextBox;
    struct IVpnDomainNameAssignment;
    struct IVpnDomainNameInfo;
    struct IVpnDomainNameInfo2;
    struct IVpnDomainNameInfoFactory;
    struct IVpnInterfaceId;
    struct IVpnInterfaceIdFactory;
    struct IVpnManagementAgent;
    struct IVpnNamespaceAssignment;
    struct IVpnNamespaceInfo;
    struct IVpnNamespaceInfoFactory;
    struct IVpnNativeProfile;
    struct IVpnNativeProfile2;
    struct IVpnPacketBuffer;
    struct IVpnPacketBuffer2;
    struct IVpnPacketBuffer3;
    struct IVpnPacketBufferFactory;
    struct IVpnPacketBufferList;
    struct IVpnPacketBufferList2;
    struct IVpnPickedCredential;
    struct IVpnPlugIn;
    struct IVpnPlugInProfile;
    struct IVpnPlugInProfile2;
    struct IVpnProfile;
    struct IVpnRoute;
    struct IVpnRouteAssignment;
    struct IVpnRouteFactory;
    struct IVpnSystemHealth;
    struct IVpnTrafficFilter;
    struct IVpnTrafficFilterAssignment;
    struct IVpnTrafficFilterFactory;
    struct VpnAppId;
    struct VpnChannel;
    struct VpnChannelActivityEventArgs;
    struct VpnChannelActivityStateChangedArgs;
    struct VpnChannelConfiguration;
    struct VpnCredential;
    struct VpnCustomCheckBox;
    struct VpnCustomComboBox;
    struct VpnCustomEditBox;
    struct VpnCustomErrorBox;
    struct VpnCustomPromptBooleanInput;
    struct VpnCustomPromptOptionSelector;
    struct VpnCustomPromptText;
    struct VpnCustomPromptTextInput;
    struct VpnCustomTextBox;
    struct VpnDomainNameAssignment;
    struct VpnDomainNameInfo;
    struct VpnInterfaceId;
    struct VpnManagementAgent;
    struct VpnNamespaceAssignment;
    struct VpnNamespaceInfo;
    struct VpnNativeProfile;
    struct VpnPacketBuffer;
    struct VpnPacketBufferList;
    struct VpnPickedCredential;
    struct VpnPlugInProfile;
    struct VpnRoute;
    struct VpnRouteAssignment;
    struct VpnSystemHealth;
    struct VpnTrafficFilter;
    struct VpnTrafficFilterAssignment;
}
namespace winrt::impl
{
    template <> struct category<Windows::Networking::Vpn::IVpnAppId>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnAppIdFactory>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnChannel>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnChannel2>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnChannel4>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnChannel5>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnChannelActivityEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnChannelActivityStateChangedArgs>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnChannelConfiguration>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnChannelConfiguration2>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnChannelStatics>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnCredential>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnCustomCheckBox>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnCustomComboBox>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnCustomEditBox>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnCustomErrorBox>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnCustomPrompt>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnCustomPromptBooleanInput>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnCustomPromptElement>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnCustomPromptOptionSelector>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnCustomPromptText>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnCustomPromptTextInput>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnCustomTextBox>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnDomainNameAssignment>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnDomainNameInfo>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnDomainNameInfo2>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnDomainNameInfoFactory>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnInterfaceId>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnInterfaceIdFactory>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnManagementAgent>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnNamespaceAssignment>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnNamespaceInfo>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnNamespaceInfoFactory>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnNativeProfile>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnNativeProfile2>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnPacketBuffer>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnPacketBuffer2>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnPacketBuffer3>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnPacketBufferFactory>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnPacketBufferList>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnPacketBufferList2>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnPickedCredential>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnPlugIn>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnPlugInProfile>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnPlugInProfile2>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnProfile>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnRoute>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnRouteAssignment>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnRouteFactory>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnSystemHealth>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnTrafficFilter>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnTrafficFilterAssignment>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::IVpnTrafficFilterFactory>{ using type = interface_category; };
    template <> struct category<Windows::Networking::Vpn::VpnAppId>{ using type = class_category; };
    template <> struct category<Windows::Networking::Vpn::VpnChannel>{ using type = class_category; };
    template <> struct category<Windows::Networking::Vpn::VpnChannelActivityEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs>{ using type = class_category; };
    template <> struct category<Windows::Networking::Vpn::VpnChannelConfiguration>{ using type = class_category; };
    template <> struct category<Windows::Networking::Vpn::VpnCredential>{ using type = class_category; };
    template <> struct category<Windows::Networking::Vpn::VpnCustomCheckBox>{ using type = class_category; };
    template <> struct category<Windows::Networking::Vpn::VpnCustomComboBox>{ using type = class_category; };
    template <> struct category<Windows::Networking::Vpn::VpnCustomEditBox>{ using type = class_category; };
    template <> struct category<Windows::Networking::Vpn::VpnCustomErrorBox>{ using type = class_category; };
    template <> struct category<Windows::Networking::Vpn::VpnCustomPromptBooleanInput>{ using type = class_category; };
    template <> struct category<Windows::Networking::Vpn::VpnCustomPromptOptionSelector>{ using type = class_category; };
    template <> struct category<Windows::Networking::Vpn::VpnCustomPromptText>{ using type = class_category; };
    template <> struct category<Windows::Networking::Vpn::VpnCustomPromptTextInput>{ using type = class_category; };
    template <> struct category<Windows::Networking::Vpn::VpnCustomTextBox>{ using type = class_category; };
    template <> struct category<Windows::Networking::Vpn::VpnDomainNameAssignment>{ using type = class_category; };
    template <> struct category<Windows::Networking::Vpn::VpnDomainNameInfo>{ using type = class_category; };
    template <> struct category<Windows::Networking::Vpn::VpnInterfaceId>{ using type = class_category; };
    template <> struct category<Windows::Networking::Vpn::VpnManagementAgent>{ using type = class_category; };
    template <> struct category<Windows::Networking::Vpn::VpnNamespaceAssignment>{ using type = class_category; };
    template <> struct category<Windows::Networking::Vpn::VpnNamespaceInfo>{ using type = class_category; };
    template <> struct category<Windows::Networking::Vpn::VpnNativeProfile>{ using type = class_category; };
    template <> struct category<Windows::Networking::Vpn::VpnPacketBuffer>{ using type = class_category; };
    template <> struct category<Windows::Networking::Vpn::VpnPacketBufferList>{ using type = class_category; };
    template <> struct category<Windows::Networking::Vpn::VpnPickedCredential>{ using type = class_category; };
    template <> struct category<Windows::Networking::Vpn::VpnPlugInProfile>{ using type = class_category; };
    template <> struct category<Windows::Networking::Vpn::VpnRoute>{ using type = class_category; };
    template <> struct category<Windows::Networking::Vpn::VpnRouteAssignment>{ using type = class_category; };
    template <> struct category<Windows::Networking::Vpn::VpnSystemHealth>{ using type = class_category; };
    template <> struct category<Windows::Networking::Vpn::VpnTrafficFilter>{ using type = class_category; };
    template <> struct category<Windows::Networking::Vpn::VpnTrafficFilterAssignment>{ using type = class_category; };
    template <> struct category<Windows::Networking::Vpn::VpnAppIdType>{ using type = enum_category; };
    template <> struct category<Windows::Networking::Vpn::VpnAuthenticationMethod>{ using type = enum_category; };
    template <> struct category<Windows::Networking::Vpn::VpnChannelActivityEventType>{ using type = enum_category; };
    template <> struct category<Windows::Networking::Vpn::VpnChannelRequestCredentialsOptions>{ using type = enum_category; };
    template <> struct category<Windows::Networking::Vpn::VpnCredentialType>{ using type = enum_category; };
    template <> struct category<Windows::Networking::Vpn::VpnDataPathType>{ using type = enum_category; };
    template <> struct category<Windows::Networking::Vpn::VpnDomainNameType>{ using type = enum_category; };
    template <> struct category<Windows::Networking::Vpn::VpnIPProtocol>{ using type = enum_category; };
    template <> struct category<Windows::Networking::Vpn::VpnManagementConnectionStatus>{ using type = enum_category; };
    template <> struct category<Windows::Networking::Vpn::VpnManagementErrorStatus>{ using type = enum_category; };
    template <> struct category<Windows::Networking::Vpn::VpnNativeProtocolType>{ using type = enum_category; };
    template <> struct category<Windows::Networking::Vpn::VpnPacketBufferStatus>{ using type = enum_category; };
    template <> struct category<Windows::Networking::Vpn::VpnRoutingPolicyType>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnAppId> = L"Windows.Networking.Vpn.VpnAppId";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnChannel> = L"Windows.Networking.Vpn.VpnChannel";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnChannelActivityEventArgs> = L"Windows.Networking.Vpn.VpnChannelActivityEventArgs";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs> = L"Windows.Networking.Vpn.VpnChannelActivityStateChangedArgs";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnChannelConfiguration> = L"Windows.Networking.Vpn.VpnChannelConfiguration";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnCredential> = L"Windows.Networking.Vpn.VpnCredential";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnCustomCheckBox> = L"Windows.Networking.Vpn.VpnCustomCheckBox";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnCustomComboBox> = L"Windows.Networking.Vpn.VpnCustomComboBox";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnCustomEditBox> = L"Windows.Networking.Vpn.VpnCustomEditBox";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnCustomErrorBox> = L"Windows.Networking.Vpn.VpnCustomErrorBox";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnCustomPromptBooleanInput> = L"Windows.Networking.Vpn.VpnCustomPromptBooleanInput";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnCustomPromptOptionSelector> = L"Windows.Networking.Vpn.VpnCustomPromptOptionSelector";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnCustomPromptText> = L"Windows.Networking.Vpn.VpnCustomPromptText";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnCustomPromptTextInput> = L"Windows.Networking.Vpn.VpnCustomPromptTextInput";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnCustomTextBox> = L"Windows.Networking.Vpn.VpnCustomTextBox";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnDomainNameAssignment> = L"Windows.Networking.Vpn.VpnDomainNameAssignment";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnDomainNameInfo> = L"Windows.Networking.Vpn.VpnDomainNameInfo";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnInterfaceId> = L"Windows.Networking.Vpn.VpnInterfaceId";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnManagementAgent> = L"Windows.Networking.Vpn.VpnManagementAgent";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnNamespaceAssignment> = L"Windows.Networking.Vpn.VpnNamespaceAssignment";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnNamespaceInfo> = L"Windows.Networking.Vpn.VpnNamespaceInfo";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnNativeProfile> = L"Windows.Networking.Vpn.VpnNativeProfile";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnPacketBuffer> = L"Windows.Networking.Vpn.VpnPacketBuffer";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnPacketBufferList> = L"Windows.Networking.Vpn.VpnPacketBufferList";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnPickedCredential> = L"Windows.Networking.Vpn.VpnPickedCredential";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnPlugInProfile> = L"Windows.Networking.Vpn.VpnPlugInProfile";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnRoute> = L"Windows.Networking.Vpn.VpnRoute";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnRouteAssignment> = L"Windows.Networking.Vpn.VpnRouteAssignment";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnSystemHealth> = L"Windows.Networking.Vpn.VpnSystemHealth";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnTrafficFilter> = L"Windows.Networking.Vpn.VpnTrafficFilter";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnTrafficFilterAssignment> = L"Windows.Networking.Vpn.VpnTrafficFilterAssignment";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnAppIdType> = L"Windows.Networking.Vpn.VpnAppIdType";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnAuthenticationMethod> = L"Windows.Networking.Vpn.VpnAuthenticationMethod";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnChannelActivityEventType> = L"Windows.Networking.Vpn.VpnChannelActivityEventType";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnChannelRequestCredentialsOptions> = L"Windows.Networking.Vpn.VpnChannelRequestCredentialsOptions";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnCredentialType> = L"Windows.Networking.Vpn.VpnCredentialType";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnDataPathType> = L"Windows.Networking.Vpn.VpnDataPathType";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnDomainNameType> = L"Windows.Networking.Vpn.VpnDomainNameType";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnIPProtocol> = L"Windows.Networking.Vpn.VpnIPProtocol";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnManagementConnectionStatus> = L"Windows.Networking.Vpn.VpnManagementConnectionStatus";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnManagementErrorStatus> = L"Windows.Networking.Vpn.VpnManagementErrorStatus";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnNativeProtocolType> = L"Windows.Networking.Vpn.VpnNativeProtocolType";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnPacketBufferStatus> = L"Windows.Networking.Vpn.VpnPacketBufferStatus";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::VpnRoutingPolicyType> = L"Windows.Networking.Vpn.VpnRoutingPolicyType";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnAppId> = L"Windows.Networking.Vpn.IVpnAppId";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnAppIdFactory> = L"Windows.Networking.Vpn.IVpnAppIdFactory";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnChannel> = L"Windows.Networking.Vpn.IVpnChannel";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnChannel2> = L"Windows.Networking.Vpn.IVpnChannel2";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnChannel4> = L"Windows.Networking.Vpn.IVpnChannel4";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnChannel5> = L"Windows.Networking.Vpn.IVpnChannel5";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnChannelActivityEventArgs> = L"Windows.Networking.Vpn.IVpnChannelActivityEventArgs";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnChannelActivityStateChangedArgs> = L"Windows.Networking.Vpn.IVpnChannelActivityStateChangedArgs";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnChannelConfiguration> = L"Windows.Networking.Vpn.IVpnChannelConfiguration";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnChannelConfiguration2> = L"Windows.Networking.Vpn.IVpnChannelConfiguration2";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnChannelStatics> = L"Windows.Networking.Vpn.IVpnChannelStatics";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnCredential> = L"Windows.Networking.Vpn.IVpnCredential";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnCustomCheckBox> = L"Windows.Networking.Vpn.IVpnCustomCheckBox";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnCustomComboBox> = L"Windows.Networking.Vpn.IVpnCustomComboBox";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnCustomEditBox> = L"Windows.Networking.Vpn.IVpnCustomEditBox";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnCustomErrorBox> = L"Windows.Networking.Vpn.IVpnCustomErrorBox";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnCustomPrompt> = L"Windows.Networking.Vpn.IVpnCustomPrompt";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnCustomPromptBooleanInput> = L"Windows.Networking.Vpn.IVpnCustomPromptBooleanInput";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnCustomPromptElement> = L"Windows.Networking.Vpn.IVpnCustomPromptElement";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnCustomPromptOptionSelector> = L"Windows.Networking.Vpn.IVpnCustomPromptOptionSelector";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnCustomPromptText> = L"Windows.Networking.Vpn.IVpnCustomPromptText";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnCustomPromptTextInput> = L"Windows.Networking.Vpn.IVpnCustomPromptTextInput";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnCustomTextBox> = L"Windows.Networking.Vpn.IVpnCustomTextBox";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnDomainNameAssignment> = L"Windows.Networking.Vpn.IVpnDomainNameAssignment";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnDomainNameInfo> = L"Windows.Networking.Vpn.IVpnDomainNameInfo";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnDomainNameInfo2> = L"Windows.Networking.Vpn.IVpnDomainNameInfo2";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnDomainNameInfoFactory> = L"Windows.Networking.Vpn.IVpnDomainNameInfoFactory";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnInterfaceId> = L"Windows.Networking.Vpn.IVpnInterfaceId";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnInterfaceIdFactory> = L"Windows.Networking.Vpn.IVpnInterfaceIdFactory";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnManagementAgent> = L"Windows.Networking.Vpn.IVpnManagementAgent";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnNamespaceAssignment> = L"Windows.Networking.Vpn.IVpnNamespaceAssignment";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnNamespaceInfo> = L"Windows.Networking.Vpn.IVpnNamespaceInfo";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnNamespaceInfoFactory> = L"Windows.Networking.Vpn.IVpnNamespaceInfoFactory";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnNativeProfile> = L"Windows.Networking.Vpn.IVpnNativeProfile";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnNativeProfile2> = L"Windows.Networking.Vpn.IVpnNativeProfile2";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnPacketBuffer> = L"Windows.Networking.Vpn.IVpnPacketBuffer";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnPacketBuffer2> = L"Windows.Networking.Vpn.IVpnPacketBuffer2";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnPacketBuffer3> = L"Windows.Networking.Vpn.IVpnPacketBuffer3";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnPacketBufferFactory> = L"Windows.Networking.Vpn.IVpnPacketBufferFactory";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnPacketBufferList> = L"Windows.Networking.Vpn.IVpnPacketBufferList";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnPacketBufferList2> = L"Windows.Networking.Vpn.IVpnPacketBufferList2";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnPickedCredential> = L"Windows.Networking.Vpn.IVpnPickedCredential";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnPlugIn> = L"Windows.Networking.Vpn.IVpnPlugIn";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnPlugInProfile> = L"Windows.Networking.Vpn.IVpnPlugInProfile";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnPlugInProfile2> = L"Windows.Networking.Vpn.IVpnPlugInProfile2";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnProfile> = L"Windows.Networking.Vpn.IVpnProfile";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnRoute> = L"Windows.Networking.Vpn.IVpnRoute";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnRouteAssignment> = L"Windows.Networking.Vpn.IVpnRouteAssignment";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnRouteFactory> = L"Windows.Networking.Vpn.IVpnRouteFactory";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnSystemHealth> = L"Windows.Networking.Vpn.IVpnSystemHealth";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnTrafficFilter> = L"Windows.Networking.Vpn.IVpnTrafficFilter";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnTrafficFilterAssignment> = L"Windows.Networking.Vpn.IVpnTrafficFilterAssignment";
    template <> inline constexpr auto& name_v<Windows::Networking::Vpn::IVpnTrafficFilterFactory> = L"Windows.Networking.Vpn.IVpnTrafficFilterFactory";
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnAppId>{ 0x7B06A635,0x5C58,0x41D9,{ 0x94,0xA7,0xBF,0xBC,0xF1,0xD8,0xCA,0x54 } }; // 7B06A635-5C58-41D9-94A7-BFBCF1D8CA54
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnAppIdFactory>{ 0x46ADFD2A,0x0AAB,0x4FDB,{ 0x82,0x1D,0xD3,0xDD,0xC9,0x19,0x78,0x8B } }; // 46ADFD2A-0AAB-4FDB-821D-D3DDC919788B
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnChannel>{ 0x4AC78D07,0xD1A8,0x4303,{ 0xA0,0x91,0xC8,0xD2,0xE0,0x91,0x5B,0xC3 } }; // 4AC78D07-D1A8-4303-A091-C8D2E0915BC3
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnChannel2>{ 0x2255D165,0x993B,0x4629,{ 0xAD,0x60,0xF1,0xC3,0xF3,0x53,0x7F,0x50 } }; // 2255D165-993B-4629-AD60-F1C3F3537F50
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnChannel4>{ 0xD7266EDE,0x2937,0x419D,{ 0x95,0x70,0x48,0x6A,0xEB,0xB8,0x18,0x03 } }; // D7266EDE-2937-419D-9570-486AEBB81803
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnChannel5>{ 0xDE7A0992,0x8384,0x4FBC,{ 0x88,0x2C,0x1F,0xD2,0x31,0x24,0xCD,0x3B } }; // DE7A0992-8384-4FBC-882C-1FD23124CD3B
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnChannelActivityEventArgs>{ 0xA36C88F2,0xAFDC,0x4775,{ 0x85,0x5D,0xD4,0xAC,0x0A,0x35,0xFC,0x55 } }; // A36C88F2-AFDC-4775-855D-D4AC0A35FC55
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnChannelActivityStateChangedArgs>{ 0x3D750565,0xFDC0,0x4BBE,{ 0xA2,0x3B,0x45,0xFF,0xFC,0x6D,0x97,0xA1 } }; // 3D750565-FDC0-4BBE-A23B-45FFFC6D97A1
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnChannelConfiguration>{ 0x0E2DDCA2,0x2012,0x4FE4,{ 0xB1,0x79,0x8C,0x65,0x2C,0x6D,0x10,0x7E } }; // 0E2DDCA2-2012-4FE4-B179-8C652C6D107E
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnChannelConfiguration2>{ 0xF30B574C,0x7824,0x471C,{ 0xA1,0x18,0x63,0xDB,0xC9,0x3A,0xE4,0xC7 } }; // F30B574C-7824-471C-A118-63DBC93AE4C7
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnChannelStatics>{ 0x88EB062D,0xE818,0x4FFD,{ 0x98,0xA6,0x36,0x3E,0x37,0x36,0xC9,0x5D } }; // 88EB062D-E818-4FFD-98A6-363E3736C95D
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnCredential>{ 0xB7E78AF3,0xA46D,0x404B,{ 0x87,0x29,0x18,0x32,0x52,0x28,0x53,0xAC } }; // B7E78AF3-A46D-404B-8729-1832522853AC
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnCustomCheckBox>{ 0x43878753,0x03C5,0x4E61,{ 0x93,0xD7,0xA9,0x57,0x71,0x4C,0x42,0x82 } }; // 43878753-03C5-4E61-93D7-A957714C4282
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnCustomComboBox>{ 0x9A24158E,0xDBA1,0x4C6F,{ 0x82,0x70,0xDC,0xF3,0xC9,0x76,0x1C,0x4C } }; // 9A24158E-DBA1-4C6F-8270-DCF3C9761C4C
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnCustomEditBox>{ 0x3002D9A0,0xCFBF,0x4C0B,{ 0x8F,0x3C,0x66,0xF5,0x03,0xC2,0x0B,0x39 } }; // 3002D9A0-CFBF-4C0B-8F3C-66F503C20B39
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnCustomErrorBox>{ 0x9EC4EFB2,0xC942,0x42AF,{ 0xB2,0x23,0x58,0x8B,0x48,0x32,0x87,0x21 } }; // 9EC4EFB2-C942-42AF-B223-588B48328721
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnCustomPrompt>{ 0x9B2EBE7B,0x87D5,0x433C,{ 0xB4,0xF6,0xEE,0xE6,0xAA,0x68,0xA2,0x44 } }; // 9B2EBE7B-87D5-433C-B4F6-EEE6AA68A244
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnCustomPromptBooleanInput>{ 0xC4C9A69E,0xFF47,0x4527,{ 0x9F,0x27,0xA4,0x92,0x92,0x01,0x99,0x79 } }; // C4C9A69E-FF47-4527-9F27-A49292019979
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnCustomPromptElement>{ 0x73BD5638,0x6F04,0x404D,{ 0x93,0xDD,0x50,0xA4,0x49,0x24,0xA3,0x8B } }; // 73BD5638-6F04-404D-93DD-50A44924A38B
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnCustomPromptOptionSelector>{ 0x3B8F34D9,0x8EC1,0x4E95,{ 0x9A,0x4E,0x7B,0xA6,0x4D,0x38,0xF3,0x30 } }; // 3B8F34D9-8EC1-4E95-9A4E-7BA64D38F330
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnCustomPromptText>{ 0x3BC8BDEE,0x3A42,0x49A3,{ 0xAB,0xDD,0x07,0xB2,0xED,0xEA,0x75,0x2D } }; // 3BC8BDEE-3A42-49A3-ABDD-07B2EDEA752D
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnCustomPromptTextInput>{ 0xC9DA9C75,0x913C,0x47D5,{ 0x88,0xBA,0x48,0xFC,0x48,0x93,0x02,0x35 } }; // C9DA9C75-913C-47D5-88BA-48FC48930235
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnCustomTextBox>{ 0xDAA4C3CA,0x8F23,0x4D36,{ 0x91,0xF1,0x76,0xD9,0x37,0x82,0x79,0x42 } }; // DAA4C3CA-8F23-4D36-91F1-76D937827942
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnDomainNameAssignment>{ 0x4135B141,0xCCDB,0x49B5,{ 0x94,0x01,0x03,0x9A,0x8A,0xE7,0x67,0xE9 } }; // 4135B141-CCDB-49B5-9401-039A8AE767E9
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnDomainNameInfo>{ 0xAD2EB82F,0xEA8E,0x4F7A,{ 0x84,0x3E,0x1A,0x87,0xE3,0x2E,0x1B,0x9A } }; // AD2EB82F-EA8E-4F7A-843E-1A87E32E1B9A
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnDomainNameInfo2>{ 0xAB871151,0x6C53,0x4828,{ 0x98,0x83,0xD8,0x86,0xDE,0x10,0x44,0x07 } }; // AB871151-6C53-4828-9883-D886DE104407
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnDomainNameInfoFactory>{ 0x2507BB75,0x028F,0x4688,{ 0x8D,0x3A,0xC4,0x53,0x1D,0xF3,0x7D,0xA8 } }; // 2507BB75-028F-4688-8D3A-C4531DF37DA8
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnInterfaceId>{ 0x9E2DDCA2,0x1712,0x4CE4,{ 0xB1,0x79,0x8C,0x65,0x2C,0x6D,0x10,0x11 } }; // 9E2DDCA2-1712-4CE4-B179-8C652C6D1011
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnInterfaceIdFactory>{ 0x9E2DDCA2,0x1712,0x4CE4,{ 0xB1,0x79,0x8C,0x65,0x2C,0x6D,0x10,0x00 } }; // 9E2DDCA2-1712-4CE4-B179-8C652C6D1000
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnManagementAgent>{ 0x193696CD,0xA5C4,0x4ABE,{ 0x85,0x2B,0x78,0x5B,0xE4,0xCB,0x3E,0x34 } }; // 193696CD-A5C4-4ABE-852B-785BE4CB3E34
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnNamespaceAssignment>{ 0xD7F7DB18,0x307D,0x4C0E,{ 0xBD,0x62,0x8F,0xA2,0x70,0xBB,0xAD,0xD6 } }; // D7F7DB18-307D-4C0E-BD62-8FA270BBADD6
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnNamespaceInfo>{ 0x30EDFB43,0x444F,0x44C5,{ 0x81,0x67,0xA3,0x5A,0x91,0xF1,0xAF,0x94 } }; // 30EDFB43-444F-44C5-8167-A35A91F1AF94
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnNamespaceInfoFactory>{ 0xCB3E951A,0xB0CE,0x442B,{ 0xAC,0xBB,0x5F,0x99,0xB2,0x02,0xC3,0x1C } }; // CB3E951A-B0CE-442B-ACBB-5F99B202C31C
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnNativeProfile>{ 0xA4AEE29E,0x6417,0x4333,{ 0x98,0x42,0xF0,0xA6,0x6D,0xB6,0x98,0x02 } }; // A4AEE29E-6417-4333-9842-F0A66DB69802
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnNativeProfile2>{ 0x0FEC2467,0xCDB5,0x4AC7,{ 0xB5,0xA3,0x0A,0xFB,0x5E,0xC4,0x76,0x82 } }; // 0FEC2467-CDB5-4AC7-B5A3-0AFB5EC47682
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnPacketBuffer>{ 0xC2F891FC,0x4D5C,0x4A63,{ 0xB7,0x0D,0x4E,0x30,0x7E,0xAC,0xCE,0x55 } }; // C2F891FC-4D5C-4A63-B70D-4E307EACCE55
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnPacketBuffer2>{ 0x665E91F0,0x8805,0x4BF5,{ 0xA6,0x19,0x2E,0x84,0x88,0x2E,0x6B,0x4F } }; // 665E91F0-8805-4BF5-A619-2E84882E6B4F
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnPacketBuffer3>{ 0xE256072F,0x107B,0x4C40,{ 0xB1,0x27,0x5B,0xC5,0x3E,0x0A,0xD9,0x60 } }; // E256072F-107B-4C40-B127-5BC53E0AD960
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnPacketBufferFactory>{ 0x9E2DDCA2,0x1712,0x4CE4,{ 0xB1,0x79,0x8C,0x65,0x2C,0x6D,0x99,0x99 } }; // 9E2DDCA2-1712-4CE4-B179-8C652C6D9999
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnPacketBufferList>{ 0xC2F891FC,0x4D5C,0x4A63,{ 0xB7,0x0D,0x4E,0x30,0x7E,0xAC,0xCE,0x77 } }; // C2F891FC-4D5C-4A63-B70D-4E307EACCE77
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnPacketBufferList2>{ 0x3E7ACFE5,0xEA1E,0x482A,{ 0x8D,0x98,0xC0,0x65,0xF5,0x7D,0x89,0xEA } }; // 3E7ACFE5-EA1E-482A-8D98-C065F57D89EA
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnPickedCredential>{ 0x9A793AC7,0x8854,0x4E52,{ 0xAD,0x97,0x24,0xDD,0x9A,0x84,0x2B,0xCE } }; // 9A793AC7-8854-4E52-AD97-24DD9A842BCE
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnPlugIn>{ 0xCEB78D07,0xD0A8,0x4703,{ 0xA0,0x91,0xC8,0xC2,0xC0,0x91,0x5B,0xC4 } }; // CEB78D07-D0A8-4703-A091-C8C2C0915BC4
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnPlugInProfile>{ 0x0EDF0DA4,0x4F00,0x4589,{ 0x8D,0x7B,0x4B,0xF9,0x88,0xF6,0x54,0x2C } }; // 0EDF0DA4-4F00-4589-8D7B-4BF988F6542C
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnPlugInProfile2>{ 0x611C4892,0xCF94,0x4AD6,{ 0xBA,0x99,0x00,0xF4,0xFF,0x34,0x56,0x5E } }; // 611C4892-CF94-4AD6-BA99-00F4FF34565E
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnProfile>{ 0x7875B751,0xB0D7,0x43DB,{ 0x8A,0x93,0xD3,0xFE,0x24,0x79,0xE5,0x6A } }; // 7875B751-B0D7-43DB-8A93-D3FE2479E56A
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnRoute>{ 0xB5731B83,0x0969,0x4699,{ 0x93,0x8E,0x77,0x76,0xDB,0x29,0xCF,0xB3 } }; // B5731B83-0969-4699-938E-7776DB29CFB3
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnRouteAssignment>{ 0xDB64DE22,0xCE39,0x4A76,{ 0x95,0x50,0xF6,0x10,0x39,0xF8,0x0E,0x48 } }; // DB64DE22-CE39-4A76-9550-F61039F80E48
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnRouteFactory>{ 0xBDEAB5FF,0x45CF,0x4B99,{ 0x83,0xFB,0xDB,0x3B,0xC2,0x67,0x2B,0x02 } }; // BDEAB5FF-45CF-4B99-83FB-DB3BC2672B02
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnSystemHealth>{ 0x99A8F8AF,0xC0EE,0x4E75,{ 0x81,0x7A,0xF2,0x31,0xAE,0xE5,0x12,0x3D } }; // 99A8F8AF-C0EE-4E75-817A-F231AEE5123D
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnTrafficFilter>{ 0x2F691B60,0x6C9F,0x47F5,{ 0xAC,0x36,0xBB,0x1B,0x04,0x2E,0x2C,0x50 } }; // 2F691B60-6C9F-47F5-AC36-BB1B042E2C50
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnTrafficFilterAssignment>{ 0x56CCD45C,0xE664,0x471E,{ 0x89,0xCD,0x60,0x16,0x03,0xB9,0xE0,0xF3 } }; // 56CCD45C-E664-471E-89CD-601603B9E0F3
    template <> inline constexpr guid guid_v<Windows::Networking::Vpn::IVpnTrafficFilterFactory>{ 0x480D41D5,0x7F99,0x474C,{ 0x86,0xEE,0x96,0xDF,0x16,0x83,0x18,0xF1 } }; // 480D41D5-7F99-474C-86EE-96DF168318F1
    template <> struct default_interface<Windows::Networking::Vpn::VpnAppId>{ using type = Windows::Networking::Vpn::IVpnAppId; };
    template <> struct default_interface<Windows::Networking::Vpn::VpnChannel>{ using type = Windows::Networking::Vpn::IVpnChannel; };
    template <> struct default_interface<Windows::Networking::Vpn::VpnChannelActivityEventArgs>{ using type = Windows::Networking::Vpn::IVpnChannelActivityEventArgs; };
    template <> struct default_interface<Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs>{ using type = Windows::Networking::Vpn::IVpnChannelActivityStateChangedArgs; };
    template <> struct default_interface<Windows::Networking::Vpn::VpnChannelConfiguration>{ using type = Windows::Networking::Vpn::IVpnChannelConfiguration; };
    template <> struct default_interface<Windows::Networking::Vpn::VpnCredential>{ using type = Windows::Networking::Vpn::IVpnCredential; };
    template <> struct default_interface<Windows::Networking::Vpn::VpnCustomCheckBox>{ using type = Windows::Networking::Vpn::IVpnCustomCheckBox; };
    template <> struct default_interface<Windows::Networking::Vpn::VpnCustomComboBox>{ using type = Windows::Networking::Vpn::IVpnCustomComboBox; };
    template <> struct default_interface<Windows::Networking::Vpn::VpnCustomEditBox>{ using type = Windows::Networking::Vpn::IVpnCustomEditBox; };
    template <> struct default_interface<Windows::Networking::Vpn::VpnCustomErrorBox>{ using type = Windows::Networking::Vpn::IVpnCustomErrorBox; };
    template <> struct default_interface<Windows::Networking::Vpn::VpnCustomPromptBooleanInput>{ using type = Windows::Networking::Vpn::IVpnCustomPromptBooleanInput; };
    template <> struct default_interface<Windows::Networking::Vpn::VpnCustomPromptOptionSelector>{ using type = Windows::Networking::Vpn::IVpnCustomPromptOptionSelector; };
    template <> struct default_interface<Windows::Networking::Vpn::VpnCustomPromptText>{ using type = Windows::Networking::Vpn::IVpnCustomPromptText; };
    template <> struct default_interface<Windows::Networking::Vpn::VpnCustomPromptTextInput>{ using type = Windows::Networking::Vpn::IVpnCustomPromptTextInput; };
    template <> struct default_interface<Windows::Networking::Vpn::VpnCustomTextBox>{ using type = Windows::Networking::Vpn::IVpnCustomTextBox; };
    template <> struct default_interface<Windows::Networking::Vpn::VpnDomainNameAssignment>{ using type = Windows::Networking::Vpn::IVpnDomainNameAssignment; };
    template <> struct default_interface<Windows::Networking::Vpn::VpnDomainNameInfo>{ using type = Windows::Networking::Vpn::IVpnDomainNameInfo; };
    template <> struct default_interface<Windows::Networking::Vpn::VpnInterfaceId>{ using type = Windows::Networking::Vpn::IVpnInterfaceId; };
    template <> struct default_interface<Windows::Networking::Vpn::VpnManagementAgent>{ using type = Windows::Networking::Vpn::IVpnManagementAgent; };
    template <> struct default_interface<Windows::Networking::Vpn::VpnNamespaceAssignment>{ using type = Windows::Networking::Vpn::IVpnNamespaceAssignment; };
    template <> struct default_interface<Windows::Networking::Vpn::VpnNamespaceInfo>{ using type = Windows::Networking::Vpn::IVpnNamespaceInfo; };
    template <> struct default_interface<Windows::Networking::Vpn::VpnNativeProfile>{ using type = Windows::Networking::Vpn::IVpnNativeProfile; };
    template <> struct default_interface<Windows::Networking::Vpn::VpnPacketBuffer>{ using type = Windows::Networking::Vpn::IVpnPacketBuffer; };
    template <> struct default_interface<Windows::Networking::Vpn::VpnPacketBufferList>{ using type = Windows::Networking::Vpn::IVpnPacketBufferList; };
    template <> struct default_interface<Windows::Networking::Vpn::VpnPickedCredential>{ using type = Windows::Networking::Vpn::IVpnPickedCredential; };
    template <> struct default_interface<Windows::Networking::Vpn::VpnPlugInProfile>{ using type = Windows::Networking::Vpn::IVpnPlugInProfile; };
    template <> struct default_interface<Windows::Networking::Vpn::VpnRoute>{ using type = Windows::Networking::Vpn::IVpnRoute; };
    template <> struct default_interface<Windows::Networking::Vpn::VpnRouteAssignment>{ using type = Windows::Networking::Vpn::IVpnRouteAssignment; };
    template <> struct default_interface<Windows::Networking::Vpn::VpnSystemHealth>{ using type = Windows::Networking::Vpn::IVpnSystemHealth; };
    template <> struct default_interface<Windows::Networking::Vpn::VpnTrafficFilter>{ using type = Windows::Networking::Vpn::IVpnTrafficFilter; };
    template <> struct default_interface<Windows::Networking::Vpn::VpnTrafficFilterAssignment>{ using type = Windows::Networking::Vpn::IVpnTrafficFilterAssignment; };
    template <> struct abi<Windows::Networking::Vpn::IVpnAppId>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Type(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
            virtual int32_t __stdcall put_Value(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnAppIdFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnChannel>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AssociateTransport(void*, void*) noexcept = 0;
            virtual int32_t __stdcall Start(void*, void*, void*, void*, void*, uint32_t, uint32_t, bool, void*, void*) noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
            virtual int32_t __stdcall RequestCredentials(int32_t, bool, bool, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestVpnPacketBuffer(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall LogDiagnosticMessage(void*) noexcept = 0;
            virtual int32_t __stdcall get_Id(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Configuration(void**) noexcept = 0;
            virtual int32_t __stdcall add_ActivityChange(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ActivityChange(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall put_PlugInContext(void*) noexcept = 0;
            virtual int32_t __stdcall get_PlugInContext(void**) noexcept = 0;
            virtual int32_t __stdcall get_SystemHealth(void**) noexcept = 0;
            virtual int32_t __stdcall RequestCustomPrompt(void*) noexcept = 0;
            virtual int32_t __stdcall SetErrorMessage(void*) noexcept = 0;
            virtual int32_t __stdcall SetAllowedSslTlsVersions(void*, bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnChannel2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall StartWithMainTransport(void*, void*, void*, void*, void*, uint32_t, uint32_t, bool, void*) noexcept = 0;
            virtual int32_t __stdcall StartExistingTransports(void*, void*, void*, void*, void*, uint32_t, uint32_t, bool) noexcept = 0;
            virtual int32_t __stdcall add_ActivityStateChange(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ActivityStateChange(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall GetVpnSendPacketBuffer(void**) noexcept = 0;
            virtual int32_t __stdcall GetVpnReceivePacketBuffer(void**) noexcept = 0;
            virtual int32_t __stdcall RequestCustomPromptAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestCredentialsWithCertificateAsync(int32_t, uint32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestCredentialsWithOptionsAsync(int32_t, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall RequestCredentialsSimpleAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall TerminateConnection(void*) noexcept = 0;
            virtual int32_t __stdcall StartWithTrafficFilter(void*, void*, void*, void*, void*, uint32_t, uint32_t, bool, void*, void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnChannel4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddAndAssociateTransport(void*, void*) noexcept = 0;
            virtual int32_t __stdcall StartWithMultipleTransports(void*, void*, void*, void*, void*, uint32_t, uint32_t, bool, void*, void*) noexcept = 0;
            virtual int32_t __stdcall ReplaceAndAssociateTransport(void*, void*) noexcept = 0;
            virtual int32_t __stdcall StartReconnectingTransport(void*, void*) noexcept = 0;
            virtual int32_t __stdcall GetSlotTypeForTransportContext(void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_CurrentRequestTransportContext(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnChannel5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AppendVpnReceivePacketBuffer(void*) noexcept = 0;
            virtual int32_t __stdcall AppendVpnSendPacketBuffer(void*) noexcept = 0;
            virtual int32_t __stdcall FlushVpnReceivePacketBuffers() noexcept = 0;
            virtual int32_t __stdcall FlushVpnSendPacketBuffers() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnChannelActivityEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnChannelActivityStateChangedArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ActivityState(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnChannelConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ServerServiceName(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServerHostNameList(void**) noexcept = 0;
            virtual int32_t __stdcall get_CustomField(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnChannelConfiguration2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ServerUris(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnChannelStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ProcessEventAsync(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnCredential>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PasskeyCredential(void**) noexcept = 0;
            virtual int32_t __stdcall get_CertificateCredential(void**) noexcept = 0;
            virtual int32_t __stdcall get_AdditionalPin(void**) noexcept = 0;
            virtual int32_t __stdcall get_OldPasswordCredential(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnCustomCheckBox>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_InitialCheckState(bool) noexcept = 0;
            virtual int32_t __stdcall get_InitialCheckState(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Checked(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnCustomComboBox>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_OptionsText(void*) noexcept = 0;
            virtual int32_t __stdcall get_OptionsText(void**) noexcept = 0;
            virtual int32_t __stdcall get_Selected(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnCustomEditBox>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_DefaultText(void*) noexcept = 0;
            virtual int32_t __stdcall get_DefaultText(void**) noexcept = 0;
            virtual int32_t __stdcall put_NoEcho(bool) noexcept = 0;
            virtual int32_t __stdcall get_NoEcho(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Text(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnCustomErrorBox>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnCustomPrompt>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Label(void*) noexcept = 0;
            virtual int32_t __stdcall get_Label(void**) noexcept = 0;
            virtual int32_t __stdcall put_Compulsory(bool) noexcept = 0;
            virtual int32_t __stdcall get_Compulsory(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Bordered(bool) noexcept = 0;
            virtual int32_t __stdcall get_Bordered(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnCustomPromptBooleanInput>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_InitialValue(bool) noexcept = 0;
            virtual int32_t __stdcall get_InitialValue(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Value(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnCustomPromptElement>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_DisplayName(void*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall put_Compulsory(bool) noexcept = 0;
            virtual int32_t __stdcall get_Compulsory(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Emphasized(bool) noexcept = 0;
            virtual int32_t __stdcall get_Emphasized(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnCustomPromptOptionSelector>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Options(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedIndex(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnCustomPromptText>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Text(void*) noexcept = 0;
            virtual int32_t __stdcall get_Text(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnCustomPromptTextInput>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_PlaceholderText(void*) noexcept = 0;
            virtual int32_t __stdcall get_PlaceholderText(void**) noexcept = 0;
            virtual int32_t __stdcall put_IsTextHidden(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsTextHidden(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Text(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnCustomTextBox>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_DisplayText(void*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayText(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnDomainNameAssignment>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DomainNameList(void**) noexcept = 0;
            virtual int32_t __stdcall put_ProxyAutoConfigurationUri(void*) noexcept = 0;
            virtual int32_t __stdcall get_ProxyAutoConfigurationUri(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnDomainNameInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_DomainName(void*) noexcept = 0;
            virtual int32_t __stdcall get_DomainName(void**) noexcept = 0;
            virtual int32_t __stdcall put_DomainNameType(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_DomainNameType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DnsServers(void**) noexcept = 0;
            virtual int32_t __stdcall get_WebProxyServers(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnDomainNameInfo2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WebProxyUris(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnDomainNameInfoFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateVpnDomainNameInfo(void*, int32_t, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnInterfaceId>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAddressInfo(uint32_t*, uint8_t**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnInterfaceIdFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateVpnInterfaceId(uint32_t, uint8_t*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnManagementAgent>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddProfileFromXmlAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall AddProfileFromObjectAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall UpdateProfileFromXmlAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall UpdateProfileFromObjectAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetProfilesAsync(void**) noexcept = 0;
            virtual int32_t __stdcall DeleteProfileAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ConnectProfileAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ConnectProfileWithPasswordCredentialAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall DisconnectProfileAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnNamespaceAssignment>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_NamespaceList(void*) noexcept = 0;
            virtual int32_t __stdcall get_NamespaceList(void**) noexcept = 0;
            virtual int32_t __stdcall put_ProxyAutoConfigUri(void*) noexcept = 0;
            virtual int32_t __stdcall get_ProxyAutoConfigUri(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnNamespaceInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Namespace(void*) noexcept = 0;
            virtual int32_t __stdcall get_Namespace(void**) noexcept = 0;
            virtual int32_t __stdcall put_DnsServers(void*) noexcept = 0;
            virtual int32_t __stdcall get_DnsServers(void**) noexcept = 0;
            virtual int32_t __stdcall put_WebProxyServers(void*) noexcept = 0;
            virtual int32_t __stdcall get_WebProxyServers(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnNamespaceInfoFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateVpnNamespaceInfo(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnNativeProfile>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Servers(void**) noexcept = 0;
            virtual int32_t __stdcall get_RoutingPolicyType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_RoutingPolicyType(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_NativeProtocolType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_NativeProtocolType(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_UserAuthenticationMethod(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_UserAuthenticationMethod(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_TunnelAuthenticationMethod(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TunnelAuthenticationMethod(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_EapConfiguration(void**) noexcept = 0;
            virtual int32_t __stdcall put_EapConfiguration(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnNativeProfile2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RequireVpnClientAppUI(bool*) noexcept = 0;
            virtual int32_t __stdcall put_RequireVpnClientAppUI(bool) noexcept = 0;
            virtual int32_t __stdcall get_ConnectionStatus(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnPacketBuffer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Buffer(void**) noexcept = 0;
            virtual int32_t __stdcall put_Status(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TransportAffinity(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_TransportAffinity(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnPacketBuffer2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnPacketBuffer3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_TransportContext(void*) noexcept = 0;
            virtual int32_t __stdcall get_TransportContext(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnPacketBufferFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateVpnPacketBuffer(void*, uint32_t, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnPacketBufferList>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Append(void*) noexcept = 0;
            virtual int32_t __stdcall AddAtBegin(void*) noexcept = 0;
            virtual int32_t __stdcall RemoveAtEnd(void**) noexcept = 0;
            virtual int32_t __stdcall RemoveAtBegin(void**) noexcept = 0;
            virtual int32_t __stdcall Clear() noexcept = 0;
            virtual int32_t __stdcall put_Status(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Size(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnPacketBufferList2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddLeadingPacket(void*) noexcept = 0;
            virtual int32_t __stdcall RemoveLeadingPacket(void**) noexcept = 0;
            virtual int32_t __stdcall AddTrailingPacket(void*) noexcept = 0;
            virtual int32_t __stdcall RemoveTrailingPacket(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnPickedCredential>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PasskeyCredential(void**) noexcept = 0;
            virtual int32_t __stdcall get_AdditionalPin(void**) noexcept = 0;
            virtual int32_t __stdcall get_OldPasswordCredential(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnPlugIn>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Connect(void*) noexcept = 0;
            virtual int32_t __stdcall Disconnect(void*) noexcept = 0;
            virtual int32_t __stdcall GetKeepAlivePayload(void*, void**) noexcept = 0;
            virtual int32_t __stdcall Encapsulate(void*, void*, void*) noexcept = 0;
            virtual int32_t __stdcall Decapsulate(void*, void*, void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnPlugInProfile>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ServerUris(void**) noexcept = 0;
            virtual int32_t __stdcall get_CustomConfiguration(void**) noexcept = 0;
            virtual int32_t __stdcall put_CustomConfiguration(void*) noexcept = 0;
            virtual int32_t __stdcall get_VpnPluginPackageFamilyName(void**) noexcept = 0;
            virtual int32_t __stdcall put_VpnPluginPackageFamilyName(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnPlugInProfile2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RequireVpnClientAppUI(bool*) noexcept = 0;
            virtual int32_t __stdcall put_RequireVpnClientAppUI(bool) noexcept = 0;
            virtual int32_t __stdcall get_ConnectionStatus(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnProfile>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProfileName(void**) noexcept = 0;
            virtual int32_t __stdcall put_ProfileName(void*) noexcept = 0;
            virtual int32_t __stdcall get_AppTriggers(void**) noexcept = 0;
            virtual int32_t __stdcall get_Routes(void**) noexcept = 0;
            virtual int32_t __stdcall get_DomainNameInfoList(void**) noexcept = 0;
            virtual int32_t __stdcall get_TrafficFilters(void**) noexcept = 0;
            virtual int32_t __stdcall get_RememberCredentials(bool*) noexcept = 0;
            virtual int32_t __stdcall put_RememberCredentials(bool) noexcept = 0;
            virtual int32_t __stdcall get_AlwaysOn(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AlwaysOn(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnRoute>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Address(void*) noexcept = 0;
            virtual int32_t __stdcall get_Address(void**) noexcept = 0;
            virtual int32_t __stdcall put_PrefixSize(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_PrefixSize(uint8_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnRouteAssignment>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Ipv4InclusionRoutes(void*) noexcept = 0;
            virtual int32_t __stdcall put_Ipv6InclusionRoutes(void*) noexcept = 0;
            virtual int32_t __stdcall get_Ipv4InclusionRoutes(void**) noexcept = 0;
            virtual int32_t __stdcall get_Ipv6InclusionRoutes(void**) noexcept = 0;
            virtual int32_t __stdcall put_Ipv4ExclusionRoutes(void*) noexcept = 0;
            virtual int32_t __stdcall put_Ipv6ExclusionRoutes(void*) noexcept = 0;
            virtual int32_t __stdcall get_Ipv4ExclusionRoutes(void**) noexcept = 0;
            virtual int32_t __stdcall get_Ipv6ExclusionRoutes(void**) noexcept = 0;
            virtual int32_t __stdcall put_ExcludeLocalSubnets(bool) noexcept = 0;
            virtual int32_t __stdcall get_ExcludeLocalSubnets(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnRouteFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateVpnRoute(void*, uint8_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnSystemHealth>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StatementOfHealth(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnTrafficFilter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppId(void**) noexcept = 0;
            virtual int32_t __stdcall put_AppId(void*) noexcept = 0;
            virtual int32_t __stdcall get_AppClaims(void**) noexcept = 0;
            virtual int32_t __stdcall get_Protocol(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Protocol(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_LocalPortRanges(void**) noexcept = 0;
            virtual int32_t __stdcall get_RemotePortRanges(void**) noexcept = 0;
            virtual int32_t __stdcall get_LocalAddressRanges(void**) noexcept = 0;
            virtual int32_t __stdcall get_RemoteAddressRanges(void**) noexcept = 0;
            virtual int32_t __stdcall get_RoutingPolicyType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_RoutingPolicyType(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnTrafficFilterAssignment>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TrafficFilterList(void**) noexcept = 0;
            virtual int32_t __stdcall get_AllowOutbound(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowOutbound(bool) noexcept = 0;
            virtual int32_t __stdcall get_AllowInbound(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowInbound(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::Vpn::IVpnTrafficFilterFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnAppId
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnAppIdType) Type() const;
        WINRT_IMPL_AUTO(void) Type(Windows::Networking::Vpn::VpnAppIdType const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Value() const;
        WINRT_IMPL_AUTO(void) Value(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnAppId>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnAppId<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnAppIdFactory
    {
        WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnAppId) Create(Windows::Networking::Vpn::VpnAppIdType const& type, param::hstring const& value) const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnAppIdFactory>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnAppIdFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnChannel
    {
        WINRT_IMPL_AUTO(void) AssociateTransport(Windows::Foundation::IInspectable const& mainOuterTunnelTransport, Windows::Foundation::IInspectable const& optionalOuterTunnelTransport) const;
        WINRT_IMPL_AUTO(void) Start(param::vector_view<Windows::Networking::HostName> const& assignedClientIPv4list, param::vector_view<Windows::Networking::HostName> const& assignedClientIPv6list, Windows::Networking::Vpn::VpnInterfaceId const& vpnInterfaceId, Windows::Networking::Vpn::VpnRouteAssignment const& routeScope, Windows::Networking::Vpn::VpnNamespaceAssignment const& namespaceScope, uint32_t mtuSize, uint32_t maxFrameSize, bool optimizeForLowCostNetwork, Windows::Foundation::IInspectable const& mainOuterTunnelTransport, Windows::Foundation::IInspectable const& optionalOuterTunnelTransport) const;
        WINRT_IMPL_AUTO(void) Stop() const;
        WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnPickedCredential) RequestCredentials(Windows::Networking::Vpn::VpnCredentialType const& credType, bool isRetry, bool isSingleSignOnCredential, Windows::Security::Cryptography::Certificates::Certificate const& certificate) const;
        WINRT_IMPL_AUTO(void) RequestVpnPacketBuffer(Windows::Networking::Vpn::VpnDataPathType const& type, Windows::Networking::Vpn::VpnPacketBuffer& vpnPacketBuffer) const;
        WINRT_IMPL_AUTO(void) LogDiagnosticMessage(param::hstring const& message) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnChannelConfiguration) Configuration() const;
        WINRT_IMPL_AUTO(winrt::event_token) ActivityChange(Windows::Foundation::TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityEventArgs> const& handler) const;
        using ActivityChange_revoker = impl::event_revoker<Windows::Networking::Vpn::IVpnChannel, &impl::abi_t<Windows::Networking::Vpn::IVpnChannel>::remove_ActivityChange>;
        [[nodiscard]] ActivityChange_revoker ActivityChange(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ActivityChange(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(void) PlugInContext(Windows::Foundation::IInspectable const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) PlugInContext() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnSystemHealth) SystemHealth() const;
        WINRT_IMPL_AUTO(void) RequestCustomPrompt(param::vector_view<Windows::Networking::Vpn::IVpnCustomPrompt> const& customPrompt) const;
        WINRT_IMPL_AUTO(void) SetErrorMessage(param::hstring const& message) const;
        WINRT_IMPL_AUTO(void) SetAllowedSslTlsVersions(Windows::Foundation::IInspectable const& tunnelTransport, bool useTls12) const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnChannel>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnChannel<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnChannel2
    {
        WINRT_IMPL_AUTO(void) StartWithMainTransport(param::vector_view<Windows::Networking::HostName> const& assignedClientIPv4list, param::vector_view<Windows::Networking::HostName> const& assignedClientIPv6list, Windows::Networking::Vpn::VpnInterfaceId const& vpnInterfaceId, Windows::Networking::Vpn::VpnRouteAssignment const& assignedRoutes, Windows::Networking::Vpn::VpnDomainNameAssignment const& assignedDomainName, uint32_t mtuSize, uint32_t maxFrameSize, bool Reserved, Windows::Foundation::IInspectable const& mainOuterTunnelTransport) const;
        WINRT_IMPL_AUTO(void) StartExistingTransports(param::vector_view<Windows::Networking::HostName> const& assignedClientIPv4list, param::vector_view<Windows::Networking::HostName> const& assignedClientIPv6list, Windows::Networking::Vpn::VpnInterfaceId const& vpnInterfaceId, Windows::Networking::Vpn::VpnRouteAssignment const& assignedRoutes, Windows::Networking::Vpn::VpnDomainNameAssignment const& assignedDomainName, uint32_t mtuSize, uint32_t maxFrameSize, bool Reserved) const;
        WINRT_IMPL_AUTO(winrt::event_token) ActivityStateChange(Windows::Foundation::TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs> const& handler) const;
        using ActivityStateChange_revoker = impl::event_revoker<Windows::Networking::Vpn::IVpnChannel2, &impl::abi_t<Windows::Networking::Vpn::IVpnChannel2>::remove_ActivityStateChange>;
        [[nodiscard]] ActivityStateChange_revoker ActivityStateChange(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ActivityStateChange(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnPacketBuffer) GetVpnSendPacketBuffer() const;
        WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnPacketBuffer) GetVpnReceivePacketBuffer() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) RequestCustomPromptAsync(param::async_vector_view<Windows::Networking::Vpn::IVpnCustomPromptElement> const& customPromptElement) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential>) RequestCredentialsAsync(Windows::Networking::Vpn::VpnCredentialType const& credType, uint32_t credOptions, Windows::Security::Cryptography::Certificates::Certificate const& certificate) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential>) RequestCredentialsAsync(Windows::Networking::Vpn::VpnCredentialType const& credType, uint32_t credOptions) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential>) RequestCredentialsAsync(Windows::Networking::Vpn::VpnCredentialType const& credType) const;
        WINRT_IMPL_AUTO(void) TerminateConnection(param::hstring const& message) const;
        WINRT_IMPL_AUTO(void) StartWithTrafficFilter(param::vector_view<Windows::Networking::HostName> const& assignedClientIpv4List, param::vector_view<Windows::Networking::HostName> const& assignedClientIpv6List, Windows::Networking::Vpn::VpnInterfaceId const& vpnInterfaceId, Windows::Networking::Vpn::VpnRouteAssignment const& assignedRoutes, Windows::Networking::Vpn::VpnDomainNameAssignment const& assignedNamespace, uint32_t mtuSize, uint32_t maxFrameSize, bool reserved, Windows::Foundation::IInspectable const& mainOuterTunnelTransport, Windows::Foundation::IInspectable const& optionalOuterTunnelTransport, Windows::Networking::Vpn::VpnTrafficFilterAssignment const& assignedTrafficFilters) const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnChannel2>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnChannel2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnChannel4
    {
        WINRT_IMPL_AUTO(void) AddAndAssociateTransport(Windows::Foundation::IInspectable const& transport, Windows::Foundation::IInspectable const& context) const;
        WINRT_IMPL_AUTO(void) StartWithTrafficFilter(param::iterable<Windows::Networking::HostName> const& assignedClientIpv4Addresses, param::iterable<Windows::Networking::HostName> const& assignedClientIpv6Addresses, Windows::Networking::Vpn::VpnInterfaceId const& vpninterfaceId, Windows::Networking::Vpn::VpnRouteAssignment const& assignedRoutes, Windows::Networking::Vpn::VpnDomainNameAssignment const& assignedNamespace, uint32_t mtuSize, uint32_t maxFrameSize, bool reserved, param::iterable<Windows::Foundation::IInspectable> const& transports, Windows::Networking::Vpn::VpnTrafficFilterAssignment const& assignedTrafficFilters) const;
        WINRT_IMPL_AUTO(void) ReplaceAndAssociateTransport(Windows::Foundation::IInspectable const& transport, Windows::Foundation::IInspectable const& context) const;
        WINRT_IMPL_AUTO(void) StartReconnectingTransport(Windows::Foundation::IInspectable const& transport, Windows::Foundation::IInspectable const& context) const;
        WINRT_IMPL_AUTO(Windows::Networking::Sockets::ControlChannelTriggerStatus) GetSlotTypeForTransportContext(Windows::Foundation::IInspectable const& context) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CurrentRequestTransportContext() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnChannel4>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnChannel4<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnChannel5
    {
        WINRT_IMPL_AUTO(void) AppendVpnReceivePacketBuffer(Windows::Networking::Vpn::VpnPacketBuffer const& decapsulatedPacketBuffer) const;
        WINRT_IMPL_AUTO(void) AppendVpnSendPacketBuffer(Windows::Networking::Vpn::VpnPacketBuffer const& encapsulatedPacketBuffer) const;
        WINRT_IMPL_AUTO(void) FlushVpnReceivePacketBuffers() const;
        WINRT_IMPL_AUTO(void) FlushVpnSendPacketBuffers() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnChannel5>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnChannel5<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnChannelActivityEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnChannelActivityEventType) Type() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnChannelActivityEventArgs>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnChannelActivityEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnChannelActivityStateChangedArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnChannelActivityEventType) ActivityState() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnChannelActivityStateChangedArgs>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnChannelActivityStateChangedArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnChannelConfiguration
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ServerServiceName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName>) ServerHostNameList() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) CustomField() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnChannelConfiguration>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnChannelConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnChannelConfiguration2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Foundation::Uri>) ServerUris() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnChannelConfiguration2>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnChannelConfiguration2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnChannelStatics
    {
        WINRT_IMPL_AUTO(void) ProcessEventAsync(Windows::Foundation::IInspectable const& thirdPartyPlugIn, Windows::Foundation::IInspectable const& event) const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnChannelStatics>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnChannelStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnCredential
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Credentials::PasswordCredential) PasskeyCredential() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Cryptography::Certificates::Certificate) CertificateCredential() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AdditionalPin() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Credentials::PasswordCredential) OldPasswordCredential() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnCredential>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnCredential<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnCustomCheckBox
    {
        WINRT_IMPL_AUTO(void) InitialCheckState(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) InitialCheckState() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Checked() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnCustomCheckBox>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnCustomCheckBox<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnCustomComboBox
    {
        WINRT_IMPL_AUTO(void) OptionsText(param::async_vector_view<hstring> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<hstring>) OptionsText() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Selected() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnCustomComboBox>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnCustomComboBox<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnCustomEditBox
    {
        WINRT_IMPL_AUTO(void) DefaultText(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DefaultText() const;
        WINRT_IMPL_AUTO(void) NoEcho(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) NoEcho() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Text() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnCustomEditBox>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnCustomEditBox<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnCustomErrorBox
    {
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnCustomErrorBox>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnCustomErrorBox<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnCustomPrompt
    {
        WINRT_IMPL_AUTO(void) Label(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Label() const;
        WINRT_IMPL_AUTO(void) Compulsory(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Compulsory() const;
        WINRT_IMPL_AUTO(void) Bordered(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Bordered() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnCustomPrompt>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnCustomPrompt<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnCustomPromptBooleanInput
    {
        WINRT_IMPL_AUTO(void) InitialValue(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) InitialValue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Value() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnCustomPromptBooleanInput>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnCustomPromptBooleanInput<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnCustomPromptElement
    {
        WINRT_IMPL_AUTO(void) DisplayName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayName() const;
        WINRT_IMPL_AUTO(void) Compulsory(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Compulsory() const;
        WINRT_IMPL_AUTO(void) Emphasized(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Emphasized() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnCustomPromptElement>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnCustomPromptElement<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnCustomPromptOptionSelector
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) Options() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) SelectedIndex() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnCustomPromptOptionSelector>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnCustomPromptOptionSelector<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnCustomPromptText
    {
        WINRT_IMPL_AUTO(void) Text(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Text() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnCustomPromptText>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnCustomPromptText<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnCustomPromptTextInput
    {
        WINRT_IMPL_AUTO(void) PlaceholderText(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) PlaceholderText() const;
        WINRT_IMPL_AUTO(void) IsTextHidden(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsTextHidden() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Text() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnCustomPromptTextInput>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnCustomPromptTextInput<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnCustomTextBox
    {
        WINRT_IMPL_AUTO(void) DisplayText(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayText() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnCustomTextBox>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnCustomTextBox<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnDomainNameAssignment
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnDomainNameInfo>) DomainNameList() const;
        WINRT_IMPL_AUTO(void) ProxyAutoConfigurationUri(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Uri) ProxyAutoConfigurationUri() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnDomainNameAssignment>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnDomainNameAssignment<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnDomainNameInfo
    {
        WINRT_IMPL_AUTO(void) DomainName(Windows::Networking::HostName const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::HostName) DomainName() const;
        WINRT_IMPL_AUTO(void) DomainNameType(Windows::Networking::Vpn::VpnDomainNameType const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnDomainNameType) DomainNameType() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Networking::HostName>) DnsServers() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Networking::HostName>) WebProxyServers() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnDomainNameInfo>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnDomainNameInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnDomainNameInfo2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Foundation::Uri>) WebProxyUris() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnDomainNameInfo2>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnDomainNameInfo2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnDomainNameInfoFactory
    {
        WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnDomainNameInfo) CreateVpnDomainNameInfo(param::hstring const& name, Windows::Networking::Vpn::VpnDomainNameType const& nameType, param::iterable<Windows::Networking::HostName> const& dnsServerList, param::iterable<Windows::Networking::HostName> const& proxyServerList) const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnDomainNameInfoFactory>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnDomainNameInfoFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnInterfaceId
    {
        WINRT_IMPL_AUTO(void) GetAddressInfo(com_array<uint8_t>& id) const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnInterfaceId>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnInterfaceId<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnInterfaceIdFactory
    {
        WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnInterfaceId) CreateVpnInterfaceId(array_view<uint8_t const> address) const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnInterfaceIdFactory>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnInterfaceIdFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnManagementAgent
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>) AddProfileFromXmlAsync(param::hstring const& xml) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>) AddProfileFromObjectAsync(Windows::Networking::Vpn::IVpnProfile const& profile) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>) UpdateProfileFromXmlAsync(param::hstring const& xml) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>) UpdateProfileFromObjectAsync(Windows::Networking::Vpn::IVpnProfile const& profile) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Vpn::IVpnProfile>>) GetProfilesAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>) DeleteProfileAsync(Windows::Networking::Vpn::IVpnProfile const& profile) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>) ConnectProfileAsync(Windows::Networking::Vpn::IVpnProfile const& profile) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>) ConnectProfileWithPasswordCredentialAsync(Windows::Networking::Vpn::IVpnProfile const& profile, Windows::Security::Credentials::PasswordCredential const& passwordCredential) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>) DisconnectProfileAsync(Windows::Networking::Vpn::IVpnProfile const& profile) const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnManagementAgent>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnManagementAgent<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnNamespaceAssignment
    {
        WINRT_IMPL_AUTO(void) NamespaceList(param::vector<Windows::Networking::Vpn::VpnNamespaceInfo> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnNamespaceInfo>) NamespaceList() const;
        WINRT_IMPL_AUTO(void) ProxyAutoConfigUri(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Uri) ProxyAutoConfigUri() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnNamespaceAssignment>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnNamespaceAssignment<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnNamespaceInfo
    {
        WINRT_IMPL_AUTO(void) Namespace(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Namespace() const;
        WINRT_IMPL_AUTO(void) DnsServers(param::vector<Windows::Networking::HostName> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Networking::HostName>) DnsServers() const;
        WINRT_IMPL_AUTO(void) WebProxyServers(param::vector<Windows::Networking::HostName> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Networking::HostName>) WebProxyServers() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnNamespaceInfo>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnNamespaceInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnNamespaceInfoFactory
    {
        WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnNamespaceInfo) CreateVpnNamespaceInfo(param::hstring const& name, param::vector<Windows::Networking::HostName> const& dnsServerList, param::vector<Windows::Networking::HostName> const& proxyServerList) const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnNamespaceInfoFactory>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnNamespaceInfoFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnNativeProfile
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) Servers() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnRoutingPolicyType) RoutingPolicyType() const;
        WINRT_IMPL_AUTO(void) RoutingPolicyType(Windows::Networking::Vpn::VpnRoutingPolicyType const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnNativeProtocolType) NativeProtocolType() const;
        WINRT_IMPL_AUTO(void) NativeProtocolType(Windows::Networking::Vpn::VpnNativeProtocolType const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnAuthenticationMethod) UserAuthenticationMethod() const;
        WINRT_IMPL_AUTO(void) UserAuthenticationMethod(Windows::Networking::Vpn::VpnAuthenticationMethod const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnAuthenticationMethod) TunnelAuthenticationMethod() const;
        WINRT_IMPL_AUTO(void) TunnelAuthenticationMethod(Windows::Networking::Vpn::VpnAuthenticationMethod const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) EapConfiguration() const;
        WINRT_IMPL_AUTO(void) EapConfiguration(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnNativeProfile>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnNativeProfile<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnNativeProfile2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) RequireVpnClientAppUI() const;
        WINRT_IMPL_AUTO(void) RequireVpnClientAppUI(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnManagementConnectionStatus) ConnectionStatus() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnNativeProfile2>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnNativeProfile2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnPacketBuffer
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::Buffer) Buffer() const;
        WINRT_IMPL_AUTO(void) Status(Windows::Networking::Vpn::VpnPacketBufferStatus const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnPacketBufferStatus) Status() const;
        WINRT_IMPL_AUTO(void) TransportAffinity(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) TransportAffinity() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnPacketBuffer>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnPacketBuffer<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnPacketBuffer2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnAppId) AppId() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnPacketBuffer2>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnPacketBuffer2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnPacketBuffer3
    {
        WINRT_IMPL_AUTO(void) TransportContext(Windows::Foundation::IInspectable const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) TransportContext() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnPacketBuffer3>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnPacketBuffer3<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnPacketBufferFactory
    {
        WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnPacketBuffer) CreateVpnPacketBuffer(Windows::Networking::Vpn::VpnPacketBuffer const& parentBuffer, uint32_t offset, uint32_t length) const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnPacketBufferFactory>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnPacketBufferFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnPacketBufferList
    {
        WINRT_IMPL_AUTO(void) Append(Windows::Networking::Vpn::VpnPacketBuffer const& nextVpnPacketBuffer) const;
        WINRT_IMPL_AUTO(void) AddAtBegin(Windows::Networking::Vpn::VpnPacketBuffer const& nextVpnPacketBuffer) const;
        WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnPacketBuffer) RemoveAtEnd() const;
        WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnPacketBuffer) RemoveAtBegin() const;
        WINRT_IMPL_AUTO(void) Clear() const;
        WINRT_IMPL_AUTO(void) Status(Windows::Networking::Vpn::VpnPacketBufferStatus const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnPacketBufferStatus) Status() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Size() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnPacketBufferList>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnPacketBufferList<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnPacketBufferList2
    {
        WINRT_IMPL_AUTO(void) AddLeadingPacket(Windows::Networking::Vpn::VpnPacketBuffer const& nextVpnPacketBuffer) const;
        WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnPacketBuffer) RemoveLeadingPacket() const;
        WINRT_IMPL_AUTO(void) AddTrailingPacket(Windows::Networking::Vpn::VpnPacketBuffer const& nextVpnPacketBuffer) const;
        WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnPacketBuffer) RemoveTrailingPacket() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnPacketBufferList2>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnPacketBufferList2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnPickedCredential
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Credentials::PasswordCredential) PasskeyCredential() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AdditionalPin() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Credentials::PasswordCredential) OldPasswordCredential() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnPickedCredential>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnPickedCredential<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnPlugIn
    {
        WINRT_IMPL_AUTO(void) Connect(Windows::Networking::Vpn::VpnChannel const& channel) const;
        WINRT_IMPL_AUTO(void) Disconnect(Windows::Networking::Vpn::VpnChannel const& channel) const;
        WINRT_IMPL_AUTO(void) GetKeepAlivePayload(Windows::Networking::Vpn::VpnChannel const& channel, Windows::Networking::Vpn::VpnPacketBuffer& keepAlivePacket) const;
        WINRT_IMPL_AUTO(void) Encapsulate(Windows::Networking::Vpn::VpnChannel const& channel, Windows::Networking::Vpn::VpnPacketBufferList const& packets, Windows::Networking::Vpn::VpnPacketBufferList const& encapulatedPackets) const;
        WINRT_IMPL_AUTO(void) Decapsulate(Windows::Networking::Vpn::VpnChannel const& channel, Windows::Networking::Vpn::VpnPacketBuffer const& encapBuffer, Windows::Networking::Vpn::VpnPacketBufferList const& decapsulatedPackets, Windows::Networking::Vpn::VpnPacketBufferList const& controlPacketsToSend) const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnPlugIn>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnPlugIn<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnPlugInProfile
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Foundation::Uri>) ServerUris() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) CustomConfiguration() const;
        WINRT_IMPL_AUTO(void) CustomConfiguration(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VpnPluginPackageFamilyName() const;
        WINRT_IMPL_AUTO(void) VpnPluginPackageFamilyName(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnPlugInProfile>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnPlugInProfile<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnPlugInProfile2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) RequireVpnClientAppUI() const;
        WINRT_IMPL_AUTO(void) RequireVpnClientAppUI(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnManagementConnectionStatus) ConnectionStatus() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnPlugInProfile2>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnPlugInProfile2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnProfile
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ProfileName() const;
        WINRT_IMPL_AUTO(void) ProfileName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnAppId>) AppTriggers() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>) Routes() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnDomainNameInfo>) DomainNameInfoList() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnTrafficFilter>) TrafficFilters() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) RememberCredentials() const;
        WINRT_IMPL_AUTO(void) RememberCredentials(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AlwaysOn() const;
        WINRT_IMPL_AUTO(void) AlwaysOn(bool value) const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnProfile>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnProfile<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnRoute
    {
        WINRT_IMPL_AUTO(void) Address(Windows::Networking::HostName const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::HostName) Address() const;
        WINRT_IMPL_AUTO(void) PrefixSize(uint8_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint8_t) PrefixSize() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnRoute>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnRoute<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnRouteAssignment
    {
        WINRT_IMPL_AUTO(void) Ipv4InclusionRoutes(param::vector<Windows::Networking::Vpn::VpnRoute> const& value) const;
        WINRT_IMPL_AUTO(void) Ipv6InclusionRoutes(param::vector<Windows::Networking::Vpn::VpnRoute> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>) Ipv4InclusionRoutes() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>) Ipv6InclusionRoutes() const;
        WINRT_IMPL_AUTO(void) Ipv4ExclusionRoutes(param::vector<Windows::Networking::Vpn::VpnRoute> const& value) const;
        WINRT_IMPL_AUTO(void) Ipv6ExclusionRoutes(param::vector<Windows::Networking::Vpn::VpnRoute> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>) Ipv4ExclusionRoutes() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>) Ipv6ExclusionRoutes() const;
        WINRT_IMPL_AUTO(void) ExcludeLocalSubnets(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) ExcludeLocalSubnets() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnRouteAssignment>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnRouteAssignment<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnRouteFactory
    {
        WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnRoute) CreateVpnRoute(Windows::Networking::HostName const& address, uint8_t prefixSize) const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnRouteFactory>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnRouteFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnSystemHealth
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::Buffer) StatementOfHealth() const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnSystemHealth>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnSystemHealth<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnTrafficFilter
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnAppId) AppId() const;
        WINRT_IMPL_AUTO(void) AppId(Windows::Networking::Vpn::VpnAppId const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) AppClaims() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnIPProtocol) Protocol() const;
        WINRT_IMPL_AUTO(void) Protocol(Windows::Networking::Vpn::VpnIPProtocol const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) LocalPortRanges() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) RemotePortRanges() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) LocalAddressRanges() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) RemoteAddressRanges() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnRoutingPolicyType) RoutingPolicyType() const;
        WINRT_IMPL_AUTO(void) RoutingPolicyType(Windows::Networking::Vpn::VpnRoutingPolicyType const& value) const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnTrafficFilter>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnTrafficFilter<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnTrafficFilterAssignment
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnTrafficFilter>) TrafficFilterList() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AllowOutbound() const;
        WINRT_IMPL_AUTO(void) AllowOutbound(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AllowInbound() const;
        WINRT_IMPL_AUTO(void) AllowInbound(bool value) const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnTrafficFilterAssignment>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnTrafficFilterAssignment<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Vpn_IVpnTrafficFilterFactory
    {
        WINRT_IMPL_AUTO(Windows::Networking::Vpn::VpnTrafficFilter) Create(Windows::Networking::Vpn::VpnAppId const& appId) const;
    };
    template <> struct consume<Windows::Networking::Vpn::IVpnTrafficFilterFactory>
    {
        template <typename D> using type = consume_Windows_Networking_Vpn_IVpnTrafficFilterFactory<D>;
    };
}
#endif
