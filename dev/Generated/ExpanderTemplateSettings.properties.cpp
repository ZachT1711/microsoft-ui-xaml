// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "ExpanderTemplateSettings.h"

GlobalDependencyProperty ExpanderTemplateSettingsProperties::s_ContentHeightProperty{ nullptr };
GlobalDependencyProperty ExpanderTemplateSettingsProperties::s_DispatcherProperty{ nullptr };
GlobalDependencyProperty ExpanderTemplateSettingsProperties::s_NegativeContentHeightProperty{ nullptr };

ExpanderTemplateSettingsProperties::ExpanderTemplateSettingsProperties()
{
    EnsureProperties();
}

void ExpanderTemplateSettingsProperties::EnsureProperties()
{
    if (!s_ContentHeightProperty)
    {
        s_ContentHeightProperty =
            InitializeDependencyProperty(
                L"ContentHeight",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ExpanderTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_DispatcherProperty)
    {
        s_DispatcherProperty =
            InitializeDependencyProperty(
                L"Dispatcher",
                winrt::name_of<winrt::CoreDispatcher>(),
                winrt::name_of<winrt::ExpanderTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<winrt::CoreDispatcher>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_NegativeContentHeightProperty)
    {
        s_NegativeContentHeightProperty =
            InitializeDependencyProperty(
                L"NegativeContentHeight",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ExpanderTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                nullptr);
    }
}

void ExpanderTemplateSettingsProperties::ClearProperties()
{
    s_ContentHeightProperty = nullptr;
    s_DispatcherProperty = nullptr;
    s_NegativeContentHeightProperty = nullptr;
}

void ExpanderTemplateSettingsProperties::ContentHeight(double value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ExpanderTemplateSettings*>(this)->SetValue(s_ContentHeightProperty, ValueHelper<double>::BoxValueIfNecessary(value));
    }
}

double ExpanderTemplateSettingsProperties::ContentHeight()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ExpanderTemplateSettings*>(this)->GetValue(s_ContentHeightProperty));
}

void ExpanderTemplateSettingsProperties::Dispatcher(winrt::CoreDispatcher const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ExpanderTemplateSettings*>(this)->SetValue(s_DispatcherProperty, ValueHelper<winrt::CoreDispatcher>::BoxValueIfNecessary(value));
    }
}

winrt::CoreDispatcher ExpanderTemplateSettingsProperties::Dispatcher()
{
    return ValueHelper<winrt::CoreDispatcher>::CastOrUnbox(static_cast<ExpanderTemplateSettings*>(this)->GetValue(s_DispatcherProperty));
}

void ExpanderTemplateSettingsProperties::NegativeContentHeight(double value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ExpanderTemplateSettings*>(this)->SetValue(s_NegativeContentHeightProperty, ValueHelper<double>::BoxValueIfNecessary(value));
    }
}

double ExpanderTemplateSettingsProperties::NegativeContentHeight()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ExpanderTemplateSettings*>(this)->GetValue(s_NegativeContentHeightProperty));
}
