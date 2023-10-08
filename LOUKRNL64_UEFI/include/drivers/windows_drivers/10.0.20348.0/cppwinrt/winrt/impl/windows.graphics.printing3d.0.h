// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_Printing3D_0_H
#define WINRT_Windows_Graphics_Printing3D_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TResult, typename TProgress> struct __declspec(empty_bases) IAsyncOperationWithProgress;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename K, typename V> struct __declspec(empty_bases) IMap;
    struct IPropertySet;
    template <typename T> struct __declspec(empty_bases) IVectorView;
    template <typename T> struct __declspec(empty_bases) IVector;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Numerics
{
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
    struct IRandomAccessStream;
    struct IRandomAccessStreamWithContentType;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct Color;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Printing3D
{
    enum class Print3DTaskCompletion : int32_t
    {
        Abandoned = 0,
        Canceled = 1,
        Failed = 2,
        Slicing = 3,
        Submitted = 4,
    };
    enum class Print3DTaskDetail : int32_t
    {
        Unknown = 0,
        ModelExceedsPrintBed = 1,
        UploadFailed = 2,
        InvalidMaterialSelection = 3,
        InvalidModel = 4,
        ModelNotManifold = 5,
        InvalidPrintTicket = 6,
    };
    enum class Printing3DBufferFormat : int32_t
    {
        Unknown = 0,
        R32G32B32A32Float = 2,
        R32G32B32A32UInt = 3,
        R32G32B32Float = 6,
        R32G32B32UInt = 7,
        Printing3DDouble = 500,
        Printing3DUInt = 501,
    };
    enum class Printing3DMeshVerificationMode : int32_t
    {
        FindFirstError = 0,
        FindAllErrors = 1,
    };
    enum class Printing3DModelUnit : int32_t
    {
        Meter = 0,
        Micron = 1,
        Millimeter = 2,
        Centimeter = 3,
        Inch = 4,
        Foot = 5,
    };
    enum class Printing3DObjectType : int32_t
    {
        Model = 0,
        Support = 1,
        Others = 2,
    };
    enum class Printing3DPackageCompression : int32_t
    {
        Low = 0,
        Medium = 1,
        High = 2,
    };
    enum class Printing3DTextureEdgeBehavior : int32_t
    {
        None = 0,
        Wrap = 1,
        Mirror = 2,
        Clamp = 3,
    };
    struct IPrint3DManager;
    struct IPrint3DManagerStatics;
    struct IPrint3DTask;
    struct IPrint3DTaskCompletedEventArgs;
    struct IPrint3DTaskRequest;
    struct IPrint3DTaskRequestedEventArgs;
    struct IPrint3DTaskSourceChangedEventArgs;
    struct IPrint3DTaskSourceRequestedArgs;
    struct IPrinting3D3MFPackage;
    struct IPrinting3D3MFPackage2;
    struct IPrinting3D3MFPackageStatics;
    struct IPrinting3DBaseMaterial;
    struct IPrinting3DBaseMaterialGroup;
    struct IPrinting3DBaseMaterialGroupFactory;
    struct IPrinting3DBaseMaterialStatics;
    struct IPrinting3DColorMaterial;
    struct IPrinting3DColorMaterial2;
    struct IPrinting3DColorMaterialGroup;
    struct IPrinting3DColorMaterialGroupFactory;
    struct IPrinting3DComponent;
    struct IPrinting3DComponentWithMatrix;
    struct IPrinting3DCompositeMaterial;
    struct IPrinting3DCompositeMaterialGroup;
    struct IPrinting3DCompositeMaterialGroup2;
    struct IPrinting3DCompositeMaterialGroupFactory;
    struct IPrinting3DFaceReductionOptions;
    struct IPrinting3DMaterial;
    struct IPrinting3DMesh;
    struct IPrinting3DMeshVerificationResult;
    struct IPrinting3DModel;
    struct IPrinting3DModel2;
    struct IPrinting3DModelTexture;
    struct IPrinting3DMultiplePropertyMaterial;
    struct IPrinting3DMultiplePropertyMaterialGroup;
    struct IPrinting3DMultiplePropertyMaterialGroupFactory;
    struct IPrinting3DTexture2CoordMaterial;
    struct IPrinting3DTexture2CoordMaterialGroup;
    struct IPrinting3DTexture2CoordMaterialGroup2;
    struct IPrinting3DTexture2CoordMaterialGroupFactory;
    struct IPrinting3DTextureResource;
    struct Print3DManager;
    struct Print3DTask;
    struct Print3DTaskCompletedEventArgs;
    struct Print3DTaskRequest;
    struct Print3DTaskRequestedEventArgs;
    struct Print3DTaskSourceChangedEventArgs;
    struct Print3DTaskSourceRequestedArgs;
    struct Printing3D3MFPackage;
    struct Printing3DBaseMaterial;
    struct Printing3DBaseMaterialGroup;
    struct Printing3DColorMaterial;
    struct Printing3DColorMaterialGroup;
    struct Printing3DComponent;
    struct Printing3DComponentWithMatrix;
    struct Printing3DCompositeMaterial;
    struct Printing3DCompositeMaterialGroup;
    struct Printing3DFaceReductionOptions;
    struct Printing3DMaterial;
    struct Printing3DMesh;
    struct Printing3DMeshVerificationResult;
    struct Printing3DModel;
    struct Printing3DModelTexture;
    struct Printing3DMultiplePropertyMaterial;
    struct Printing3DMultiplePropertyMaterialGroup;
    struct Printing3DTexture2CoordMaterial;
    struct Printing3DTexture2CoordMaterialGroup;
    struct Printing3DTextureResource;
    struct Printing3DBufferDescription;
    struct Print3DTaskSourceRequestedHandler;
}
namespace winrt::impl
{
    template <> struct category<Windows::Graphics::Printing3D::IPrint3DManager>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrint3DManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrint3DTask>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrint3DTaskCompletedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrint3DTaskRequest>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrint3DTaskRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrint3DTaskSourceChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrint3DTaskSourceRequestedArgs>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrinting3D3MFPackage>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrinting3D3MFPackage2>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrinting3D3MFPackageStatics>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrinting3DBaseMaterial>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroupFactory>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialStatics>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrinting3DColorMaterial>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrinting3DColorMaterial2>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroupFactory>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrinting3DComponent>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterial>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup2>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroupFactory>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrinting3DMaterial>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrinting3DMesh>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrinting3DModel>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrinting3DModel2>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrinting3DModelTexture>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterial>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroupFactory>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup2>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroupFactory>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::IPrinting3DTextureResource>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing3D::Print3DManager>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing3D::Print3DTask>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing3D::Print3DTaskCompletedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing3D::Print3DTaskRequest>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing3D::Print3DTaskRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing3D::Print3DTaskSourceChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing3D::Print3DTaskSourceRequestedArgs>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing3D::Printing3D3MFPackage>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing3D::Printing3DBaseMaterial>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing3D::Printing3DColorMaterial>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing3D::Printing3DColorMaterialGroup>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing3D::Printing3DComponent>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing3D::Printing3DComponentWithMatrix>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing3D::Printing3DCompositeMaterial>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing3D::Printing3DCompositeMaterialGroup>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing3D::Printing3DFaceReductionOptions>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing3D::Printing3DMaterial>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing3D::Printing3DMesh>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing3D::Printing3DMeshVerificationResult>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing3D::Printing3DModel>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing3D::Printing3DModelTexture>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterial>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterialGroup>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterial>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterialGroup>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing3D::Printing3DTextureResource>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing3D::Print3DTaskCompletion>{ using type = enum_category; };
    template <> struct category<Windows::Graphics::Printing3D::Print3DTaskDetail>{ using type = enum_category; };
    template <> struct category<Windows::Graphics::Printing3D::Printing3DBufferFormat>{ using type = enum_category; };
    template <> struct category<Windows::Graphics::Printing3D::Printing3DMeshVerificationMode>{ using type = enum_category; };
    template <> struct category<Windows::Graphics::Printing3D::Printing3DModelUnit>{ using type = enum_category; };
    template <> struct category<Windows::Graphics::Printing3D::Printing3DObjectType>{ using type = enum_category; };
    template <> struct category<Windows::Graphics::Printing3D::Printing3DPackageCompression>{ using type = enum_category; };
    template <> struct category<Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior>{ using type = enum_category; };
    template <> struct category<Windows::Graphics::Printing3D::Printing3DBufferDescription>{ using type = struct_category<Windows::Graphics::Printing3D::Printing3DBufferFormat, uint32_t>; };
    template <> struct category<Windows::Graphics::Printing3D::Print3DTaskSourceRequestedHandler>{ using type = delegate_category; };
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Print3DManager> = L"Windows.Graphics.Printing3D.Print3DManager";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Print3DTask> = L"Windows.Graphics.Printing3D.Print3DTask";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Print3DTaskCompletedEventArgs> = L"Windows.Graphics.Printing3D.Print3DTaskCompletedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Print3DTaskRequest> = L"Windows.Graphics.Printing3D.Print3DTaskRequest";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Print3DTaskRequestedEventArgs> = L"Windows.Graphics.Printing3D.Print3DTaskRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Print3DTaskSourceChangedEventArgs> = L"Windows.Graphics.Printing3D.Print3DTaskSourceChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Print3DTaskSourceRequestedArgs> = L"Windows.Graphics.Printing3D.Print3DTaskSourceRequestedArgs";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Printing3D3MFPackage> = L"Windows.Graphics.Printing3D.Printing3D3MFPackage";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Printing3DBaseMaterial> = L"Windows.Graphics.Printing3D.Printing3DBaseMaterial";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup> = L"Windows.Graphics.Printing3D.Printing3DBaseMaterialGroup";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Printing3DColorMaterial> = L"Windows.Graphics.Printing3D.Printing3DColorMaterial";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Printing3DColorMaterialGroup> = L"Windows.Graphics.Printing3D.Printing3DColorMaterialGroup";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Printing3DComponent> = L"Windows.Graphics.Printing3D.Printing3DComponent";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Printing3DComponentWithMatrix> = L"Windows.Graphics.Printing3D.Printing3DComponentWithMatrix";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Printing3DCompositeMaterial> = L"Windows.Graphics.Printing3D.Printing3DCompositeMaterial";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Printing3DCompositeMaterialGroup> = L"Windows.Graphics.Printing3D.Printing3DCompositeMaterialGroup";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Printing3DFaceReductionOptions> = L"Windows.Graphics.Printing3D.Printing3DFaceReductionOptions";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Printing3DMaterial> = L"Windows.Graphics.Printing3D.Printing3DMaterial";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Printing3DMesh> = L"Windows.Graphics.Printing3D.Printing3DMesh";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Printing3DMeshVerificationResult> = L"Windows.Graphics.Printing3D.Printing3DMeshVerificationResult";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Printing3DModel> = L"Windows.Graphics.Printing3D.Printing3DModel";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Printing3DModelTexture> = L"Windows.Graphics.Printing3D.Printing3DModelTexture";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterial> = L"Windows.Graphics.Printing3D.Printing3DMultiplePropertyMaterial";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterialGroup> = L"Windows.Graphics.Printing3D.Printing3DMultiplePropertyMaterialGroup";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterial> = L"Windows.Graphics.Printing3D.Printing3DTexture2CoordMaterial";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterialGroup> = L"Windows.Graphics.Printing3D.Printing3DTexture2CoordMaterialGroup";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Printing3DTextureResource> = L"Windows.Graphics.Printing3D.Printing3DTextureResource";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Print3DTaskCompletion> = L"Windows.Graphics.Printing3D.Print3DTaskCompletion";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Print3DTaskDetail> = L"Windows.Graphics.Printing3D.Print3DTaskDetail";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Printing3DBufferFormat> = L"Windows.Graphics.Printing3D.Printing3DBufferFormat";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Printing3DMeshVerificationMode> = L"Windows.Graphics.Printing3D.Printing3DMeshVerificationMode";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Printing3DModelUnit> = L"Windows.Graphics.Printing3D.Printing3DModelUnit";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Printing3DObjectType> = L"Windows.Graphics.Printing3D.Printing3DObjectType";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Printing3DPackageCompression> = L"Windows.Graphics.Printing3D.Printing3DPackageCompression";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior> = L"Windows.Graphics.Printing3D.Printing3DTextureEdgeBehavior";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Printing3DBufferDescription> = L"Windows.Graphics.Printing3D.Printing3DBufferDescription";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrint3DManager> = L"Windows.Graphics.Printing3D.IPrint3DManager";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrint3DManagerStatics> = L"Windows.Graphics.Printing3D.IPrint3DManagerStatics";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrint3DTask> = L"Windows.Graphics.Printing3D.IPrint3DTask";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrint3DTaskCompletedEventArgs> = L"Windows.Graphics.Printing3D.IPrint3DTaskCompletedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrint3DTaskRequest> = L"Windows.Graphics.Printing3D.IPrint3DTaskRequest";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrint3DTaskRequestedEventArgs> = L"Windows.Graphics.Printing3D.IPrint3DTaskRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrint3DTaskSourceChangedEventArgs> = L"Windows.Graphics.Printing3D.IPrint3DTaskSourceChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrint3DTaskSourceRequestedArgs> = L"Windows.Graphics.Printing3D.IPrint3DTaskSourceRequestedArgs";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrinting3D3MFPackage> = L"Windows.Graphics.Printing3D.IPrinting3D3MFPackage";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrinting3D3MFPackage2> = L"Windows.Graphics.Printing3D.IPrinting3D3MFPackage2";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrinting3D3MFPackageStatics> = L"Windows.Graphics.Printing3D.IPrinting3D3MFPackageStatics";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrinting3DBaseMaterial> = L"Windows.Graphics.Printing3D.IPrinting3DBaseMaterial";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup> = L"Windows.Graphics.Printing3D.IPrinting3DBaseMaterialGroup";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroupFactory> = L"Windows.Graphics.Printing3D.IPrinting3DBaseMaterialGroupFactory";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialStatics> = L"Windows.Graphics.Printing3D.IPrinting3DBaseMaterialStatics";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrinting3DColorMaterial> = L"Windows.Graphics.Printing3D.IPrinting3DColorMaterial";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrinting3DColorMaterial2> = L"Windows.Graphics.Printing3D.IPrinting3DColorMaterial2";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup> = L"Windows.Graphics.Printing3D.IPrinting3DColorMaterialGroup";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroupFactory> = L"Windows.Graphics.Printing3D.IPrinting3DColorMaterialGroupFactory";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrinting3DComponent> = L"Windows.Graphics.Printing3D.IPrinting3DComponent";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix> = L"Windows.Graphics.Printing3D.IPrinting3DComponentWithMatrix";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterial> = L"Windows.Graphics.Printing3D.IPrinting3DCompositeMaterial";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup> = L"Windows.Graphics.Printing3D.IPrinting3DCompositeMaterialGroup";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup2> = L"Windows.Graphics.Printing3D.IPrinting3DCompositeMaterialGroup2";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroupFactory> = L"Windows.Graphics.Printing3D.IPrinting3DCompositeMaterialGroupFactory";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions> = L"Windows.Graphics.Printing3D.IPrinting3DFaceReductionOptions";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrinting3DMaterial> = L"Windows.Graphics.Printing3D.IPrinting3DMaterial";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrinting3DMesh> = L"Windows.Graphics.Printing3D.IPrinting3DMesh";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult> = L"Windows.Graphics.Printing3D.IPrinting3DMeshVerificationResult";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrinting3DModel> = L"Windows.Graphics.Printing3D.IPrinting3DModel";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrinting3DModel2> = L"Windows.Graphics.Printing3D.IPrinting3DModel2";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrinting3DModelTexture> = L"Windows.Graphics.Printing3D.IPrinting3DModelTexture";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterial> = L"Windows.Graphics.Printing3D.IPrinting3DMultiplePropertyMaterial";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup> = L"Windows.Graphics.Printing3D.IPrinting3DMultiplePropertyMaterialGroup";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroupFactory> = L"Windows.Graphics.Printing3D.IPrinting3DMultiplePropertyMaterialGroupFactory";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial> = L"Windows.Graphics.Printing3D.IPrinting3DTexture2CoordMaterial";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup> = L"Windows.Graphics.Printing3D.IPrinting3DTexture2CoordMaterialGroup";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup2> = L"Windows.Graphics.Printing3D.IPrinting3DTexture2CoordMaterialGroup2";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroupFactory> = L"Windows.Graphics.Printing3D.IPrinting3DTexture2CoordMaterialGroupFactory";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::IPrinting3DTextureResource> = L"Windows.Graphics.Printing3D.IPrinting3DTextureResource";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing3D::Print3DTaskSourceRequestedHandler> = L"Windows.Graphics.Printing3D.Print3DTaskSourceRequestedHandler";
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrint3DManager>{ 0x4D2FCB0A,0x7366,0x4971,{ 0x8B,0xD5,0x17,0xC4,0xE3,0xE8,0xC6,0xC0 } }; // 4D2FCB0A-7366-4971-8BD5-17C4E3E8C6C0
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrint3DManagerStatics>{ 0x0EF1CAFE,0xA9AD,0x4C08,{ 0xA9,0x17,0x1D,0x1F,0x86,0x3E,0xAB,0xCB } }; // 0EF1CAFE-A9AD-4C08-A917-1D1F863EABCB
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrint3DTask>{ 0x8CE3D080,0x2118,0x4C28,{ 0x80,0xDE,0xF4,0x26,0xD7,0x01,0x91,0xAE } }; // 8CE3D080-2118-4C28-80DE-F426D70191AE
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrint3DTaskCompletedEventArgs>{ 0xCC1914AF,0x2614,0x4F1D,{ 0xAC,0xCC,0xD6,0xFC,0x4F,0xDA,0x54,0x55 } }; // CC1914AF-2614-4F1D-ACCC-D6FC4FDA5455
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrint3DTaskRequest>{ 0x2595C46F,0x2245,0x4C5A,{ 0x87,0x31,0x0D,0x60,0x4D,0xC6,0xBC,0x3C } }; // 2595C46F-2245-4C5A-8731-0D604DC6BC3C
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrint3DTaskRequestedEventArgs>{ 0x150CB77F,0x18C5,0x40D7,{ 0x9F,0x40,0xFA,0xB3,0x09,0x6E,0x05,0xA9 } }; // 150CB77F-18C5-40D7-9F40-FAB3096E05A9
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrint3DTaskSourceChangedEventArgs>{ 0x5BCD34AF,0x24E9,0x4C10,{ 0x8D,0x07,0x14,0xC3,0x46,0xBA,0x3F,0xCF } }; // 5BCD34AF-24E9-4C10-8D07-14C346BA3FCF
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrint3DTaskSourceRequestedArgs>{ 0xC77C9ABA,0x24AF,0x424D,{ 0xA3,0xBF,0x92,0x25,0x0C,0x35,0x56,0x02 } }; // C77C9ABA-24AF-424D-A3BF-92250C355602
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrinting3D3MFPackage>{ 0xF64DD5C8,0x2AB7,0x45A9,{ 0xA1,0xB7,0x26,0x7E,0x94,0x8D,0x5B,0x18 } }; // F64DD5C8-2AB7-45A9-A1B7-267E948D5B18
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrinting3D3MFPackage2>{ 0x965C7AC4,0x93CB,0x4430,{ 0x92,0xB8,0x78,0x9C,0xD4,0x54,0xF8,0x83 } }; // 965C7AC4-93CB-4430-92B8-789CD454F883
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrinting3D3MFPackageStatics>{ 0x7058D9AF,0x7A9A,0x4787,{ 0xB8,0x17,0xF6,0xF4,0x59,0x21,0x48,0x23 } }; // 7058D9AF-7A9A-4787-B817-F6F459214823
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrinting3DBaseMaterial>{ 0xD0F0E743,0xC50C,0x4BCB,{ 0x9D,0x04,0xFC,0x16,0xAD,0xCE,0xA2,0xC9 } }; // D0F0E743-C50C-4BCB-9D04-FC16ADCEA2C9
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup>{ 0x94F070B8,0x2515,0x4A8D,{ 0xA1,0xF0,0xD0,0xFC,0x13,0xD0,0x60,0x21 } }; // 94F070B8-2515-4A8D-A1F0-D0FC13D06021
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroupFactory>{ 0x5C1546DC,0x8697,0x4193,{ 0x97,0x6B,0x84,0xBB,0x41,0x16,0xE5,0xBF } }; // 5C1546DC-8697-4193-976B-84BB4116E5BF
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialStatics>{ 0x815A47BC,0x374A,0x476D,{ 0xBE,0x92,0x3E,0xCF,0xD1,0xCB,0x97,0x76 } }; // 815A47BC-374A-476D-BE92-3ECFD1CB9776
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrinting3DColorMaterial>{ 0xE1899928,0x7CE7,0x4285,{ 0xA3,0x5D,0xF1,0x45,0xC9,0x51,0x0C,0x7B } }; // E1899928-7CE7-4285-A35D-F145C9510C7B
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrinting3DColorMaterial2>{ 0xFAB0E852,0x0AEF,0x44E9,{ 0x9D,0xDD,0x36,0xEE,0xEA,0x5A,0xCD,0x44 } }; // FAB0E852-0AEF-44E9-9DDD-36EEEA5ACD44
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup>{ 0x001A6BD0,0xAADF,0x4226,{ 0xAF,0xE9,0xF3,0x69,0xA0,0xB4,0x50,0x04 } }; // 001A6BD0-AADF-4226-AFE9-F369A0B45004
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroupFactory>{ 0x71D38D6D,0xB1EA,0x4A5B,{ 0xBC,0x54,0x19,0xC6,0x5F,0x3D,0xF0,0x44 } }; // 71D38D6D-B1EA-4A5B-BC54-19C65F3DF044
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrinting3DComponent>{ 0x7E287845,0xBF7F,0x4CDB,{ 0xA2,0x7F,0x30,0xA0,0x14,0x37,0xFE,0xDE } }; // 7E287845-BF7F-4CDB-A27F-30A01437FEDE
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix>{ 0x3279F335,0x0EF0,0x456B,{ 0x9A,0x21,0x49,0xBE,0xBE,0x8B,0x51,0xC2 } }; // 3279F335-0EF0-456B-9A21-49BEBE8B51C2
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterial>{ 0x462238DD,0x562E,0x4F6C,{ 0x88,0x2D,0xF4,0xD8,0x41,0xFD,0x63,0xC7 } }; // 462238DD-562E-4F6C-882D-F4D841FD63C7
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup>{ 0x8D946A5B,0x40F1,0x496D,{ 0xA5,0xFB,0x34,0x0A,0x5A,0x67,0x8E,0x30 } }; // 8D946A5B-40F1-496D-A5FB-340A5A678E30
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup2>{ 0x06E86D62,0x7D3B,0x41E1,{ 0x94,0x4C,0xBA,0xFD,0xE4,0x55,0x54,0x83 } }; // 06E86D62-7D3B-41E1-944C-BAFDE4555483
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroupFactory>{ 0xD08ECD13,0x92FF,0x43AA,{ 0xA6,0x27,0x8D,0x43,0xC2,0x2C,0x81,0x7E } }; // D08ECD13-92FF-43AA-A627-8D43C22C817E
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions>{ 0xBBFED397,0x2D74,0x46F7,{ 0xBE,0x85,0x99,0xA6,0x7B,0xBB,0x66,0x29 } }; // BBFED397-2D74-46F7-BE85-99A67BBB6629
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrinting3DMaterial>{ 0x378DB256,0xED62,0x4952,{ 0xB8,0x5B,0x03,0x56,0x7D,0x7C,0x46,0x5E } }; // 378DB256-ED62-4952-B85B-03567D7C465E
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrinting3DMesh>{ 0x192E90DC,0x0228,0x2E01,{ 0xBC,0x20,0xC5,0x29,0x0C,0xBF,0x32,0xC4 } }; // 192E90DC-0228-2E01-BC20-C5290CBF32C4
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult>{ 0x195671BA,0xE93A,0x4E8A,{ 0xA4,0x6F,0xDE,0xA8,0xE8,0x52,0x19,0x7E } }; // 195671BA-E93A-4E8A-A46F-DEA8E852197E
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrinting3DModel>{ 0x2D012EF0,0x52FB,0x919A,{ 0x77,0xB0,0x4B,0x1A,0x3B,0x80,0x32,0x4F } }; // 2D012EF0-52FB-919A-77B0-4B1A3B80324F
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrinting3DModel2>{ 0xC92069C7,0xC841,0x47F3,{ 0xA8,0x4E,0xA1,0x49,0xFD,0x08,0xB6,0x57 } }; // C92069C7-C841-47F3-A84E-A149FD08B657
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrinting3DModelTexture>{ 0x5DAFCF01,0xB59D,0x483C,{ 0x97,0xBB,0xA4,0xD5,0x46,0xD1,0xC7,0x5C } }; // 5DAFCF01-B59D-483C-97BB-A4D546D1C75C
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterial>{ 0x25A6254B,0xC6E9,0x484D,{ 0xA2,0x14,0xA2,0x5E,0x57,0x76,0xBA,0x62 } }; // 25A6254B-C6E9-484D-A214-A25E5776BA62
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup>{ 0xF0950519,0xAEB9,0x4515,{ 0xA3,0x9B,0xA0,0x88,0xFB,0xBB,0x27,0x7C } }; // F0950519-AEB9-4515-A39B-A088FBBB277C
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroupFactory>{ 0x323E196E,0xD4C6,0x451E,{ 0xA8,0x14,0x4D,0x78,0xA2,0x10,0xFE,0x53 } }; // 323E196E-D4C6-451E-A814-4D78A210FE53
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial>{ 0x8D844BFB,0x07E9,0x4986,{ 0x98,0x33,0x8D,0xD3,0xD4,0x8C,0x68,0x59 } }; // 8D844BFB-07E9-4986-9833-8DD3D48C6859
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup>{ 0x627D7CA7,0x6D90,0x4FB9,{ 0x9F,0xC4,0x9F,0xEF,0xF3,0xDF,0xA8,0x92 } }; // 627D7CA7-6D90-4FB9-9FC4-9FEFF3DFA892
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup2>{ 0x69FBDBBA,0xB12E,0x429B,{ 0x83,0x86,0xDF,0x52,0x84,0xF6,0xE8,0x0F } }; // 69FBDBBA-B12E-429B-8386-DF5284F6E80F
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroupFactory>{ 0xCBB049B0,0x468A,0x4C6F,{ 0xB2,0xA2,0x8E,0xB8,0xBA,0x8D,0xEA,0x48 } }; // CBB049B0-468A-4C6F-B2A2-8EB8BA8DEA48
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::IPrinting3DTextureResource>{ 0xA70DF32D,0x6AB1,0x44AE,{ 0xBC,0x45,0xA2,0x73,0x82,0xC0,0xD3,0x8C } }; // A70DF32D-6AB1-44AE-BC45-A27382C0D38C
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing3D::Print3DTaskSourceRequestedHandler>{ 0xE9175E70,0xC917,0x46DE,{ 0xBB,0x51,0xD9,0xA9,0x4D,0xB3,0x71,0x1F } }; // E9175E70-C917-46DE-BB51-D9A94DB3711F
    template <> struct default_interface<Windows::Graphics::Printing3D::Print3DManager>{ using type = Windows::Graphics::Printing3D::IPrint3DManager; };
    template <> struct default_interface<Windows::Graphics::Printing3D::Print3DTask>{ using type = Windows::Graphics::Printing3D::IPrint3DTask; };
    template <> struct default_interface<Windows::Graphics::Printing3D::Print3DTaskCompletedEventArgs>{ using type = Windows::Graphics::Printing3D::IPrint3DTaskCompletedEventArgs; };
    template <> struct default_interface<Windows::Graphics::Printing3D::Print3DTaskRequest>{ using type = Windows::Graphics::Printing3D::IPrint3DTaskRequest; };
    template <> struct default_interface<Windows::Graphics::Printing3D::Print3DTaskRequestedEventArgs>{ using type = Windows::Graphics::Printing3D::IPrint3DTaskRequestedEventArgs; };
    template <> struct default_interface<Windows::Graphics::Printing3D::Print3DTaskSourceChangedEventArgs>{ using type = Windows::Graphics::Printing3D::IPrint3DTaskSourceChangedEventArgs; };
    template <> struct default_interface<Windows::Graphics::Printing3D::Print3DTaskSourceRequestedArgs>{ using type = Windows::Graphics::Printing3D::IPrint3DTaskSourceRequestedArgs; };
    template <> struct default_interface<Windows::Graphics::Printing3D::Printing3D3MFPackage>{ using type = Windows::Graphics::Printing3D::IPrinting3D3MFPackage; };
    template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DBaseMaterial>{ using type = Windows::Graphics::Printing3D::IPrinting3DBaseMaterial; };
    template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup>{ using type = Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup; };
    template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DColorMaterial>{ using type = Windows::Graphics::Printing3D::IPrinting3DColorMaterial; };
    template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DColorMaterialGroup>{ using type = Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup; };
    template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DComponent>{ using type = Windows::Graphics::Printing3D::IPrinting3DComponent; };
    template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DComponentWithMatrix>{ using type = Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix; };
    template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DCompositeMaterial>{ using type = Windows::Graphics::Printing3D::IPrinting3DCompositeMaterial; };
    template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DCompositeMaterialGroup>{ using type = Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup; };
    template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DFaceReductionOptions>{ using type = Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions; };
    template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DMaterial>{ using type = Windows::Graphics::Printing3D::IPrinting3DMaterial; };
    template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DMesh>{ using type = Windows::Graphics::Printing3D::IPrinting3DMesh; };
    template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DMeshVerificationResult>{ using type = Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult; };
    template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DModel>{ using type = Windows::Graphics::Printing3D::IPrinting3DModel; };
    template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DModelTexture>{ using type = Windows::Graphics::Printing3D::IPrinting3DModelTexture; };
    template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterial>{ using type = Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterial; };
    template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterialGroup>{ using type = Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup; };
    template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterial>{ using type = Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial; };
    template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterialGroup>{ using type = Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup; };
    template <> struct default_interface<Windows::Graphics::Printing3D::Printing3DTextureResource>{ using type = Windows::Graphics::Printing3D::IPrinting3DTextureResource; };
    template <> struct abi<Windows::Graphics::Printing3D::IPrint3DManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_TaskRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TaskRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrint3DManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
            virtual int32_t __stdcall ShowPrintUIAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrint3DTask>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Source(void**) noexcept = 0;
            virtual int32_t __stdcall add_Submitting(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Submitting(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Completed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Completed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SourceChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SourceChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrint3DTaskCompletedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Completion(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedStatus(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrint3DTaskRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateTask(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrint3DTaskRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrint3DTaskSourceChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Source(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrint3DTaskSourceRequestedArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetSource(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrinting3D3MFPackage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SaveAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_PrintTicket(void**) noexcept = 0;
            virtual int32_t __stdcall put_PrintTicket(void*) noexcept = 0;
            virtual int32_t __stdcall get_ModelPart(void**) noexcept = 0;
            virtual int32_t __stdcall put_ModelPart(void*) noexcept = 0;
            virtual int32_t __stdcall get_Thumbnail(void**) noexcept = 0;
            virtual int32_t __stdcall put_Thumbnail(void*) noexcept = 0;
            virtual int32_t __stdcall get_Textures(void**) noexcept = 0;
            virtual int32_t __stdcall LoadModelFromPackageAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SaveModelToPackageAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrinting3D3MFPackage2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Compression(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Compression(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrinting3D3MFPackageStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall LoadAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DBaseMaterial>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall put_Name(void*) noexcept = 0;
            virtual int32_t __stdcall get_Color(void**) noexcept = 0;
            virtual int32_t __stdcall put_Color(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Bases(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaterialGroupId(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroupFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Abs(void**) noexcept = 0;
            virtual int32_t __stdcall get_Pla(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DColorMaterial>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Value(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Value(uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DColorMaterial2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Color(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_Color(struct struct_Windows_UI_Color) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Colors(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaterialGroupId(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroupFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DComponent>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Mesh(void**) noexcept = 0;
            virtual int32_t __stdcall put_Mesh(void*) noexcept = 0;
            virtual int32_t __stdcall get_Components(void**) noexcept = 0;
            virtual int32_t __stdcall get_Thumbnail(void**) noexcept = 0;
            virtual int32_t __stdcall put_Thumbnail(void*) noexcept = 0;
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Type(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall put_Name(void*) noexcept = 0;
            virtual int32_t __stdcall get_PartNumber(void**) noexcept = 0;
            virtual int32_t __stdcall put_PartNumber(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Component(void**) noexcept = 0;
            virtual int32_t __stdcall put_Component(void*) noexcept = 0;
            virtual int32_t __stdcall get_Matrix(Windows::Foundation::Numerics::float4x4*) noexcept = 0;
            virtual int32_t __stdcall put_Matrix(Windows::Foundation::Numerics::float4x4) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterial>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Values(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Composites(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaterialGroupId(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaterialIndices(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BaseMaterialGroup(void**) noexcept = 0;
            virtual int32_t __stdcall put_BaseMaterialGroup(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroupFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaxReductionArea(double*) noexcept = 0;
            virtual int32_t __stdcall put_MaxReductionArea(double) noexcept = 0;
            virtual int32_t __stdcall get_TargetTriangleCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TargetTriangleCount(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_MaxEdgeLength(double*) noexcept = 0;
            virtual int32_t __stdcall put_MaxEdgeLength(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DMaterial>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BaseGroups(void**) noexcept = 0;
            virtual int32_t __stdcall get_ColorGroups(void**) noexcept = 0;
            virtual int32_t __stdcall get_Texture2CoordGroups(void**) noexcept = 0;
            virtual int32_t __stdcall get_CompositeGroups(void**) noexcept = 0;
            virtual int32_t __stdcall get_MultiplePropertyGroups(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DMesh>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_VertexCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_VertexCount(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_IndexCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_IndexCount(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_VertexPositionsDescription(struct struct_Windows_Graphics_Printing3D_Printing3DBufferDescription*) noexcept = 0;
            virtual int32_t __stdcall put_VertexPositionsDescription(struct struct_Windows_Graphics_Printing3D_Printing3DBufferDescription) noexcept = 0;
            virtual int32_t __stdcall get_VertexNormalsDescription(struct struct_Windows_Graphics_Printing3D_Printing3DBufferDescription*) noexcept = 0;
            virtual int32_t __stdcall put_VertexNormalsDescription(struct struct_Windows_Graphics_Printing3D_Printing3DBufferDescription) noexcept = 0;
            virtual int32_t __stdcall get_TriangleIndicesDescription(struct struct_Windows_Graphics_Printing3D_Printing3DBufferDescription*) noexcept = 0;
            virtual int32_t __stdcall put_TriangleIndicesDescription(struct struct_Windows_Graphics_Printing3D_Printing3DBufferDescription) noexcept = 0;
            virtual int32_t __stdcall get_TriangleMaterialIndicesDescription(struct struct_Windows_Graphics_Printing3D_Printing3DBufferDescription*) noexcept = 0;
            virtual int32_t __stdcall put_TriangleMaterialIndicesDescription(struct struct_Windows_Graphics_Printing3D_Printing3DBufferDescription) noexcept = 0;
            virtual int32_t __stdcall GetVertexPositions(void**) noexcept = 0;
            virtual int32_t __stdcall CreateVertexPositions(uint32_t) noexcept = 0;
            virtual int32_t __stdcall GetVertexNormals(void**) noexcept = 0;
            virtual int32_t __stdcall CreateVertexNormals(uint32_t) noexcept = 0;
            virtual int32_t __stdcall GetTriangleIndices(void**) noexcept = 0;
            virtual int32_t __stdcall CreateTriangleIndices(uint32_t) noexcept = 0;
            virtual int32_t __stdcall GetTriangleMaterialIndices(void**) noexcept = 0;
            virtual int32_t __stdcall CreateTriangleMaterialIndices(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_BufferDescriptionSet(void**) noexcept = 0;
            virtual int32_t __stdcall get_BufferSet(void**) noexcept = 0;
            virtual int32_t __stdcall VerifyAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsValid(bool*) noexcept = 0;
            virtual int32_t __stdcall get_NonmanifoldTriangles(void**) noexcept = 0;
            virtual int32_t __stdcall get_ReversedNormalTriangles(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DModel>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Unit(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Unit(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Textures(void**) noexcept = 0;
            virtual int32_t __stdcall get_Meshes(void**) noexcept = 0;
            virtual int32_t __stdcall get_Components(void**) noexcept = 0;
            virtual int32_t __stdcall get_Material(void**) noexcept = 0;
            virtual int32_t __stdcall put_Material(void*) noexcept = 0;
            virtual int32_t __stdcall get_Build(void**) noexcept = 0;
            virtual int32_t __stdcall put_Build(void*) noexcept = 0;
            virtual int32_t __stdcall get_Version(void**) noexcept = 0;
            virtual int32_t __stdcall put_Version(void*) noexcept = 0;
            virtual int32_t __stdcall get_RequiredExtensions(void**) noexcept = 0;
            virtual int32_t __stdcall get_Metadata(void**) noexcept = 0;
            virtual int32_t __stdcall RepairAsync(void**) noexcept = 0;
            virtual int32_t __stdcall Clone(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DModel2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryPartialRepairAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryPartialRepairWithTimeAsync(int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall TryReduceFacesAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryReduceFacesWithOptionsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryReduceFacesWithOptionsAndTimeAsync(void*, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall RepairWithProgressAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DModelTexture>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TextureResource(void**) noexcept = 0;
            virtual int32_t __stdcall put_TextureResource(void*) noexcept = 0;
            virtual int32_t __stdcall get_TileStyleU(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TileStyleU(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_TileStyleV(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TileStyleV(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterial>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaterialIndices(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MultipleProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaterialGroupIndices(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaterialGroupId(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroupFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Texture(void**) noexcept = 0;
            virtual int32_t __stdcall put_Texture(void*) noexcept = 0;
            virtual int32_t __stdcall get_U(double*) noexcept = 0;
            virtual int32_t __stdcall put_U(double) noexcept = 0;
            virtual int32_t __stdcall get_V(double*) noexcept = 0;
            virtual int32_t __stdcall put_V(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Texture2Coords(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaterialGroupId(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Texture(void**) noexcept = 0;
            virtual int32_t __stdcall put_Texture(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroupFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::IPrinting3DTextureResource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TextureData(void**) noexcept = 0;
            virtual int32_t __stdcall put_TextureData(void*) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall put_Name(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing3D::Print3DTaskSourceRequestedHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrint3DManager
    {
        WINRT_IMPL_AUTO(winrt::event_token) TaskRequested(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DManager, Windows::Graphics::Printing3D::Print3DTaskRequestedEventArgs> const& eventHandler) const;
        using TaskRequested_revoker = impl::event_revoker<Windows::Graphics::Printing3D::IPrint3DManager, &impl::abi_t<Windows::Graphics::Printing3D::IPrint3DManager>::remove_TaskRequested>;
        [[nodiscard]] TaskRequested_revoker TaskRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DManager, Windows::Graphics::Printing3D::Print3DTaskRequestedEventArgs> const& eventHandler) const;
        WINRT_IMPL_AUTO(void) TaskRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrint3DManager>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrint3DManager<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrint3DManagerStatics
    {
        WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Print3DManager) GetForCurrentView() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) ShowPrintUIAsync() const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrint3DManagerStatics>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrint3DManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrint3DTask
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Printing3D3MFPackage) Source() const;
        WINRT_IMPL_AUTO(winrt::event_token) Submitting(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::Foundation::IInspectable> const& eventHandler) const;
        using Submitting_revoker = impl::event_revoker<Windows::Graphics::Printing3D::IPrint3DTask, &impl::abi_t<Windows::Graphics::Printing3D::IPrint3DTask>::remove_Submitting>;
        [[nodiscard]] Submitting_revoker Submitting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::Foundation::IInspectable> const& eventHandler) const;
        WINRT_IMPL_AUTO(void) Submitting(winrt::event_token const& eventCookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Completed(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::Graphics::Printing3D::Print3DTaskCompletedEventArgs> const& eventHandler) const;
        using Completed_revoker = impl::event_revoker<Windows::Graphics::Printing3D::IPrint3DTask, &impl::abi_t<Windows::Graphics::Printing3D::IPrint3DTask>::remove_Completed>;
        [[nodiscard]] Completed_revoker Completed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::Graphics::Printing3D::Print3DTaskCompletedEventArgs> const& eventHandler) const;
        WINRT_IMPL_AUTO(void) Completed(winrt::event_token const& eventCookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) SourceChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::Graphics::Printing3D::Print3DTaskSourceChangedEventArgs> const& eventHandler) const;
        using SourceChanged_revoker = impl::event_revoker<Windows::Graphics::Printing3D::IPrint3DTask, &impl::abi_t<Windows::Graphics::Printing3D::IPrint3DTask>::remove_SourceChanged>;
        [[nodiscard]] SourceChanged_revoker SourceChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing3D::Print3DTask, Windows::Graphics::Printing3D::Print3DTaskSourceChangedEventArgs> const& eventHandler) const;
        WINRT_IMPL_AUTO(void) SourceChanged(winrt::event_token const& eventCookie) const noexcept;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrint3DTask>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrint3DTask<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrint3DTaskCompletedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Print3DTaskCompletion) Completion() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Print3DTaskDetail) ExtendedStatus() const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrint3DTaskCompletedEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrint3DTaskCompletedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrint3DTaskRequest
    {
        WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Print3DTask) CreateTask(param::hstring const& title, param::hstring const& printerId, Windows::Graphics::Printing3D::Print3DTaskSourceRequestedHandler const& handler) const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrint3DTaskRequest>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrint3DTaskRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrint3DTaskRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Print3DTaskRequest) Request() const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrint3DTaskRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrint3DTaskRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrint3DTaskSourceChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Printing3D3MFPackage) Source() const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrint3DTaskSourceChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrint3DTaskSourceChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrint3DTaskSourceRequestedArgs
    {
        WINRT_IMPL_AUTO(void) SetSource(Windows::Graphics::Printing3D::Printing3D3MFPackage const& source) const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrint3DTaskSourceRequestedArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrint3DTaskSourceRequestedArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackage
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream>) SaveAsync() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IRandomAccessStream) PrintTicket() const;
        WINRT_IMPL_AUTO(void) PrintTicket(Windows::Storage::Streams::IRandomAccessStream const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IRandomAccessStream) ModelPart() const;
        WINRT_IMPL_AUTO(void) ModelPart(Windows::Storage::Streams::IRandomAccessStream const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Printing3DTextureResource) Thumbnail() const;
        WINRT_IMPL_AUTO(void) Thumbnail(Windows::Graphics::Printing3D::Printing3DTextureResource const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DTextureResource>) Textures() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing3D::Printing3DModel>) LoadModelFromPackageAsync(Windows::Storage::Streams::IRandomAccessStream const& value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) SaveModelToPackageAsync(Windows::Graphics::Printing3D::Printing3DModel const& value) const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrinting3D3MFPackage>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackage<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackage2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Printing3DPackageCompression) Compression() const;
        WINRT_IMPL_AUTO(void) Compression(Windows::Graphics::Printing3D::Printing3DPackageCompression const& value) const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrinting3D3MFPackage2>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackage2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackageStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing3D::Printing3D3MFPackage>) LoadAsync(Windows::Storage::Streams::IRandomAccessStream const& value) const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrinting3D3MFPackageStatics>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3D3MFPackageStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterial
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        WINRT_IMPL_AUTO(void) Name(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Printing3DColorMaterial) Color() const;
        WINRT_IMPL_AUTO(void) Color(Windows::Graphics::Printing3D::Printing3DColorMaterial const& value) const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DBaseMaterial>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterial<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterialGroup
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DBaseMaterial>) Bases() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaterialGroupId() const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterialGroup<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterialGroupFactory
    {
        WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup) Create(uint32_t MaterialGroupId) const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroupFactory>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterialGroupFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterialStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Abs() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Pla() const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DBaseMaterialStatics>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DBaseMaterialStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrinting3DColorMaterial
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Value() const;
        WINRT_IMPL_AUTO(void) Value(uint32_t value) const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DColorMaterial>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DColorMaterial<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrinting3DColorMaterial2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Color() const;
        WINRT_IMPL_AUTO(void) Color(Windows::UI::Color const& value) const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DColorMaterial2>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DColorMaterial2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrinting3DColorMaterialGroup
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DColorMaterial>) Colors() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaterialGroupId() const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DColorMaterialGroup<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrinting3DColorMaterialGroupFactory
    {
        WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Printing3DColorMaterialGroup) Create(uint32_t MaterialGroupId) const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroupFactory>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DColorMaterialGroupFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrinting3DComponent
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Printing3DMesh) Mesh() const;
        WINRT_IMPL_AUTO(void) Mesh(Windows::Graphics::Printing3D::Printing3DMesh const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DComponentWithMatrix>) Components() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Printing3DTextureResource) Thumbnail() const;
        WINRT_IMPL_AUTO(void) Thumbnail(Windows::Graphics::Printing3D::Printing3DTextureResource const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Printing3DObjectType) Type() const;
        WINRT_IMPL_AUTO(void) Type(Windows::Graphics::Printing3D::Printing3DObjectType const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        WINRT_IMPL_AUTO(void) Name(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) PartNumber() const;
        WINRT_IMPL_AUTO(void) PartNumber(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DComponent>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DComponent<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrinting3DComponentWithMatrix
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Printing3DComponent) Component() const;
        WINRT_IMPL_AUTO(void) Component(Windows::Graphics::Printing3D::Printing3DComponent const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float4x4) Matrix() const;
        WINRT_IMPL_AUTO(void) Matrix(Windows::Foundation::Numerics::float4x4 const& value) const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DComponentWithMatrix<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterial
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<double>) Values() const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterial>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterial<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterialGroup
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DCompositeMaterial>) Composites() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaterialGroupId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<uint32_t>) MaterialIndices() const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterialGroup<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterialGroup2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup) BaseMaterialGroup() const;
        WINRT_IMPL_AUTO(void) BaseMaterialGroup(Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup const& value) const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup2>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterialGroup2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterialGroupFactory
    {
        WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Printing3DCompositeMaterialGroup) Create(uint32_t MaterialGroupId) const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroupFactory>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterialGroupFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrinting3DFaceReductionOptions
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) MaxReductionArea() const;
        WINRT_IMPL_AUTO(void) MaxReductionArea(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) TargetTriangleCount() const;
        WINRT_IMPL_AUTO(void) TargetTriangleCount(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) MaxEdgeLength() const;
        WINRT_IMPL_AUTO(void) MaxEdgeLength(double value) const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DFaceReductionOptions<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrinting3DMaterial
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DBaseMaterialGroup>) BaseGroups() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DColorMaterialGroup>) ColorGroups() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterialGroup>) Texture2CoordGroups() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DCompositeMaterialGroup>) CompositeGroups() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterialGroup>) MultiplePropertyGroups() const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DMaterial>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DMaterial<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrinting3DMesh
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) VertexCount() const;
        WINRT_IMPL_AUTO(void) VertexCount(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) IndexCount() const;
        WINRT_IMPL_AUTO(void) IndexCount(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Printing3DBufferDescription) VertexPositionsDescription() const;
        WINRT_IMPL_AUTO(void) VertexPositionsDescription(Windows::Graphics::Printing3D::Printing3DBufferDescription const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Printing3DBufferDescription) VertexNormalsDescription() const;
        WINRT_IMPL_AUTO(void) VertexNormalsDescription(Windows::Graphics::Printing3D::Printing3DBufferDescription const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Printing3DBufferDescription) TriangleIndicesDescription() const;
        WINRT_IMPL_AUTO(void) TriangleIndicesDescription(Windows::Graphics::Printing3D::Printing3DBufferDescription const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Printing3DBufferDescription) TriangleMaterialIndicesDescription() const;
        WINRT_IMPL_AUTO(void) TriangleMaterialIndicesDescription(Windows::Graphics::Printing3D::Printing3DBufferDescription const& value) const;
        WINRT_IMPL_AUTO(Windows::Storage::Streams::IBuffer) GetVertexPositions() const;
        WINRT_IMPL_AUTO(void) CreateVertexPositions(uint32_t value) const;
        WINRT_IMPL_AUTO(Windows::Storage::Streams::IBuffer) GetVertexNormals() const;
        WINRT_IMPL_AUTO(void) CreateVertexNormals(uint32_t value) const;
        WINRT_IMPL_AUTO(Windows::Storage::Streams::IBuffer) GetTriangleIndices() const;
        WINRT_IMPL_AUTO(void) CreateTriangleIndices(uint32_t value) const;
        WINRT_IMPL_AUTO(Windows::Storage::Streams::IBuffer) GetTriangleMaterialIndices() const;
        WINRT_IMPL_AUTO(void) CreateTriangleMaterialIndices(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IPropertySet) BufferDescriptionSet() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IPropertySet) BufferSet() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing3D::Printing3DMeshVerificationResult>) VerifyAsync(Windows::Graphics::Printing3D::Printing3DMeshVerificationMode const& value) const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DMesh>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DMesh<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrinting3DMeshVerificationResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsValid() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<uint32_t>) NonmanifoldTriangles() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<uint32_t>) ReversedNormalTriangles() const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DMeshVerificationResult<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrinting3DModel
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Printing3DModelUnit) Unit() const;
        WINRT_IMPL_AUTO(void) Unit(Windows::Graphics::Printing3D::Printing3DModelUnit const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DModelTexture>) Textures() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DMesh>) Meshes() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DComponent>) Components() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Printing3DMaterial) Material() const;
        WINRT_IMPL_AUTO(void) Material(Windows::Graphics::Printing3D::Printing3DMaterial const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Printing3DComponent) Build() const;
        WINRT_IMPL_AUTO(void) Build(Windows::Graphics::Printing3D::Printing3DComponent const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Version() const;
        WINRT_IMPL_AUTO(void) Version(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) RequiredExtensions() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMap<hstring, hstring>) Metadata() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) RepairAsync() const;
        WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Printing3DModel) Clone() const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DModel>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DModel<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrinting3DModel2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) TryPartialRepairAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) TryPartialRepairAsync(Windows::Foundation::TimeSpan const& maxWaitTime) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<bool, double>) TryReduceFacesAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<bool, double>) TryReduceFacesAsync(Windows::Graphics::Printing3D::Printing3DFaceReductionOptions const& printing3DFaceReductionOptions) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<bool, double>) TryReduceFacesAsync(Windows::Graphics::Printing3D::Printing3DFaceReductionOptions const& printing3DFaceReductionOptions, Windows::Foundation::TimeSpan const& maxWait) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<bool, double>) RepairWithProgressAsync() const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DModel2>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DModel2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrinting3DModelTexture
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Printing3DTextureResource) TextureResource() const;
        WINRT_IMPL_AUTO(void) TextureResource(Windows::Graphics::Printing3D::Printing3DTextureResource const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior) TileStyleU() const;
        WINRT_IMPL_AUTO(void) TileStyleU(Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior) TileStyleV() const;
        WINRT_IMPL_AUTO(void) TileStyleV(Windows::Graphics::Printing3D::Printing3DTextureEdgeBehavior const& value) const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DModelTexture>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DModelTexture<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrinting3DMultiplePropertyMaterial
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<uint32_t>) MaterialIndices() const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterial>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DMultiplePropertyMaterial<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrinting3DMultiplePropertyMaterialGroup
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterial>) MultipleProperties() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<uint32_t>) MaterialGroupIndices() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaterialGroupId() const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DMultiplePropertyMaterialGroup<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrinting3DMultiplePropertyMaterialGroupFactory
    {
        WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Printing3DMultiplePropertyMaterialGroup) Create(uint32_t MaterialGroupId) const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroupFactory>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DMultiplePropertyMaterialGroupFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterial
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Printing3DModelTexture) Texture() const;
        WINRT_IMPL_AUTO(void) Texture(Windows::Graphics::Printing3D::Printing3DModelTexture const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) U() const;
        WINRT_IMPL_AUTO(void) U(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) V() const;
        WINRT_IMPL_AUTO(void) V(double value) const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterial<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterialGroup
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterial>) Texture2Coords() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaterialGroupId() const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterialGroup<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterialGroup2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Printing3DModelTexture) Texture() const;
        WINRT_IMPL_AUTO(void) Texture(Windows::Graphics::Printing3D::Printing3DModelTexture const& value) const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup2>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterialGroup2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterialGroupFactory
    {
        WINRT_IMPL_AUTO(Windows::Graphics::Printing3D::Printing3DTexture2CoordMaterialGroup) Create(uint32_t MaterialGroupId) const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroupFactory>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterialGroupFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing3D_IPrinting3DTextureResource
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IRandomAccessStreamWithContentType) TextureData() const;
        WINRT_IMPL_AUTO(void) TextureData(Windows::Storage::Streams::IRandomAccessStreamWithContentType const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        WINRT_IMPL_AUTO(void) Name(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Graphics::Printing3D::IPrinting3DTextureResource>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing3D_IPrinting3DTextureResource<D>;
    };
    struct struct_Windows_Graphics_Printing3D_Printing3DBufferDescription
    {
        int32_t Format;
        uint32_t Stride;
    };
    template <> struct abi<Windows::Graphics::Printing3D::Printing3DBufferDescription>
    {
        using type = struct_Windows_Graphics_Printing3D_Printing3DBufferDescription;
    };
}
#endif
