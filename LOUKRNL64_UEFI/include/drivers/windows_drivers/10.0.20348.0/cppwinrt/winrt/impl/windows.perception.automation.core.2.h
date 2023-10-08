// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Perception_Automation_Core_2_H
#define WINRT_Windows_Perception_Automation_Core_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Perception.Automation.Core.1.h"
WINRT_EXPORT namespace winrt::Windows::Perception::Automation::Core
{
    struct CorePerceptionAutomation
    {
        CorePerceptionAutomation() = delete;
        static auto SetActivationFactoryProvider(Windows::Foundation::IGetActivationFactory const& provider);
    };
}
#endif
