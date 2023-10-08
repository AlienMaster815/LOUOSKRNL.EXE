// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Web_Http_2_H
#define WINRT_Windows_Web_Http_2_H
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Web.Http.Filters.2.h"
#include "winrt/impl/Windows.Web.Http.1.h"
WINRT_EXPORT namespace winrt::Windows::Web::Http
{
    struct HttpProgress
    {
        winrt::Windows::Web::Http::HttpProgressStage Stage;
        uint64_t BytesSent;
        winrt::Windows::Foundation::IReference<uint64_t> TotalBytesToSend;
        uint64_t BytesReceived;
        winrt::Windows::Foundation::IReference<uint64_t> TotalBytesToReceive;
        uint32_t Retries;
    };
    inline bool operator==(HttpProgress const& left, HttpProgress const& right) noexcept
    {
        return left.Stage == right.Stage && left.BytesSent == right.BytesSent && left.TotalBytesToSend == right.TotalBytesToSend && left.BytesReceived == right.BytesReceived && left.TotalBytesToReceive == right.TotalBytesToReceive && left.Retries == right.Retries;
    }
    inline bool operator!=(HttpProgress const& left, HttpProgress const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) HttpBufferContent : winrt::Windows::Web::Http::IHttpContent,
        impl::require<HttpBufferContent, winrt::Windows::Foundation::IStringable>
    {
        HttpBufferContent(std::nullptr_t) noexcept {}
        HttpBufferContent(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Http::IHttpContent(ptr, take_ownership_from_abi) {}
        explicit HttpBufferContent(winrt::Windows::Storage::Streams::IBuffer const& content);
        HttpBufferContent(winrt::Windows::Storage::Streams::IBuffer const& content, uint32_t offset, uint32_t count);
    };
    struct __declspec(empty_bases) HttpClient : winrt::Windows::Web::Http::IHttpClient,
        impl::require<HttpClient, winrt::Windows::Web::Http::IHttpClient2, winrt::Windows::Web::Http::IHttpClient3, winrt::Windows::Foundation::IClosable, winrt::Windows::Foundation::IStringable>
    {
        HttpClient(std::nullptr_t) noexcept {}
        HttpClient(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Http::IHttpClient(ptr, take_ownership_from_abi) {}
        HttpClient();
        explicit HttpClient(winrt::Windows::Web::Http::Filters::IHttpFilter const& filter);
    };
    struct __declspec(empty_bases) HttpCookie : winrt::Windows::Web::Http::IHttpCookie,
        impl::require<HttpCookie, winrt::Windows::Foundation::IStringable>
    {
        HttpCookie(std::nullptr_t) noexcept {}
        HttpCookie(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Http::IHttpCookie(ptr, take_ownership_from_abi) {}
        HttpCookie(param::hstring const& name, param::hstring const& domain, param::hstring const& path);
    };
    struct __declspec(empty_bases) HttpCookieCollection : winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Web::Http::HttpCookie>
    {
        HttpCookieCollection(std::nullptr_t) noexcept {}
        HttpCookieCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Web::Http::HttpCookie>(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HttpCookieManager : winrt::Windows::Web::Http::IHttpCookieManager
    {
        HttpCookieManager(std::nullptr_t) noexcept {}
        HttpCookieManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Http::IHttpCookieManager(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HttpFormUrlEncodedContent : winrt::Windows::Web::Http::IHttpContent,
        impl::require<HttpFormUrlEncodedContent, winrt::Windows::Foundation::IStringable>
    {
        HttpFormUrlEncodedContent(std::nullptr_t) noexcept {}
        HttpFormUrlEncodedContent(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Http::IHttpContent(ptr, take_ownership_from_abi) {}
        explicit HttpFormUrlEncodedContent(param::iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& content);
    };
    struct __declspec(empty_bases) HttpGetBufferResult : winrt::Windows::Web::Http::IHttpGetBufferResult,
        impl::require<HttpGetBufferResult, winrt::Windows::Foundation::IClosable, winrt::Windows::Foundation::IStringable>
    {
        HttpGetBufferResult(std::nullptr_t) noexcept {}
        HttpGetBufferResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Http::IHttpGetBufferResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HttpGetInputStreamResult : winrt::Windows::Web::Http::IHttpGetInputStreamResult,
        impl::require<HttpGetInputStreamResult, winrt::Windows::Foundation::IClosable, winrt::Windows::Foundation::IStringable>
    {
        HttpGetInputStreamResult(std::nullptr_t) noexcept {}
        HttpGetInputStreamResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Http::IHttpGetInputStreamResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HttpGetStringResult : winrt::Windows::Web::Http::IHttpGetStringResult,
        impl::require<HttpGetStringResult, winrt::Windows::Foundation::IClosable, winrt::Windows::Foundation::IStringable>
    {
        HttpGetStringResult(std::nullptr_t) noexcept {}
        HttpGetStringResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Http::IHttpGetStringResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HttpMethod : winrt::Windows::Web::Http::IHttpMethod,
        impl::require<HttpMethod, winrt::Windows::Foundation::IStringable>
    {
        HttpMethod(std::nullptr_t) noexcept {}
        HttpMethod(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Http::IHttpMethod(ptr, take_ownership_from_abi) {}
        explicit HttpMethod(param::hstring const& method);
        [[nodiscard]] static auto Delete();
        [[nodiscard]] static auto Get();
        [[nodiscard]] static auto Head();
        [[nodiscard]] static auto Options();
        [[nodiscard]] static auto Patch();
        [[nodiscard]] static auto Post();
        [[nodiscard]] static auto Put();
    };
    struct __declspec(empty_bases) HttpMultipartContent : winrt::Windows::Web::Http::IHttpContent,
        impl::require<HttpMultipartContent, winrt::Windows::Web::Http::IHttpMultipartContent, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Web::Http::IHttpContent>, winrt::Windows::Foundation::IStringable>
    {
        HttpMultipartContent(std::nullptr_t) noexcept {}
        HttpMultipartContent(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Http::IHttpContent(ptr, take_ownership_from_abi) {}
        HttpMultipartContent();
        explicit HttpMultipartContent(param::hstring const& subtype);
        HttpMultipartContent(param::hstring const& subtype, param::hstring const& boundary);
    };
    struct __declspec(empty_bases) HttpMultipartFormDataContent : winrt::Windows::Web::Http::IHttpContent,
        impl::require<HttpMultipartFormDataContent, winrt::Windows::Web::Http::IHttpMultipartFormDataContent, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Web::Http::IHttpContent>, winrt::Windows::Foundation::IStringable>
    {
        HttpMultipartFormDataContent(std::nullptr_t) noexcept {}
        HttpMultipartFormDataContent(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Http::IHttpContent(ptr, take_ownership_from_abi) {}
        HttpMultipartFormDataContent();
        explicit HttpMultipartFormDataContent(param::hstring const& boundary);
    };
    struct __declspec(empty_bases) HttpRequestMessage : winrt::Windows::Web::Http::IHttpRequestMessage,
        impl::require<HttpRequestMessage, winrt::Windows::Web::Http::IHttpRequestMessage2, winrt::Windows::Foundation::IClosable, winrt::Windows::Foundation::IStringable>
    {
        HttpRequestMessage(std::nullptr_t) noexcept {}
        HttpRequestMessage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Http::IHttpRequestMessage(ptr, take_ownership_from_abi) {}
        HttpRequestMessage();
        HttpRequestMessage(winrt::Windows::Web::Http::HttpMethod const& method, winrt::Windows::Foundation::Uri const& uri);
    };
    struct __declspec(empty_bases) HttpRequestResult : winrt::Windows::Web::Http::IHttpRequestResult,
        impl::require<HttpRequestResult, winrt::Windows::Foundation::IClosable, winrt::Windows::Foundation::IStringable>
    {
        HttpRequestResult(std::nullptr_t) noexcept {}
        HttpRequestResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Http::IHttpRequestResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HttpResponseMessage : winrt::Windows::Web::Http::IHttpResponseMessage,
        impl::require<HttpResponseMessage, winrt::Windows::Foundation::IClosable, winrt::Windows::Foundation::IStringable>
    {
        HttpResponseMessage(std::nullptr_t) noexcept {}
        HttpResponseMessage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Http::IHttpResponseMessage(ptr, take_ownership_from_abi) {}
        HttpResponseMessage();
        explicit HttpResponseMessage(winrt::Windows::Web::Http::HttpStatusCode const& statusCode);
    };
    struct __declspec(empty_bases) HttpStreamContent : winrt::Windows::Web::Http::IHttpContent,
        impl::require<HttpStreamContent, winrt::Windows::Foundation::IStringable>
    {
        HttpStreamContent(std::nullptr_t) noexcept {}
        HttpStreamContent(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Http::IHttpContent(ptr, take_ownership_from_abi) {}
        explicit HttpStreamContent(winrt::Windows::Storage::Streams::IInputStream const& content);
    };
    struct __declspec(empty_bases) HttpStringContent : winrt::Windows::Web::Http::IHttpContent,
        impl::require<HttpStringContent, winrt::Windows::Foundation::IStringable>
    {
        HttpStringContent(std::nullptr_t) noexcept {}
        HttpStringContent(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Http::IHttpContent(ptr, take_ownership_from_abi) {}
        explicit HttpStringContent(param::hstring const& content);
        HttpStringContent(param::hstring const& content, winrt::Windows::Storage::Streams::UnicodeEncoding const& encoding);
        HttpStringContent(param::hstring const& content, winrt::Windows::Storage::Streams::UnicodeEncoding const& encoding, param::hstring const& mediaType);
    };
    struct __declspec(empty_bases) HttpTransportInformation : winrt::Windows::Web::Http::IHttpTransportInformation,
        impl::require<HttpTransportInformation, winrt::Windows::Foundation::IStringable>
    {
        HttpTransportInformation(std::nullptr_t) noexcept {}
        HttpTransportInformation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Http::IHttpTransportInformation(ptr, take_ownership_from_abi) {}
    };
}
#endif
