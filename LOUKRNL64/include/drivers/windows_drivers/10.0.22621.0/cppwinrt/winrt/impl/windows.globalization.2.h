// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Globalization_2_H
#define WINRT_Windows_Globalization_2_H
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Globalization.1.h"
WINRT_EXPORT namespace winrt::Windows::Globalization
{
    struct ApplicationLanguages
    {
        ApplicationLanguages() = delete;
        [[nodiscard]] static auto PrimaryLanguageOverride();
        static auto PrimaryLanguageOverride(param::hstring const& value);
        [[nodiscard]] static auto Languages();
        [[nodiscard]] static auto ManifestLanguages();
        static auto GetLanguagesForUser(winrt::Windows::System::User const& user);
    };
    struct __declspec(empty_bases) Calendar : winrt::Windows::Globalization::ICalendar,
        impl::require<Calendar, winrt::Windows::Globalization::ITimeZoneOnCalendar>
    {
        Calendar(std::nullptr_t) noexcept {}
        Calendar(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Globalization::ICalendar(ptr, take_ownership_from_abi) {}
        Calendar();
        explicit Calendar(param::iterable<hstring> const& languages);
        Calendar(param::iterable<hstring> const& languages, param::hstring const& calendar, param::hstring const& clock);
        Calendar(param::iterable<hstring> const& languages, param::hstring const& calendar, param::hstring const& clock, param::hstring const& timeZoneId);
    };
    struct CalendarIdentifiers
    {
        CalendarIdentifiers() = delete;
        [[nodiscard]] static auto Gregorian();
        [[nodiscard]] static auto Hebrew();
        [[nodiscard]] static auto Hijri();
        [[nodiscard]] static auto Japanese();
        [[nodiscard]] static auto Julian();
        [[nodiscard]] static auto Korean();
        [[nodiscard]] static auto Taiwan();
        [[nodiscard]] static auto Thai();
        [[nodiscard]] static auto UmAlQura();
        [[nodiscard]] static auto Persian();
        [[nodiscard]] static auto ChineseLunar();
        [[nodiscard]] static auto JapaneseLunar();
        [[nodiscard]] static auto KoreanLunar();
        [[nodiscard]] static auto TaiwanLunar();
        [[nodiscard]] static auto VietnameseLunar();
    };
    struct ClockIdentifiers
    {
        ClockIdentifiers() = delete;
        [[nodiscard]] static auto TwelveHour();
        [[nodiscard]] static auto TwentyFourHour();
    };
    struct __declspec(empty_bases) CurrencyAmount : winrt::Windows::Globalization::ICurrencyAmount
    {
        CurrencyAmount(std::nullptr_t) noexcept {}
        CurrencyAmount(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Globalization::ICurrencyAmount(ptr, take_ownership_from_abi) {}
        CurrencyAmount(param::hstring const& amount, param::hstring const& currency);
    };
    struct CurrencyIdentifiers
    {
        CurrencyIdentifiers() = delete;
        [[nodiscard]] static auto AED();
        [[nodiscard]] static auto AFN();
        [[nodiscard]] static auto ALL();
        [[nodiscard]] static auto AMD();
        [[nodiscard]] static auto ANG();
        [[nodiscard]] static auto AOA();
        [[nodiscard]] static auto ARS();
        [[nodiscard]] static auto AUD();
        [[nodiscard]] static auto AWG();
        [[nodiscard]] static auto AZN();
        [[nodiscard]] static auto BAM();
        [[nodiscard]] static auto BBD();
        [[nodiscard]] static auto BDT();
        [[nodiscard]] static auto BGN();
        [[nodiscard]] static auto BHD();
        [[nodiscard]] static auto BIF();
        [[nodiscard]] static auto BMD();
        [[nodiscard]] static auto BND();
        [[nodiscard]] static auto BOB();
        [[nodiscard]] static auto BRL();
        [[nodiscard]] static auto BSD();
        [[nodiscard]] static auto BTN();
        [[nodiscard]] static auto BWP();
        [[nodiscard]] static auto BYR();
        [[nodiscard]] static auto BZD();
        [[nodiscard]] static auto CAD();
        [[nodiscard]] static auto CDF();
        [[nodiscard]] static auto CHF();
        [[nodiscard]] static auto CLP();
        [[nodiscard]] static auto CNY();
        [[nodiscard]] static auto COP();
        [[nodiscard]] static auto CRC();
        [[nodiscard]] static auto CUP();
        [[nodiscard]] static auto CVE();
        [[nodiscard]] static auto CZK();
        [[nodiscard]] static auto DJF();
        [[nodiscard]] static auto DKK();
        [[nodiscard]] static auto DOP();
        [[nodiscard]] static auto DZD();
        [[nodiscard]] static auto EGP();
        [[nodiscard]] static auto ERN();
        [[nodiscard]] static auto ETB();
        [[nodiscard]] static auto EUR();
        [[nodiscard]] static auto FJD();
        [[nodiscard]] static auto FKP();
        [[nodiscard]] static auto GBP();
        [[nodiscard]] static auto GEL();
        [[nodiscard]] static auto GHS();
        [[nodiscard]] static auto GIP();
        [[nodiscard]] static auto GMD();
        [[nodiscard]] static auto GNF();
        [[nodiscard]] static auto GTQ();
        [[nodiscard]] static auto GYD();
        [[nodiscard]] static auto HKD();
        [[nodiscard]] static auto HNL();
        [[nodiscard]] static auto HRK();
        [[nodiscard]] static auto HTG();
        [[nodiscard]] static auto HUF();
        [[nodiscard]] static auto IDR();
        [[nodiscard]] static auto ILS();
        [[nodiscard]] static auto INR();
        [[nodiscard]] static auto IQD();
        [[nodiscard]] static auto IRR();
        [[nodiscard]] static auto ISK();
        [[nodiscard]] static auto JMD();
        [[nodiscard]] static auto JOD();
        [[nodiscard]] static auto JPY();
        [[nodiscard]] static auto KES();
        [[nodiscard]] static auto KGS();
        [[nodiscard]] static auto KHR();
        [[nodiscard]] static auto KMF();
        [[nodiscard]] static auto KPW();
        [[nodiscard]] static auto KRW();
        [[nodiscard]] static auto KWD();
        [[nodiscard]] static auto KYD();
        [[nodiscard]] static auto KZT();
        [[nodiscard]] static auto LAK();
        [[nodiscard]] static auto LBP();
        [[nodiscard]] static auto LKR();
        [[nodiscard]] static auto LRD();
        [[nodiscard]] static auto LSL();
        [[nodiscard]] static auto LTL();
        [[nodiscard]] static auto LVL();
        [[nodiscard]] static auto LYD();
        [[nodiscard]] static auto MAD();
        [[nodiscard]] static auto MDL();
        [[nodiscard]] static auto MGA();
        [[nodiscard]] static auto MKD();
        [[nodiscard]] static auto MMK();
        [[nodiscard]] static auto MNT();
        [[nodiscard]] static auto MOP();
        [[nodiscard]] static auto MRO();
        [[nodiscard]] static auto MUR();
        [[nodiscard]] static auto MVR();
        [[nodiscard]] static auto MWK();
        [[nodiscard]] static auto MXN();
        [[nodiscard]] static auto MYR();
        [[nodiscard]] static auto MZN();
        [[nodiscard]] static auto NAD();
        [[nodiscard]] static auto NGN();
        [[nodiscard]] static auto NIO();
        [[nodiscard]] static auto NOK();
        [[nodiscard]] static auto NPR();
        [[nodiscard]] static auto NZD();
        [[nodiscard]] static auto OMR();
        [[nodiscard]] static auto PAB();
        [[nodiscard]] static auto PEN();
        [[nodiscard]] static auto PGK();
        [[nodiscard]] static auto PHP();
        [[nodiscard]] static auto PKR();
        [[nodiscard]] static auto PLN();
        [[nodiscard]] static auto PYG();
        [[nodiscard]] static auto QAR();
        [[nodiscard]] static auto RON();
        [[nodiscard]] static auto RSD();
        [[nodiscard]] static auto RUB();
        [[nodiscard]] static auto RWF();
        [[nodiscard]] static auto SAR();
        [[nodiscard]] static auto SBD();
        [[nodiscard]] static auto SCR();
        [[nodiscard]] static auto SDG();
        [[nodiscard]] static auto SEK();
        [[nodiscard]] static auto SGD();
        [[nodiscard]] static auto SHP();
        [[nodiscard]] static auto SLL();
        [[nodiscard]] static auto SOS();
        [[nodiscard]] static auto SRD();
        [[nodiscard]] static auto STD();
        [[nodiscard]] static auto SYP();
        [[nodiscard]] static auto SZL();
        [[nodiscard]] static auto THB();
        [[nodiscard]] static auto TJS();
        [[nodiscard]] static auto TMT();
        [[nodiscard]] static auto TND();
        [[nodiscard]] static auto TOP();
        [[nodiscard]] static auto TRY();
        [[nodiscard]] static auto TTD();
        [[nodiscard]] static auto TWD();
        [[nodiscard]] static auto TZS();
        [[nodiscard]] static auto UAH();
        [[nodiscard]] static auto UGX();
        [[nodiscard]] static auto USD();
        [[nodiscard]] static auto UYU();
        [[nodiscard]] static auto UZS();
        [[nodiscard]] static auto VEF();
        [[nodiscard]] static auto VND();
        [[nodiscard]] static auto VUV();
        [[nodiscard]] static auto WST();
        [[nodiscard]] static auto XAF();
        [[nodiscard]] static auto XCD();
        [[nodiscard]] static auto XOF();
        [[nodiscard]] static auto XPF();
        [[nodiscard]] static auto XXX();
        [[nodiscard]] static auto YER();
        [[nodiscard]] static auto ZAR();
        [[nodiscard]] static auto ZMW();
        [[nodiscard]] static auto ZWL();
        [[nodiscard]] static auto BYN();
        [[nodiscard]] static auto MRU();
        [[nodiscard]] static auto SSP();
        [[nodiscard]] static auto STN();
        [[nodiscard]] static auto VES();
    };
    struct __declspec(empty_bases) GeographicRegion : winrt::Windows::Globalization::IGeographicRegion
    {
        GeographicRegion(std::nullptr_t) noexcept {}
        GeographicRegion(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Globalization::IGeographicRegion(ptr, take_ownership_from_abi) {}
        GeographicRegion();
        explicit GeographicRegion(param::hstring const& geographicRegionCode);
        static auto IsSupported(param::hstring const& geographicRegionCode);
    };
    struct __declspec(empty_bases) JapanesePhoneme : winrt::Windows::Globalization::IJapanesePhoneme
    {
        JapanesePhoneme(std::nullptr_t) noexcept {}
        JapanesePhoneme(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Globalization::IJapanesePhoneme(ptr, take_ownership_from_abi) {}
    };
    struct JapanesePhoneticAnalyzer
    {
        JapanesePhoneticAnalyzer() = delete;
        static auto GetWords(param::hstring const& input);
        static auto GetWords(param::hstring const& input, bool monoRuby);
    };
    struct __declspec(empty_bases) Language : winrt::Windows::Globalization::ILanguage,
        impl::require<Language, winrt::Windows::Globalization::ILanguageExtensionSubtags, winrt::Windows::Globalization::ILanguage2, winrt::Windows::Globalization::ILanguage3>
    {
        Language(std::nullptr_t) noexcept {}
        Language(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Globalization::ILanguage(ptr, take_ownership_from_abi) {}
        explicit Language(param::hstring const& languageTag);
        static auto IsWellFormed(param::hstring const& languageTag);
        [[nodiscard]] static auto CurrentInputMethodLanguageTag();
        static auto TrySetInputMethodLanguageTag(param::hstring const& languageTag);
        static auto GetMuiCompatibleLanguageListFromLanguageTags(param::iterable<hstring> const& languageTags);
    };
    struct NumeralSystemIdentifiers
    {
        NumeralSystemIdentifiers() = delete;
        [[nodiscard]] static auto Arab();
        [[nodiscard]] static auto ArabExt();
        [[nodiscard]] static auto Bali();
        [[nodiscard]] static auto Beng();
        [[nodiscard]] static auto Cham();
        [[nodiscard]] static auto Deva();
        [[nodiscard]] static auto FullWide();
        [[nodiscard]] static auto Gujr();
        [[nodiscard]] static auto Guru();
        [[nodiscard]] static auto HaniDec();
        [[nodiscard]] static auto Java();
        [[nodiscard]] static auto Kali();
        [[nodiscard]] static auto Khmr();
        [[nodiscard]] static auto Knda();
        [[nodiscard]] static auto Lana();
        [[nodiscard]] static auto LanaTham();
        [[nodiscard]] static auto Laoo();
        [[nodiscard]] static auto Latn();
        [[nodiscard]] static auto Lepc();
        [[nodiscard]] static auto Limb();
        [[nodiscard]] static auto Mlym();
        [[nodiscard]] static auto Mong();
        [[nodiscard]] static auto Mtei();
        [[nodiscard]] static auto Mymr();
        [[nodiscard]] static auto MymrShan();
        [[nodiscard]] static auto Nkoo();
        [[nodiscard]] static auto Olck();
        [[nodiscard]] static auto Orya();
        [[nodiscard]] static auto Saur();
        [[nodiscard]] static auto Sund();
        [[nodiscard]] static auto Talu();
        [[nodiscard]] static auto TamlDec();
        [[nodiscard]] static auto Telu();
        [[nodiscard]] static auto Thai();
        [[nodiscard]] static auto Tibt();
        [[nodiscard]] static auto Vaii();
        [[nodiscard]] static auto Brah();
        [[nodiscard]] static auto Osma();
        [[nodiscard]] static auto MathBold();
        [[nodiscard]] static auto MathDbl();
        [[nodiscard]] static auto MathSans();
        [[nodiscard]] static auto MathSanb();
        [[nodiscard]] static auto MathMono();
        [[nodiscard]] static auto ZmthBold();
        [[nodiscard]] static auto ZmthDbl();
        [[nodiscard]] static auto ZmthSans();
        [[nodiscard]] static auto ZmthSanb();
        [[nodiscard]] static auto ZmthMono();
    };
}
#endif
