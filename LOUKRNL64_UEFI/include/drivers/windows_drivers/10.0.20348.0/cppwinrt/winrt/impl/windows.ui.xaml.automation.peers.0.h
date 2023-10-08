// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Automation_Peers_0_H
#define WINRT_Windows_UI_Xaml_Automation_Peers_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Point;
    struct Rect;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    template <typename T> struct __declspec(empty_bases) IVectorView;
    template <typename T> struct __declspec(empty_bases) IVector;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml
{
    struct DependencyProperty;
    struct FrameworkElement;
    struct UIElement;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Automation
{
    enum class AnnotationType : int32_t;
    struct AutomationProperty;
    enum class AutomationTextEditChangeType : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Automation::Provider
{
    struct IRawElementProviderSimple;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Controls
{
    struct AppBar;
    struct AppBarButton;
    struct AppBarToggleButton;
    struct AutoSuggestBox;
    struct Button;
    struct CalendarDatePicker;
    struct CaptureElement;
    struct CheckBox;
    struct ComboBox;
    struct ComboBoxItem;
    struct DatePicker;
    struct FlipView;
    struct FlipViewItem;
    struct FlyoutPresenter;
    struct GridView;
    struct GridViewHeaderItem;
    struct GridViewItem;
    struct GroupItem;
    struct Hub;
    struct HubSection;
    struct HyperlinkButton;
    struct Image;
    struct ItemsControl;
    struct ListBox;
    struct ListBoxItem;
    struct ListView;
    struct ListViewBase;
    struct ListViewBaseHeaderItem;
    struct ListViewHeaderItem;
    struct ListViewItem;
    struct MediaElement;
    struct MediaPlayerElement;
    struct MediaTransportControls;
    struct MenuBar;
    struct MenuBarItem;
    struct MenuFlyoutItem;
    struct MenuFlyoutPresenter;
    struct NavigationViewItem;
    struct PasswordBox;
    struct PersonPicture;
    struct Pivot;
    struct PivotItem;
    struct ProgressBar;
    struct ProgressRing;
    struct RadioButton;
    struct RatingControl;
    struct RichEditBox;
    struct RichTextBlock;
    struct RichTextBlockOverflow;
    struct ScrollViewer;
    struct SearchBox;
    struct SemanticZoom;
    struct SettingsFlyout;
    struct Slider;
    struct TextBlock;
    struct TextBox;
    struct TimePicker;
    struct ToggleMenuFlyoutItem;
    struct ToggleSwitch;
    struct TreeViewItem;
    struct TreeViewList;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Controls::Primitives
{
    struct ButtonBase;
    struct ColorPickerSlider;
    struct ColorSpectrum;
    struct RangeBase;
    struct RepeatButton;
    struct ScrollBar;
    struct Selector;
    struct Thumb;
    struct ToggleButton;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Automation::Peers
{
    enum class AccessibilityView : int32_t
    {
        Raw = 0,
        Control = 1,
        Content = 2,
    };
    enum class AutomationControlType : int32_t
    {
        Button = 0,
        Calendar = 1,
        CheckBox = 2,
        ComboBox = 3,
        Edit = 4,
        Hyperlink = 5,
        Image = 6,
        ListItem = 7,
        List = 8,
        Menu = 9,
        MenuBar = 10,
        MenuItem = 11,
        ProgressBar = 12,
        RadioButton = 13,
        ScrollBar = 14,
        Slider = 15,
        Spinner = 16,
        StatusBar = 17,
        Tab = 18,
        TabItem = 19,
        Text = 20,
        ToolBar = 21,
        ToolTip = 22,
        Tree = 23,
        TreeItem = 24,
        Custom = 25,
        Group = 26,
        Thumb = 27,
        DataGrid = 28,
        DataItem = 29,
        Document = 30,
        SplitButton = 31,
        Window = 32,
        Pane = 33,
        Header = 34,
        HeaderItem = 35,
        Table = 36,
        TitleBar = 37,
        Separator = 38,
        SemanticZoom = 39,
        AppBar = 40,
    };
    enum class AutomationEvents : int32_t
    {
        ToolTipOpened = 0,
        ToolTipClosed = 1,
        MenuOpened = 2,
        MenuClosed = 3,
        AutomationFocusChanged = 4,
        InvokePatternOnInvoked = 5,
        SelectionItemPatternOnElementAddedToSelection = 6,
        SelectionItemPatternOnElementRemovedFromSelection = 7,
        SelectionItemPatternOnElementSelected = 8,
        SelectionPatternOnInvalidated = 9,
        TextPatternOnTextSelectionChanged = 10,
        TextPatternOnTextChanged = 11,
        AsyncContentLoaded = 12,
        PropertyChanged = 13,
        StructureChanged = 14,
        DragStart = 15,
        DragCancel = 16,
        DragComplete = 17,
        DragEnter = 18,
        DragLeave = 19,
        Dropped = 20,
        LiveRegionChanged = 21,
        InputReachedTarget = 22,
        InputReachedOtherElement = 23,
        InputDiscarded = 24,
        WindowClosed = 25,
        WindowOpened = 26,
        ConversionTargetChanged = 27,
        TextEditTextChanged = 28,
        LayoutInvalidated = 29,
    };
    enum class AutomationHeadingLevel : int32_t
    {
        None = 0,
        Level1 = 1,
        Level2 = 2,
        Level3 = 3,
        Level4 = 4,
        Level5 = 5,
        Level6 = 6,
        Level7 = 7,
        Level8 = 8,
        Level9 = 9,
    };
    enum class AutomationLandmarkType : int32_t
    {
        None = 0,
        Custom = 1,
        Form = 2,
        Main = 3,
        Navigation = 4,
        Search = 5,
    };
    enum class AutomationLiveSetting : int32_t
    {
        Off = 0,
        Polite = 1,
        Assertive = 2,
    };
    enum class AutomationNavigationDirection : int32_t
    {
        Parent = 0,
        NextSibling = 1,
        PreviousSibling = 2,
        FirstChild = 3,
        LastChild = 4,
    };
    enum class AutomationNotificationKind : int32_t
    {
        ItemAdded = 0,
        ItemRemoved = 1,
        ActionCompleted = 2,
        ActionAborted = 3,
        Other = 4,
    };
    enum class AutomationNotificationProcessing : int32_t
    {
        ImportantAll = 0,
        ImportantMostRecent = 1,
        All = 2,
        MostRecent = 3,
        CurrentThenMostRecent = 4,
    };
    enum class AutomationOrientation : int32_t
    {
        None = 0,
        Horizontal = 1,
        Vertical = 2,
    };
    enum class AutomationStructureChangeType : int32_t
    {
        ChildAdded = 0,
        ChildRemoved = 1,
        ChildrenInvalidated = 2,
        ChildrenBulkAdded = 3,
        ChildrenBulkRemoved = 4,
        ChildrenReordered = 5,
    };
    enum class PatternInterface : int32_t
    {
        Invoke = 0,
        Selection = 1,
        Value = 2,
        RangeValue = 3,
        Scroll = 4,
        ScrollItem = 5,
        ExpandCollapse = 6,
        Grid = 7,
        GridItem = 8,
        MultipleView = 9,
        Window = 10,
        SelectionItem = 11,
        Dock = 12,
        Table = 13,
        TableItem = 14,
        Toggle = 15,
        Transform = 16,
        Text = 17,
        ItemContainer = 18,
        VirtualizedItem = 19,
        Text2 = 20,
        TextChild = 21,
        TextRange = 22,
        Annotation = 23,
        Drag = 24,
        DropTarget = 25,
        ObjectModel = 26,
        Spreadsheet = 27,
        SpreadsheetItem = 28,
        Styles = 29,
        Transform2 = 30,
        SynchronizedInput = 31,
        TextEdit = 32,
        CustomNavigation = 33,
    };
    struct IAppBarAutomationPeer;
    struct IAppBarAutomationPeerFactory;
    struct IAppBarButtonAutomationPeer;
    struct IAppBarButtonAutomationPeerFactory;
    struct IAppBarToggleButtonAutomationPeer;
    struct IAppBarToggleButtonAutomationPeerFactory;
    struct IAutoSuggestBoxAutomationPeer;
    struct IAutoSuggestBoxAutomationPeerFactory;
    struct IAutomationPeer;
    struct IAutomationPeer2;
    struct IAutomationPeer3;
    struct IAutomationPeer4;
    struct IAutomationPeer5;
    struct IAutomationPeer6;
    struct IAutomationPeer7;
    struct IAutomationPeer8;
    struct IAutomationPeer9;
    struct IAutomationPeerAnnotation;
    struct IAutomationPeerAnnotationFactory;
    struct IAutomationPeerAnnotationStatics;
    struct IAutomationPeerFactory;
    struct IAutomationPeerOverrides;
    struct IAutomationPeerOverrides2;
    struct IAutomationPeerOverrides3;
    struct IAutomationPeerOverrides4;
    struct IAutomationPeerOverrides5;
    struct IAutomationPeerOverrides6;
    struct IAutomationPeerOverrides8;
    struct IAutomationPeerOverrides9;
    struct IAutomationPeerProtected;
    struct IAutomationPeerStatics;
    struct IAutomationPeerStatics3;
    struct IButtonAutomationPeer;
    struct IButtonAutomationPeerFactory;
    struct IButtonBaseAutomationPeer;
    struct IButtonBaseAutomationPeerFactory;
    struct ICalendarDatePickerAutomationPeer;
    struct ICalendarDatePickerAutomationPeerFactory;
    struct ICaptureElementAutomationPeer;
    struct ICaptureElementAutomationPeerFactory;
    struct ICheckBoxAutomationPeer;
    struct ICheckBoxAutomationPeerFactory;
    struct IColorPickerSliderAutomationPeer;
    struct IColorPickerSliderAutomationPeerFactory;
    struct IColorSpectrumAutomationPeer;
    struct IColorSpectrumAutomationPeerFactory;
    struct IComboBoxAutomationPeer;
    struct IComboBoxAutomationPeerFactory;
    struct IComboBoxItemAutomationPeer;
    struct IComboBoxItemAutomationPeerFactory;
    struct IComboBoxItemDataAutomationPeer;
    struct IComboBoxItemDataAutomationPeerFactory;
    struct IDatePickerAutomationPeer;
    struct IDatePickerAutomationPeerFactory;
    struct IDatePickerFlyoutPresenterAutomationPeer;
    struct IFlipViewAutomationPeer;
    struct IFlipViewAutomationPeerFactory;
    struct IFlipViewItemAutomationPeer;
    struct IFlipViewItemAutomationPeerFactory;
    struct IFlipViewItemDataAutomationPeer;
    struct IFlipViewItemDataAutomationPeerFactory;
    struct IFlyoutPresenterAutomationPeer;
    struct IFlyoutPresenterAutomationPeerFactory;
    struct IFrameworkElementAutomationPeer;
    struct IFrameworkElementAutomationPeerFactory;
    struct IFrameworkElementAutomationPeerStatics;
    struct IGridViewAutomationPeer;
    struct IGridViewAutomationPeerFactory;
    struct IGridViewHeaderItemAutomationPeer;
    struct IGridViewHeaderItemAutomationPeerFactory;
    struct IGridViewItemAutomationPeer;
    struct IGridViewItemAutomationPeerFactory;
    struct IGridViewItemDataAutomationPeer;
    struct IGridViewItemDataAutomationPeerFactory;
    struct IGroupItemAutomationPeer;
    struct IGroupItemAutomationPeerFactory;
    struct IHubAutomationPeer;
    struct IHubAutomationPeerFactory;
    struct IHubSectionAutomationPeer;
    struct IHubSectionAutomationPeerFactory;
    struct IHyperlinkButtonAutomationPeer;
    struct IHyperlinkButtonAutomationPeerFactory;
    struct IImageAutomationPeer;
    struct IImageAutomationPeerFactory;
    struct IInkToolbarAutomationPeer;
    struct IItemAutomationPeer;
    struct IItemAutomationPeerFactory;
    struct IItemsControlAutomationPeer;
    struct IItemsControlAutomationPeer2;
    struct IItemsControlAutomationPeerFactory;
    struct IItemsControlAutomationPeerOverrides2;
    struct IListBoxAutomationPeer;
    struct IListBoxAutomationPeerFactory;
    struct IListBoxItemAutomationPeer;
    struct IListBoxItemAutomationPeerFactory;
    struct IListBoxItemDataAutomationPeer;
    struct IListBoxItemDataAutomationPeerFactory;
    struct IListPickerFlyoutPresenterAutomationPeer;
    struct IListViewAutomationPeer;
    struct IListViewAutomationPeerFactory;
    struct IListViewBaseAutomationPeer;
    struct IListViewBaseAutomationPeerFactory;
    struct IListViewBaseHeaderItemAutomationPeer;
    struct IListViewBaseHeaderItemAutomationPeerFactory;
    struct IListViewHeaderItemAutomationPeer;
    struct IListViewHeaderItemAutomationPeerFactory;
    struct IListViewItemAutomationPeer;
    struct IListViewItemAutomationPeerFactory;
    struct IListViewItemDataAutomationPeer;
    struct IListViewItemDataAutomationPeerFactory;
    struct ILoopingSelectorAutomationPeer;
    struct ILoopingSelectorItemAutomationPeer;
    struct ILoopingSelectorItemDataAutomationPeer;
    struct IMapControlAutomationPeer;
    struct IMediaElementAutomationPeer;
    struct IMediaElementAutomationPeerFactory;
    struct IMediaPlayerElementAutomationPeer;
    struct IMediaPlayerElementAutomationPeerFactory;
    struct IMediaTransportControlsAutomationPeer;
    struct IMediaTransportControlsAutomationPeerFactory;
    struct IMenuBarAutomationPeer;
    struct IMenuBarAutomationPeerFactory;
    struct IMenuBarItemAutomationPeer;
    struct IMenuBarItemAutomationPeerFactory;
    struct IMenuFlyoutItemAutomationPeer;
    struct IMenuFlyoutItemAutomationPeerFactory;
    struct IMenuFlyoutPresenterAutomationPeer;
    struct IMenuFlyoutPresenterAutomationPeerFactory;
    struct INavigationViewItemAutomationPeer;
    struct INavigationViewItemAutomationPeerFactory;
    struct IPasswordBoxAutomationPeer;
    struct IPasswordBoxAutomationPeerFactory;
    struct IPersonPictureAutomationPeer;
    struct IPersonPictureAutomationPeerFactory;
    struct IPickerFlyoutPresenterAutomationPeer;
    struct IPivotAutomationPeer;
    struct IPivotAutomationPeerFactory;
    struct IPivotItemAutomationPeer;
    struct IPivotItemAutomationPeerFactory;
    struct IPivotItemDataAutomationPeer;
    struct IPivotItemDataAutomationPeerFactory;
    struct IProgressBarAutomationPeer;
    struct IProgressBarAutomationPeerFactory;
    struct IProgressRingAutomationPeer;
    struct IProgressRingAutomationPeerFactory;
    struct IRadioButtonAutomationPeer;
    struct IRadioButtonAutomationPeerFactory;
    struct IRangeBaseAutomationPeer;
    struct IRangeBaseAutomationPeerFactory;
    struct IRatingControlAutomationPeer;
    struct IRatingControlAutomationPeerFactory;
    struct IRepeatButtonAutomationPeer;
    struct IRepeatButtonAutomationPeerFactory;
    struct IRichEditBoxAutomationPeer;
    struct IRichEditBoxAutomationPeerFactory;
    struct IRichTextBlockAutomationPeer;
    struct IRichTextBlockAutomationPeerFactory;
    struct IRichTextBlockOverflowAutomationPeer;
    struct IRichTextBlockOverflowAutomationPeerFactory;
    struct IScrollBarAutomationPeer;
    struct IScrollBarAutomationPeerFactory;
    struct IScrollViewerAutomationPeer;
    struct IScrollViewerAutomationPeerFactory;
    struct ISearchBoxAutomationPeer;
    struct ISearchBoxAutomationPeerFactory;
    struct ISelectorAutomationPeer;
    struct ISelectorAutomationPeerFactory;
    struct ISelectorItemAutomationPeer;
    struct ISelectorItemAutomationPeerFactory;
    struct ISemanticZoomAutomationPeer;
    struct ISemanticZoomAutomationPeerFactory;
    struct ISettingsFlyoutAutomationPeer;
    struct ISettingsFlyoutAutomationPeerFactory;
    struct ISliderAutomationPeer;
    struct ISliderAutomationPeerFactory;
    struct ITextBlockAutomationPeer;
    struct ITextBlockAutomationPeerFactory;
    struct ITextBoxAutomationPeer;
    struct ITextBoxAutomationPeerFactory;
    struct IThumbAutomationPeer;
    struct IThumbAutomationPeerFactory;
    struct ITimePickerAutomationPeer;
    struct ITimePickerAutomationPeerFactory;
    struct ITimePickerFlyoutPresenterAutomationPeer;
    struct IToggleButtonAutomationPeer;
    struct IToggleButtonAutomationPeerFactory;
    struct IToggleMenuFlyoutItemAutomationPeer;
    struct IToggleMenuFlyoutItemAutomationPeerFactory;
    struct IToggleSwitchAutomationPeer;
    struct IToggleSwitchAutomationPeerFactory;
    struct ITreeViewItemAutomationPeer;
    struct ITreeViewItemAutomationPeerFactory;
    struct ITreeViewListAutomationPeer;
    struct ITreeViewListAutomationPeerFactory;
    struct AppBarAutomationPeer;
    struct AppBarButtonAutomationPeer;
    struct AppBarToggleButtonAutomationPeer;
    struct AutoSuggestBoxAutomationPeer;
    struct AutomationPeer;
    struct AutomationPeerAnnotation;
    struct ButtonAutomationPeer;
    struct ButtonBaseAutomationPeer;
    struct CalendarDatePickerAutomationPeer;
    struct CaptureElementAutomationPeer;
    struct CheckBoxAutomationPeer;
    struct ColorPickerSliderAutomationPeer;
    struct ColorSpectrumAutomationPeer;
    struct ComboBoxAutomationPeer;
    struct ComboBoxItemAutomationPeer;
    struct ComboBoxItemDataAutomationPeer;
    struct DatePickerAutomationPeer;
    struct DatePickerFlyoutPresenterAutomationPeer;
    struct FlipViewAutomationPeer;
    struct FlipViewItemAutomationPeer;
    struct FlipViewItemDataAutomationPeer;
    struct FlyoutPresenterAutomationPeer;
    struct FrameworkElementAutomationPeer;
    struct GridViewAutomationPeer;
    struct GridViewHeaderItemAutomationPeer;
    struct GridViewItemAutomationPeer;
    struct GridViewItemDataAutomationPeer;
    struct GroupItemAutomationPeer;
    struct HubAutomationPeer;
    struct HubSectionAutomationPeer;
    struct HyperlinkButtonAutomationPeer;
    struct ImageAutomationPeer;
    struct InkToolbarAutomationPeer;
    struct ItemAutomationPeer;
    struct ItemsControlAutomationPeer;
    struct ListBoxAutomationPeer;
    struct ListBoxItemAutomationPeer;
    struct ListBoxItemDataAutomationPeer;
    struct ListPickerFlyoutPresenterAutomationPeer;
    struct ListViewAutomationPeer;
    struct ListViewBaseAutomationPeer;
    struct ListViewBaseHeaderItemAutomationPeer;
    struct ListViewHeaderItemAutomationPeer;
    struct ListViewItemAutomationPeer;
    struct ListViewItemDataAutomationPeer;
    struct LoopingSelectorAutomationPeer;
    struct LoopingSelectorItemAutomationPeer;
    struct LoopingSelectorItemDataAutomationPeer;
    struct MapControlAutomationPeer;
    struct MediaElementAutomationPeer;
    struct MediaPlayerElementAutomationPeer;
    struct MediaTransportControlsAutomationPeer;
    struct MenuBarAutomationPeer;
    struct MenuBarItemAutomationPeer;
    struct MenuFlyoutItemAutomationPeer;
    struct MenuFlyoutPresenterAutomationPeer;
    struct NavigationViewItemAutomationPeer;
    struct PasswordBoxAutomationPeer;
    struct PersonPictureAutomationPeer;
    struct PickerFlyoutPresenterAutomationPeer;
    struct PivotAutomationPeer;
    struct PivotItemAutomationPeer;
    struct PivotItemDataAutomationPeer;
    struct ProgressBarAutomationPeer;
    struct ProgressRingAutomationPeer;
    struct RadioButtonAutomationPeer;
    struct RangeBaseAutomationPeer;
    struct RatingControlAutomationPeer;
    struct RepeatButtonAutomationPeer;
    struct RichEditBoxAutomationPeer;
    struct RichTextBlockAutomationPeer;
    struct RichTextBlockOverflowAutomationPeer;
    struct ScrollBarAutomationPeer;
    struct ScrollViewerAutomationPeer;
    struct SearchBoxAutomationPeer;
    struct SelectorAutomationPeer;
    struct SelectorItemAutomationPeer;
    struct SemanticZoomAutomationPeer;
    struct SettingsFlyoutAutomationPeer;
    struct SliderAutomationPeer;
    struct TextBlockAutomationPeer;
    struct TextBoxAutomationPeer;
    struct ThumbAutomationPeer;
    struct TimePickerAutomationPeer;
    struct TimePickerFlyoutPresenterAutomationPeer;
    struct ToggleButtonAutomationPeer;
    struct ToggleMenuFlyoutItemAutomationPeer;
    struct ToggleSwitchAutomationPeer;
    struct TreeViewItemAutomationPeer;
    struct TreeViewListAutomationPeer;
    struct RawElementProviderRuntimeId;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeer2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeer3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeer4>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeer5>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeer6>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeer7>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeer8>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeer9>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotation>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides8>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides9>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeerStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IAutomationPeerStatics3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ICalendarDatePickerAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ICalendarDatePickerAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IColorPickerSliderAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IColorPickerSliderAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IColorSpectrumAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IColorSpectrumAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IDatePickerFlyoutPresenterAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IHubAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IHubAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IImageAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IImageAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IInkToolbarAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IItemAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IListPickerFlyoutPresenterAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ILoopingSelectorAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ILoopingSelectorItemAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ILoopingSelectorItemDataAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IMapControlAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IMenuBarAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IMenuBarAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IMenuBarItemAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IMenuBarItemAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::INavigationViewItemAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::INavigationViewItemAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IPersonPictureAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IPersonPictureAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IPickerFlyoutPresenterAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IPivotAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IPivotAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IPivotItemAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IPivotItemAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IPivotItemDataAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IPivotItemDataAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IRatingControlAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IRatingControlAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ITimePickerFlyoutPresenterAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ITreeViewItemAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ITreeViewItemAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ITreeViewListAutomationPeer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ITreeViewListAutomationPeerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::AppBarAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::AppBarButtonAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::AppBarToggleButtonAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::AutoSuggestBoxAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::AutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ButtonAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ButtonBaseAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::CalendarDatePickerAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::CaptureElementAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::CheckBoxAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ColorPickerSliderAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ColorSpectrumAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ComboBoxAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ComboBoxItemAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ComboBoxItemDataAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::DatePickerAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::DatePickerFlyoutPresenterAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::FlipViewAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::FlipViewItemAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::FlipViewItemDataAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::FlyoutPresenterAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::FrameworkElementAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::GridViewAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::GridViewHeaderItemAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::GridViewItemAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::GridViewItemDataAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::GroupItemAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::HubAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::HubSectionAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::HyperlinkButtonAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ImageAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::InkToolbarAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ItemAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ItemsControlAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ListBoxAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ListBoxItemAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ListBoxItemDataAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ListPickerFlyoutPresenterAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ListViewAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ListViewBaseAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ListViewBaseHeaderItemAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ListViewHeaderItemAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ListViewItemAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ListViewItemDataAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::LoopingSelectorAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::LoopingSelectorItemAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::LoopingSelectorItemDataAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::MapControlAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::MediaElementAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::MediaPlayerElementAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::MediaTransportControlsAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::MenuBarAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::MenuBarItemAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::MenuFlyoutItemAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::MenuFlyoutPresenterAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::NavigationViewItemAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::PasswordBoxAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::PersonPictureAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::PickerFlyoutPresenterAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::PivotAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::PivotItemAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::PivotItemDataAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ProgressBarAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ProgressRingAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::RadioButtonAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::RangeBaseAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::RatingControlAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::RepeatButtonAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::RichEditBoxAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::RichTextBlockAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::RichTextBlockOverflowAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ScrollBarAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ScrollViewerAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::SearchBoxAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::SelectorAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::SelectorItemAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::SemanticZoomAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::SettingsFlyoutAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::SliderAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::TextBlockAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::TextBoxAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ThumbAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::TimePickerAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::TimePickerFlyoutPresenterAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ToggleButtonAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ToggleMenuFlyoutItemAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::ToggleSwitchAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::TreeViewItemAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::TreeViewListAutomationPeer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::AccessibilityView>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::AutomationControlType>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::AutomationEvents>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::AutomationHeadingLevel>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::AutomationNavigationDirection>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::AutomationNotificationKind>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::AutomationNotificationProcessing>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::AutomationOrientation>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::AutomationStructureChangeType>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::PatternInterface>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Automation::Peers::RawElementProviderRuntimeId>{ using type = struct_category<uint32_t, uint32_t>; };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::AppBarAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.AppBarAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::AppBarButtonAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.AppBarButtonAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::AppBarToggleButtonAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.AppBarToggleButtonAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::AutoSuggestBoxAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.AutoSuggestBoxAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::AutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.AutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation> = L"Windows.UI.Xaml.Automation.Peers.AutomationPeerAnnotation";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ButtonAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ButtonAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ButtonBaseAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ButtonBaseAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::CalendarDatePickerAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.CalendarDatePickerAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::CaptureElementAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.CaptureElementAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::CheckBoxAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.CheckBoxAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ColorPickerSliderAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ColorPickerSliderAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ColorSpectrumAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ColorSpectrumAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ComboBoxAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ComboBoxAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ComboBoxItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ComboBoxItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ComboBoxItemDataAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ComboBoxItemDataAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::DatePickerAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.DatePickerAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::DatePickerFlyoutPresenterAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.DatePickerFlyoutPresenterAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::FlipViewAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.FlipViewAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::FlipViewItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.FlipViewItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::FlipViewItemDataAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.FlipViewItemDataAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::FlyoutPresenterAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.FlyoutPresenterAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::FrameworkElementAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.FrameworkElementAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::GridViewAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.GridViewAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::GridViewHeaderItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.GridViewHeaderItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::GridViewItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.GridViewItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::GridViewItemDataAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.GridViewItemDataAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::GroupItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.GroupItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::HubAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.HubAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::HubSectionAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.HubSectionAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::HyperlinkButtonAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.HyperlinkButtonAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ImageAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ImageAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::InkToolbarAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.InkToolbarAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ItemsControlAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ItemsControlAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ListBoxAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ListBoxAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ListBoxItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ListBoxItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ListBoxItemDataAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ListBoxItemDataAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ListPickerFlyoutPresenterAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ListPickerFlyoutPresenterAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ListViewAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ListViewAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ListViewBaseAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ListViewBaseAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ListViewBaseHeaderItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ListViewBaseHeaderItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ListViewHeaderItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ListViewHeaderItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ListViewItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ListViewItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ListViewItemDataAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ListViewItemDataAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::LoopingSelectorAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.LoopingSelectorAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::LoopingSelectorItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.LoopingSelectorItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::LoopingSelectorItemDataAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.LoopingSelectorItemDataAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::MapControlAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.MapControlAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::MediaElementAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.MediaElementAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::MediaPlayerElementAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.MediaPlayerElementAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::MediaTransportControlsAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.MediaTransportControlsAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::MenuBarAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.MenuBarAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::MenuBarItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.MenuBarItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::MenuFlyoutItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.MenuFlyoutItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::MenuFlyoutPresenterAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.MenuFlyoutPresenterAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::NavigationViewItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.NavigationViewItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::PasswordBoxAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.PasswordBoxAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::PersonPictureAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.PersonPictureAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::PickerFlyoutPresenterAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.PickerFlyoutPresenterAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::PivotAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.PivotAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::PivotItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.PivotItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::PivotItemDataAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.PivotItemDataAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ProgressBarAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ProgressBarAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ProgressRingAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ProgressRingAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::RadioButtonAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.RadioButtonAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::RangeBaseAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.RangeBaseAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::RatingControlAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.RatingControlAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::RepeatButtonAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.RepeatButtonAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::RichEditBoxAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.RichEditBoxAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::RichTextBlockAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.RichTextBlockAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::RichTextBlockOverflowAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.RichTextBlockOverflowAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ScrollBarAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ScrollBarAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ScrollViewerAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ScrollViewerAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::SearchBoxAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.SearchBoxAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::SelectorAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.SelectorAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::SelectorItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.SelectorItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::SemanticZoomAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.SemanticZoomAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::SettingsFlyoutAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.SettingsFlyoutAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::SliderAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.SliderAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::TextBlockAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.TextBlockAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::TextBoxAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.TextBoxAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ThumbAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ThumbAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::TimePickerAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.TimePickerAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::TimePickerFlyoutPresenterAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.TimePickerFlyoutPresenterAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ToggleButtonAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ToggleButtonAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ToggleMenuFlyoutItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ToggleMenuFlyoutItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ToggleSwitchAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ToggleSwitchAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::TreeViewItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.TreeViewItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::TreeViewListAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.TreeViewListAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::AccessibilityView> = L"Windows.UI.Xaml.Automation.Peers.AccessibilityView";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::AutomationControlType> = L"Windows.UI.Xaml.Automation.Peers.AutomationControlType";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::AutomationEvents> = L"Windows.UI.Xaml.Automation.Peers.AutomationEvents";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::AutomationHeadingLevel> = L"Windows.UI.Xaml.Automation.Peers.AutomationHeadingLevel";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType> = L"Windows.UI.Xaml.Automation.Peers.AutomationLandmarkType";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting> = L"Windows.UI.Xaml.Automation.Peers.AutomationLiveSetting";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::AutomationNavigationDirection> = L"Windows.UI.Xaml.Automation.Peers.AutomationNavigationDirection";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::AutomationNotificationKind> = L"Windows.UI.Xaml.Automation.Peers.AutomationNotificationKind";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::AutomationNotificationProcessing> = L"Windows.UI.Xaml.Automation.Peers.AutomationNotificationProcessing";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::AutomationOrientation> = L"Windows.UI.Xaml.Automation.Peers.AutomationOrientation";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::AutomationStructureChangeType> = L"Windows.UI.Xaml.Automation.Peers.AutomationStructureChangeType";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::PatternInterface> = L"Windows.UI.Xaml.Automation.Peers.PatternInterface";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::RawElementProviderRuntimeId> = L"Windows.UI.Xaml.Automation.Peers.RawElementProviderRuntimeId";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IAppBarAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IAppBarAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IAppBarButtonAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IAppBarButtonAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IAppBarToggleButtonAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IAppBarToggleButtonAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IAutoSuggestBoxAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IAutoSuggestBoxAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeer2> = L"Windows.UI.Xaml.Automation.Peers.IAutomationPeer2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeer3> = L"Windows.UI.Xaml.Automation.Peers.IAutomationPeer3";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeer4> = L"Windows.UI.Xaml.Automation.Peers.IAutomationPeer4";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeer5> = L"Windows.UI.Xaml.Automation.Peers.IAutomationPeer5";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeer6> = L"Windows.UI.Xaml.Automation.Peers.IAutomationPeer6";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeer7> = L"Windows.UI.Xaml.Automation.Peers.IAutomationPeer7";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeer8> = L"Windows.UI.Xaml.Automation.Peers.IAutomationPeer8";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeer9> = L"Windows.UI.Xaml.Automation.Peers.IAutomationPeer9";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotation> = L"Windows.UI.Xaml.Automation.Peers.IAutomationPeerAnnotation";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationFactory> = L"Windows.UI.Xaml.Automation.Peers.IAutomationPeerAnnotationFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationStatics> = L"Windows.UI.Xaml.Automation.Peers.IAutomationPeerAnnotationStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides> = L"Windows.UI.Xaml.Automation.Peers.IAutomationPeerOverrides";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2> = L"Windows.UI.Xaml.Automation.Peers.IAutomationPeerOverrides2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3> = L"Windows.UI.Xaml.Automation.Peers.IAutomationPeerOverrides3";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4> = L"Windows.UI.Xaml.Automation.Peers.IAutomationPeerOverrides4";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5> = L"Windows.UI.Xaml.Automation.Peers.IAutomationPeerOverrides5";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6> = L"Windows.UI.Xaml.Automation.Peers.IAutomationPeerOverrides6";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides8> = L"Windows.UI.Xaml.Automation.Peers.IAutomationPeerOverrides8";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides9> = L"Windows.UI.Xaml.Automation.Peers.IAutomationPeerOverrides9";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected> = L"Windows.UI.Xaml.Automation.Peers.IAutomationPeerProtected";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeerStatics> = L"Windows.UI.Xaml.Automation.Peers.IAutomationPeerStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeerStatics3> = L"Windows.UI.Xaml.Automation.Peers.IAutomationPeerStatics3";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IButtonAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IButtonAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IButtonBaseAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IButtonBaseAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ICalendarDatePickerAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ICalendarDatePickerAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ICalendarDatePickerAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.ICalendarDatePickerAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ICaptureElementAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.ICaptureElementAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ICheckBoxAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.ICheckBoxAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IColorPickerSliderAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IColorPickerSliderAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IColorPickerSliderAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IColorPickerSliderAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IColorSpectrumAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IColorSpectrumAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IColorSpectrumAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IColorSpectrumAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IComboBoxAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IComboBoxAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IComboBoxItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IComboBoxItemAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IComboBoxItemDataAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IComboBoxItemDataAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IDatePickerAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IDatePickerAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IDatePickerFlyoutPresenterAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IDatePickerFlyoutPresenterAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IFlipViewAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IFlipViewAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IFlipViewItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IFlipViewItemAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IFlipViewItemDataAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IFlipViewItemDataAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IFlyoutPresenterAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IFlyoutPresenterAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IFrameworkElementAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IFrameworkElementAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerStatics> = L"Windows.UI.Xaml.Automation.Peers.IFrameworkElementAutomationPeerStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IGridViewAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IGridViewAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IGridViewHeaderItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IGridViewHeaderItemAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IGridViewItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IGridViewItemAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IGridViewItemDataAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IGridViewItemDataAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IGroupItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IGroupItemAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IHubAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IHubAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IHubAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IHubAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IHubSectionAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IHubSectionAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IHyperlinkButtonAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IHyperlinkButtonAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IImageAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IImageAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IImageAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IImageAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IInkToolbarAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IInkToolbarAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IItemAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IItemAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IItemsControlAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer2> = L"Windows.UI.Xaml.Automation.Peers.IItemsControlAutomationPeer2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IItemsControlAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2> = L"Windows.UI.Xaml.Automation.Peers.IItemsControlAutomationPeerOverrides2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IListBoxAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IListBoxAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IListBoxItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IListBoxItemAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IListBoxItemDataAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IListBoxItemDataAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IListPickerFlyoutPresenterAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IListPickerFlyoutPresenterAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IListViewAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IListViewAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IListViewBaseAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IListViewBaseAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IListViewBaseHeaderItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IListViewBaseHeaderItemAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IListViewHeaderItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IListViewHeaderItemAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IListViewItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IListViewItemAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IListViewItemDataAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IListViewItemDataAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ILoopingSelectorAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ILoopingSelectorAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ILoopingSelectorItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ILoopingSelectorItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ILoopingSelectorItemDataAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ILoopingSelectorItemDataAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IMapControlAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IMapControlAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IMediaElementAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IMediaElementAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IMediaPlayerElementAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IMediaPlayerElementAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IMediaTransportControlsAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IMediaTransportControlsAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IMenuBarAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IMenuBarAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IMenuBarAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IMenuBarAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IMenuBarItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IMenuBarItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IMenuBarItemAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IMenuBarItemAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IMenuFlyoutItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IMenuFlyoutItemAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IMenuFlyoutPresenterAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IMenuFlyoutPresenterAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::INavigationViewItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.INavigationViewItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::INavigationViewItemAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.INavigationViewItemAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IPasswordBoxAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IPasswordBoxAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IPersonPictureAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IPersonPictureAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IPersonPictureAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IPersonPictureAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IPickerFlyoutPresenterAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IPickerFlyoutPresenterAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IPivotAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IPivotAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IPivotAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IPivotAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IPivotItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IPivotItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IPivotItemAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IPivotItemAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IPivotItemDataAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IPivotItemDataAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IPivotItemDataAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IPivotItemDataAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IProgressBarAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IProgressBarAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IProgressRingAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IProgressRingAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IRadioButtonAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IRadioButtonAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IRangeBaseAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IRangeBaseAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IRatingControlAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IRatingControlAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IRatingControlAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IRatingControlAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IRepeatButtonAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IRepeatButtonAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IRichEditBoxAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IRichEditBoxAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IRichTextBlockAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IRichTextBlockAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IRichTextBlockOverflowAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IRichTextBlockOverflowAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IScrollBarAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IScrollBarAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IScrollViewerAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IScrollViewerAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ISearchBoxAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.ISearchBoxAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ISelectorAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.ISelectorAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ISelectorItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.ISelectorItemAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ISemanticZoomAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.ISemanticZoomAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ISettingsFlyoutAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.ISettingsFlyoutAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ISliderAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.ISliderAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ITextBlockAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.ITextBlockAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ITextBoxAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.ITextBoxAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IThumbAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IThumbAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ITimePickerAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.ITimePickerAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ITimePickerFlyoutPresenterAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ITimePickerFlyoutPresenterAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IToggleButtonAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IToggleButtonAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IToggleMenuFlyoutItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IToggleMenuFlyoutItemAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.IToggleSwitchAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.IToggleSwitchAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ITreeViewItemAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ITreeViewItemAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ITreeViewItemAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.ITreeViewItemAutomationPeerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ITreeViewListAutomationPeer> = L"Windows.UI.Xaml.Automation.Peers.ITreeViewListAutomationPeer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Automation::Peers::ITreeViewListAutomationPeerFactory> = L"Windows.UI.Xaml.Automation.Peers.ITreeViewListAutomationPeerFactory";
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeer>{ 0x8B4ACFEB,0x89FA,0x4F13,{ 0x84,0xBE,0x35,0xCA,0x5B,0x7C,0x95,0x90 } }; // 8B4ACFEB-89FA-4F13-84BE-35CA5B7C9590
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeerFactory>{ 0x8360F4E2,0xE396,0x4517,{ 0xAF,0x5D,0xF4,0xCF,0x34,0xC5,0x4E,0xDF } }; // 8360F4E2-E396-4517-AF5D-F4CF34C54EDF
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeer>{ 0x443262B2,0x4F6D,0x4B76,{ 0x9D,0x2E,0x3E,0xFF,0x77,0x7E,0x88,0x64 } }; // 443262B2-4F6D-4B76-9D2E-3EFF777E8864
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeerFactory>{ 0xAEF0342A,0xACB7,0x42DC,{ 0x97,0xE3,0x84,0x70,0x71,0x86,0x5F,0xD6 } }; // AEF0342A-ACB7-42DC-97E3-847071865FD6
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeer>{ 0x8464EFAD,0x9655,0x4AFF,{ 0x95,0x50,0x63,0xAE,0x9E,0xC8,0xFE,0x9C } }; // 8464EFAD-9655-4AFF-9550-63AE9EC8FE9C
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeerFactory>{ 0xD6F9139D,0x02C1,0x4221,{ 0x95,0x91,0x7D,0x4E,0xFE,0xB7,0x47,0x01 } }; // D6F9139D-02C1-4221-9591-7D4EFEB74701
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeer>{ 0x2F32C302,0xF99B,0x491D,{ 0x97,0x26,0xA5,0xE1,0x81,0x64,0x3E,0xFA } }; // 2F32C302-F99B-491D-9726-A5E181643EFA
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeerFactory>{ 0x80046849,0x18E7,0x4475,{ 0xB3,0x62,0x4B,0xBD,0x53,0xD2,0x45,0x62 } }; // 80046849-18E7-4475-B362-4BBD53D24562
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeer>{ 0x35AAC87A,0x62EE,0x4D3E,{ 0xA2,0x4C,0x2B,0xC8,0x43,0x2D,0x68,0xB7 } }; // 35AAC87A-62EE-4D3E-A24C-2BC8432D68B7
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeer2>{ 0xEA1F89C7,0xEBF5,0x4AB8,{ 0x88,0xF7,0x68,0x0D,0x82,0x1D,0xAC,0x61 } }; // EA1F89C7-EBF5-4AB8-88F7-680D821DAC61
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeer3>{ 0xD3CFB977,0x0084,0x41D7,{ 0xA2,0x21,0x28,0x15,0x8D,0x3B,0xC3,0x2C } }; // D3CFB977-0084-41D7-A221-28158D3BC32C
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeer4>{ 0x761CE752,0x73C1,0x4F44,{ 0xBE,0x75,0x43,0xC4,0x9E,0xC0,0xD4,0xD5 } }; // 761CE752-73C1-4F44-BE75-43C49EC0D4D5
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeer5>{ 0xF632E1C6,0x0A3F,0x4574,{ 0x9F,0xEF,0xCD,0xC1,0x51,0x76,0x56,0x74 } }; // F632E1C6-0A3F-4574-9FEF-CDC151765674
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeer6>{ 0xCAF8608F,0x13FF,0x42FB,{ 0x86,0x6D,0x22,0x20,0x64,0x34,0xCC,0x6B } }; // CAF8608F-13FF-42FB-866D-22206434CC6B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeer7>{ 0x796B3287,0xE642,0x48AB,{ 0xB2,0x23,0x52,0x08,0xB4,0x1D,0xA9,0xD6 } }; // 796B3287-E642-48AB-B223-5208B41DA9D6
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeer8>{ 0x5C6A1FE6,0x9A55,0x4D7F,{ 0x94,0x98,0xCF,0xE4,0x29,0xE9,0x2D,0xA8 } }; // 5C6A1FE6-9A55-4D7F-9498-CFE429E92DA8
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeer9>{ 0xDF2E0265,0x1D74,0x57FA,{ 0x80,0x94,0xF8,0x1C,0x2F,0x62,0x6B,0x8C } }; // DF2E0265-1D74-57FA-8094-F81C2F626B8C
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotation>{ 0x0C456061,0x52CF,0x43FA,{ 0x82,0xF8,0x07,0xF1,0x37,0x35,0x1E,0x5A } }; // 0C456061-52CF-43FA-82F8-07F137351E5A
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationFactory>{ 0xF59C439E,0xC65B,0x43CD,{ 0x90,0x09,0x03,0xFC,0x02,0x33,0x63,0xA7 } }; // F59C439E-C65B-43CD-9009-03FC023363A7
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationStatics>{ 0x8809A87D,0x09B2,0x4D45,{ 0xB7,0x8B,0x1D,0x3B,0x3B,0x09,0xF6,0x61 } }; // 8809A87D-09B2-4D45-B78B-1D3B3B09F661
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeerFactory>{ 0x20C27545,0xA88B,0x43C8,{ 0xBC,0x24,0xCE,0xA9,0xDA,0xFD,0x04,0xA3 } }; // 20C27545-A88B-43C8-BC24-CEA9DAFD04A3
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides>{ 0xBEA93E67,0xDBEE,0x4F7B,{ 0xAF,0x0D,0xA7,0x9A,0xAE,0x53,0x33,0xBF } }; // BEA93E67-DBEE-4F7B-AF0D-A79AAE5333BF
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2>{ 0x2603682A,0x9DA6,0x4023,{ 0xB4,0x96,0x49,0x6E,0x5E,0xF2,0x28,0xD2 } }; // 2603682A-9DA6-4023-B496-496E5EF228D2
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3>{ 0xB6F0C4AD,0x4D39,0x49E6,{ 0xBB,0x91,0xD9,0x24,0xEE,0xFD,0x85,0x38 } }; // B6F0C4AD-4D39-49E6-BB91-D924EEFD8538
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4>{ 0xB186CDA2,0x5D46,0x4BCD,{ 0xA8,0x11,0x26,0x9A,0xD1,0x5B,0x3A,0xEE } }; // B186CDA2-5D46-4BCD-A811-269AD15B3AEE
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5>{ 0x2C847C85,0x781E,0x49F7,{ 0x9F,0xEF,0xB9,0xE1,0x4D,0x01,0x47,0x07 } }; // 2C847C85-781E-49F7-9FEF-B9E14D014707
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6>{ 0xE98BABE7,0xF6FF,0x444C,{ 0x9C,0x0D,0x27,0x7E,0xAF,0x0A,0xD9,0xC0 } }; // E98BABE7-F6FF-444C-9C0D-277EAF0AD9C0
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides8>{ 0x0E1EBBD4,0xA003,0x4936,{ 0x81,0x75,0xF5,0x45,0x7C,0x07,0xF0,0xC6 } }; // 0E1EBBD4-A003-4936-8175-F5457C07F0C6
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides9>{ 0xF3709E8B,0x091A,0x5DB5,{ 0xB8,0x96,0xFF,0x78,0xF0,0x19,0x90,0xC9 } }; // F3709E8B-091A-5DB5-B896-FF78F01990C9
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected>{ 0xF4B40E52,0x642F,0x4629,{ 0xA5,0x4A,0xEA,0x5D,0x23,0x49,0xC4,0x48 } }; // F4B40E52-642F-4629-A54A-EA5D2349C448
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeerStatics>{ 0x562F7FB0,0xA331,0x4A9C,{ 0x9D,0xEC,0xBF,0xB7,0x58,0x6F,0xFF,0xFF } }; // 562F7FB0-A331-4A9C-9DEC-BFB7586FFFFF
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IAutomationPeerStatics3>{ 0x572C5714,0x7F87,0x4271,{ 0x81,0x9F,0x6C,0xF4,0xC4,0xD0,0x22,0xD0 } }; // 572C5714-7F87-4271-819F-6CF4C4D022D0
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeer>{ 0xFB77EFBE,0x39EC,0x4508,{ 0x8A,0xC3,0x51,0xA1,0x42,0x40,0x27,0xD7 } }; // FB77EFBE-39EC-4508-8AC3-51A1424027D7
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeerFactory>{ 0x3FDB9F49,0xF4AB,0x4780,{ 0x86,0x44,0x03,0x37,0x62,0x99,0xA1,0x75 } }; // 3FDB9F49-F4AB-4780-8644-03376299A175
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer>{ 0xA4F3B5B6,0x7585,0x4E0B,{ 0x96,0xD2,0x08,0xCF,0x6F,0x28,0xBE,0xFA } }; // A4F3B5B6-7585-4E0B-96D2-08CF6F28BEFA
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeerFactory>{ 0x8A04091E,0xE6B2,0x4C60,{ 0xA7,0x59,0xC1,0x3C,0xA4,0x51,0x65,0xED } }; // 8A04091E-E6B2-4C60-A759-C13CA45165ED
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::ICalendarDatePickerAutomationPeer>{ 0x40D8938E,0xDB5E,0x4B03,{ 0xBE,0xBA,0xD1,0x0F,0x62,0x41,0x97,0x87 } }; // 40D8938E-DB5E-4B03-BEBA-D10F62419787
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::ICalendarDatePickerAutomationPeerFactory>{ 0xAB705DD2,0xD293,0x45BF,{ 0x9F,0x19,0x26,0xF7,0x60,0x3A,0x5E,0x9B } }; // AB705DD2-D293-45BF-9F19-26F7603A5E9B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeer>{ 0xDCC44EE0,0xFA45,0x45C6,{ 0x8B,0xB7,0x32,0x0D,0x80,0x8F,0x59,0x58 } }; // DCC44EE0-FA45-45C6-8BB7-320D808F5958
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeerFactory>{ 0x9B92EF48,0x85E9,0x4869,{ 0xB1,0x75,0x8F,0x7C,0xF4,0x5A,0x6D,0x9F } }; // 9B92EF48-85E9-4869-B175-8F7CF45A6D9F
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeer>{ 0xEB15BC42,0xC0A9,0x46C6,{ 0xAC,0x24,0xB8,0x3D,0xE4,0x29,0xC7,0x33 } }; // EB15BC42-C0A9-46C6-AC24-B83DE429C733
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeerFactory>{ 0xB75C775D,0xEB8F,0x44EF,{ 0xA2,0x7C,0xE2,0x6A,0xC7,0xDE,0x83,0x33 } }; // B75C775D-EB8F-44EF-A27C-E26AC7DE8333
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IColorPickerSliderAutomationPeer>{ 0xA514215A,0x7293,0x4577,{ 0x92,0x4C,0x47,0xD4,0xE0,0xBF,0x9B,0x90 } }; // A514215A-7293-4577-924C-47D4E0BF9B90
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IColorPickerSliderAutomationPeerFactory>{ 0x1A55C77E,0x9DD6,0x45A3,{ 0x90,0x42,0xB4,0x02,0x00,0xFE,0xA1,0xA9 } }; // 1A55C77E-9DD6-45A3-9042-B40200FEA1A9
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IColorSpectrumAutomationPeer>{ 0x15D5BA03,0x010D,0x4FF7,{ 0x90,0x87,0xF4,0xDD,0x09,0xF8,0x31,0xB7 } }; // 15D5BA03-010D-4FF7-9087-F4DD09F831B7
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IColorSpectrumAutomationPeerFactory>{ 0x0AC400E1,0xB743,0x4496,{ 0x83,0x7A,0x88,0x89,0xE6,0xAC,0x64,0x97 } }; // 0AC400E1-B743-4496-837A-8889E6AC6497
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeer>{ 0x7EB40D0B,0x75C5,0x4263,{ 0xBA,0x6A,0xD4,0xA5,0x4F,0xB0,0xF2,0x39 } }; // 7EB40D0B-75C5-4263-BA6A-D4A54FB0F239
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeerFactory>{ 0x098E5B0D,0x1B90,0x40B9,{ 0x9B,0xE3,0xB2,0x32,0x67,0xEB,0x13,0xCF } }; // 098E5B0D-1B90-40B9-9BE3-B23267EB13CF
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeer>{ 0x12DDC76E,0x9552,0x446A,{ 0x82,0xEE,0x93,0x8C,0xC3,0x71,0x80,0x0F } }; // 12DDC76E-9552-446A-82EE-938CC371800F
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeerFactory>{ 0x134AC7FC,0x397A,0x403F,{ 0xA6,0xEC,0x1C,0xE8,0xBE,0xDA,0x15,0xE5 } }; // 134AC7FC-397A-403F-A6EC-1CE8BEDA15E5
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeer>{ 0x4FEF6DF2,0x289C,0x4C04,{ 0x83,0x1B,0x5A,0x66,0x8C,0x6D,0x71,0x04 } }; // 4FEF6DF2-289C-4C04-831B-5A668C6D7104
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeerFactory>{ 0x14A8D4F6,0x469A,0x41BA,{ 0x9D,0x93,0x44,0xA1,0xA5,0x5D,0xA8,0x72 } }; // 14A8D4F6-469A-41BA-9D93-44A1A55DA872
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeer>{ 0xD07D357F,0xA0B9,0x45DC,{ 0x99,0x1A,0x76,0xC5,0x05,0xE7,0xD0,0xF5 } }; // D07D357F-A0B9-45DC-991A-76C505E7D0F5
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeerFactory>{ 0xE5667D19,0x9157,0x4436,{ 0x9F,0x4D,0x7F,0xB9,0x91,0x74,0xB4,0x8E } }; // E5667D19-9157-4436-9F4D-7FB99174B48E
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IDatePickerFlyoutPresenterAutomationPeer>{ 0x752AED38,0xC2BF,0x4880,{ 0x82,0xB2,0xA6,0xC0,0x5E,0x90,0xC1,0x35 } }; // 752AED38-C2BF-4880-82B2-A6C05E90C135
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeer>{ 0x8EC0353A,0x4284,0x4B00,{ 0xAE,0xF8,0xA2,0x68,0x8E,0xA5,0xE3,0xC4 } }; // 8EC0353A-4284-4B00-AEF8-A2688EA5E3C4
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeerFactory>{ 0x4395AB0D,0x8D83,0x483C,{ 0x88,0xEB,0xE2,0x61,0x7B,0x0D,0x29,0x3F } }; // 4395AB0D-8D83-483C-88EB-E2617B0D293F
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeer>{ 0xC83034DE,0xFA08,0x4BD3,{ 0xAE,0xB2,0xD2,0xE5,0xBF,0xA0,0x4D,0xF9 } }; // C83034DE-FA08-4BD3-AEB2-D2E5BFA04DF9
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeerFactory>{ 0x69109356,0xD0E5,0x4C10,{ 0xA0,0x9C,0xAD,0x0B,0xF1,0xB0,0xCB,0x01 } }; // 69109356-D0E5-4C10-A09C-AD0BF1B0CB01
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeer>{ 0xB0986175,0x00BC,0x4118,{ 0x8A,0x6F,0x16,0xEE,0x9C,0x15,0xD9,0x68 } }; // B0986175-00BC-4118-8A6F-16EE9C15D968
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeerFactory>{ 0x3C864393,0x0AEA,0x4E78,{ 0xBC,0x11,0xB7,0x75,0xCA,0xC4,0x11,0x4C } }; // 3C864393-0AEA-4E78-BC11-B775CAC4114C
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeer>{ 0xA01840B4,0x5FCA,0x456F,{ 0x98,0xEA,0x30,0x0E,0xB4,0x0B,0x58,0x5E } }; // A01840B4-5FCA-456F-98EA-300EB40B585E
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeerFactory>{ 0xF350155F,0x8924,0x44C0,{ 0xBA,0x44,0x65,0x3F,0xE7,0x9F,0x1E,0xFB } }; // F350155F-8924-44C0-BA44-653FE79F1EFB
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer>{ 0xB90AD781,0xBFEB,0x4451,{ 0xBD,0x47,0x9F,0x3A,0x63,0xEB,0xD2,0x4A } }; // B90AD781-BFEB-4451-BD47-9F3A63EBD24A
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerFactory>{ 0x0DB9B8BC,0xB812,0x48E3,{ 0xAF,0x1F,0xDB,0xC5,0x76,0x00,0xC3,0x25 } }; // 0DB9B8BC-B812-48E3-AF1F-DBC57600C325
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerStatics>{ 0xB9C0B997,0x2820,0x44A1,{ 0xA5,0xA8,0x9B,0x80,0x1E,0xDC,0x26,0x9E } }; // B9C0B997-2820-44A1-A5A8-9B801EDC269E
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeer>{ 0x1C4401A4,0xD951,0x49CA,{ 0x8F,0x82,0xC7,0xF3,0xC6,0x06,0x81,0xB0 } }; // 1C4401A4-D951-49CA-8F82-C7F3C60681B0
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeerFactory>{ 0x8ACA59DD,0x22A7,0x4800,{ 0x89,0x4B,0xC1,0xF4,0x85,0xF3,0x89,0x53 } }; // 8ACA59DD-22A7-4800-894B-C1F485F38953
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeer>{ 0xE3DCEF3A,0xE08A,0x48E7,{ 0xB2,0x3A,0x2B,0xE5,0xB6,0x6E,0x47,0x4E } }; // E3DCEF3A-E08A-48E7-B23A-2BE5B66E474E
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeerFactory>{ 0x2C80B4D2,0xFFC2,0x4157,{ 0x88,0xDD,0x59,0xCD,0x92,0xE3,0x97,0x15 } }; // 2C80B4D2-FFC2-4157-88DD-59CD92E39715
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeer>{ 0x93EF2D07,0x346C,0x4166,{ 0xA4,0xBA,0xBC,0x6A,0x18,0x1E,0x7F,0x33 } }; // 93EF2D07-346C-4166-A4BA-BC6A181E7F33
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeerFactory>{ 0xFAFEC376,0xF22E,0x466D,{ 0x91,0x3C,0xAE,0x24,0xCC,0xDB,0x16,0x0F } }; // FAFEC376-F22E-466D-913C-AE24CCDB160F
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeer>{ 0xF3F4868F,0x29D4,0x4094,{ 0x8C,0x54,0xEA,0x61,0xA8,0x82,0x94,0xA4 } }; // F3F4868F-29D4-4094-8C54-EA61A88294A4
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeerFactory>{ 0xA65E7A88,0x770D,0x402C,{ 0x99,0x6F,0x67,0x50,0x6A,0xF2,0xA4,0xAF } }; // A65E7A88-770D-402C-996F-67506AF2A4AF
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeer>{ 0x1914FE6D,0x0740,0x4236,{ 0x9E,0xE1,0x38,0xCF,0x19,0xC1,0xC3,0x88 } }; // 1914FE6D-0740-4236-9EE1-38CF19C1C388
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeerFactory>{ 0x56A64567,0xF21C,0x4C90,{ 0xB3,0x79,0x15,0xA2,0x7C,0x7F,0x84,0x09 } }; // 56A64567-F21C-4C90-B379-15A27C7F8409
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IHubAutomationPeer>{ 0x4DDEE056,0x4EBC,0x4620,{ 0xA0,0x5D,0x90,0x3E,0x3C,0x9A,0x4E,0xAD } }; // 4DDEE056-4EBC-4620-A05D-903E3C9A4EAD
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IHubAutomationPeerFactory>{ 0xC762D43F,0x79DD,0x43EE,{ 0x87,0x77,0x8D,0x08,0xB3,0x9A,0xA0,0x65 } }; // C762D43F-79DD-43EE-8777-8D08B39AA065
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeer>{ 0x16D91FF7,0x7431,0x4D82,{ 0x83,0xCE,0xCF,0xA3,0x19,0x2B,0x0F,0x18 } }; // 16D91FF7-7431-4D82-83CE-CFA3192B0F18
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeerFactory>{ 0xC68E27E8,0x17EC,0x4329,{ 0x91,0xAE,0x2D,0x0B,0x23,0x39,0xD4,0x98 } }; // C68E27E8-17EC-4329-91AE-2D0B2339D498
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeer>{ 0xAA7AFCB1,0x0EDF,0x46D9,{ 0xAA,0x9E,0x0E,0xB2,0x1D,0x14,0x00,0x97 } }; // AA7AFCB1-0EDF-46D9-AA9E-0EB21D140097
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeerFactory>{ 0x59BC1661,0xC182,0x49AF,{ 0x95,0x26,0x44,0xB8,0x8E,0x62,0x84,0x55 } }; // 59BC1661-C182-49AF-9526-44B88E628455
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IImageAutomationPeer>{ 0x9B0BBF8C,0x60A2,0x48BF,{ 0xAB,0x2C,0x1A,0x52,0xA4,0x51,0xD2,0xD4 } }; // 9B0BBF8C-60A2-48BF-AB2C-1A52A451D2D4
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IImageAutomationPeerFactory>{ 0x90304003,0x687D,0x47BF,{ 0xB3,0xA2,0x4B,0xAB,0xCA,0xD8,0xEF,0x50 } }; // 90304003-687D-47BF-B3A2-4BABCAD8EF50
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IInkToolbarAutomationPeer>{ 0x123BAAA4,0xF2E8,0x4BCB,{ 0x93,0x82,0x5D,0xFD,0xD1,0x1F,0xE4,0x5F } }; // 123BAAA4-F2E8-4BCB-9382-5DFDD11FE45F
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer>{ 0x953C34F6,0x3B31,0x47A7,{ 0xB3,0xBF,0x25,0xD3,0xAE,0x99,0xC3,0x17 } }; // 953C34F6-3B31-47A7-B3BF-25D3AE99C317
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IItemAutomationPeerFactory>{ 0x29065073,0xDE3D,0x4D3F,{ 0x97,0xB4,0x4D,0x6F,0x9D,0x53,0x44,0x4D } }; // 29065073-DE3D-4D3F-97B4-4D6F9D53444D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer>{ 0x96E76BF1,0x37F7,0x4088,{ 0x92,0x5D,0x65,0x26,0x8E,0x83,0xE3,0x4D } }; // 96E76BF1-37F7-4088-925D-65268E83E34D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer2>{ 0xC48D8917,0x95A8,0x47B8,{ 0xA5,0x17,0xBF,0x89,0x1A,0x6C,0x03,0x9B } }; // C48D8917-95A8-47B8-A517-BF891A6C039B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerFactory>{ 0x4038A259,0x2E1A,0x49CA,{ 0xA5,0x33,0xC6,0x4F,0x18,0x15,0x77,0xE6 } }; // 4038A259-2E1A-49CA-A533-C64F181577E6
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2>{ 0x361DC0E8,0xB56F,0x45E9,{ 0x80,0xFE,0x10,0xA0,0xFB,0x0F,0xE1,0x77 } }; // 361DC0E8-B56F-45E9-80FE-10A0FB0FE177
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeer>{ 0x8CD0D608,0xB402,0x4A6E,{ 0xBD,0x9A,0x34,0x3F,0x88,0x45,0xEB,0x32 } }; // 8CD0D608-B402-4A6E-BD9A-343F8845EB32
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeerFactory>{ 0xE2362185,0x7DF6,0x49F7,{ 0x8A,0xBC,0x4C,0x33,0xF1,0xA3,0xD4,0x6E } }; // E2362185-7DF6-49F7-8ABC-4C33F1A3D46E
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeer>{ 0x1BC6E1C6,0x2997,0x42DF,{ 0x99,0xEB,0x92,0xBC,0x1D,0xD1,0x49,0xFB } }; // 1BC6E1C6-2997-42DF-99EB-92BC1DD149FB
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeerFactory>{ 0x509F9DD8,0xB0AA,0x443F,{ 0xA1,0x10,0x41,0x20,0x9A,0xF4,0x4F,0x1C } }; // 509F9DD8-B0AA-443F-A110-41209AF44F1C
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeer>{ 0xFD7D5FEE,0xFDE0,0x482A,{ 0x80,0x84,0xDC,0xEB,0xBA,0x5B,0x98,0x06 } }; // FD7D5FEE-FDE0-482A-8084-DCEBBA5B9806
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeerFactory>{ 0xD7924E16,0xBD8D,0x4662,{ 0xA9,0x95,0x20,0xFF,0x9A,0x05,0x60,0x93 } }; // D7924E16-BD8D-4662-A995-20FF9A056093
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IListPickerFlyoutPresenterAutomationPeer>{ 0x56DFDC58,0x2395,0x4060,{ 0x80,0x47,0x8E,0xA4,0x63,0x69,0x8A,0x24 } }; // 56DFDC58-2395-4060-8047-8EA463698A24
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeer>{ 0x73CECC87,0xC0DC,0x4260,{ 0x91,0x48,0x75,0xE9,0x86,0x4A,0x72,0x30 } }; // 73CECC87-C0DC-4260-9148-75E9864A7230
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeerFactory>{ 0x65F39174,0xEAA2,0x4E44,{ 0x8B,0xE6,0x4C,0xCA,0x28,0xCD,0x02,0x88 } }; // 65F39174-EAA2-4E44-8BE6-4CCA28CD0288
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeer>{ 0x87EC7649,0xB83D,0x4E55,{ 0x9A,0xFD,0xBD,0x83,0x5E,0x74,0x8F,0x5C } }; // 87EC7649-B83D-4E55-9AFD-BD835E748F5C
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeerFactory>{ 0x70D3C2BE,0x8950,0x4647,{ 0x93,0x62,0xFD,0x00,0x2F,0x8F,0xF8,0x2E } }; // 70D3C2BE-8950-4647-9362-FD002F8FF82E
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeer>{ 0x7CB8B732,0xC1F0,0x4A3C,{ 0xBC,0x14,0x85,0xDD,0x48,0xDE,0xDB,0x85 } }; // 7CB8B732-C1F0-4A3C-BC14-85DD48DEDB85
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeerFactory>{ 0x40EC995F,0xD631,0x4004,{ 0x83,0x2E,0x6D,0x86,0x43,0xE5,0x15,0x61 } }; // 40EC995F-D631-4004-832E-6D8643E51561
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeer>{ 0x67AB1E4B,0xAD61,0x4C88,{ 0xBA,0x45,0x0F,0x3A,0x8D,0x06,0x1F,0x8F } }; // 67AB1E4B-AD61-4C88-BA45-0F3A8D061F8F
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeerFactory>{ 0x07668694,0x2CA5,0x4BE4,{ 0xA8,0xB9,0x59,0x2D,0x48,0xF7,0x60,0x87 } }; // 07668694-2CA5-4BE4-A8B9-592D48F76087
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeer>{ 0xCA114E70,0xA16D,0x4D09,{ 0xA1,0xCF,0x18,0x56,0xEF,0x98,0xA9,0xEC } }; // CA114E70-A16D-4D09-A1CF-1856EF98A9EC
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeerFactory>{ 0xC47DFBC0,0xFACC,0x4024,{ 0xA7,0x3B,0x17,0xEC,0x4E,0x66,0x26,0x54 } }; // C47DFBC0-FACC-4024-A73B-17EC4E662654
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeer>{ 0x15A8D7FD,0xD7A5,0x4A6C,{ 0x96,0x3C,0x6F,0x7C,0xE4,0x64,0x67,0x1A } }; // 15A8D7FD-D7A5-4A6C-963C-6F7CE464671A
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeerFactory>{ 0xD0DB12BB,0xD715,0x4523,{ 0xAC,0xC0,0x1E,0x10,0x72,0xD8,0xE3,0x2B } }; // D0DB12BB-D715-4523-ACC0-1E1072D8E32B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::ILoopingSelectorAutomationPeer>{ 0x50B406CA,0xBAE9,0x4816,{ 0x8A,0x3A,0x0C,0xB4,0xF9,0x64,0x78,0xA2 } }; // 50B406CA-BAE9-4816-8A3A-0CB4F96478A2
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::ILoopingSelectorItemAutomationPeer>{ 0xD3FA68BF,0x04CF,0x4F4C,{ 0x8D,0x3E,0x47,0x80,0xA1,0x9D,0x47,0x88 } }; // D3FA68BF-04CF-4F4C-8D3E-4780A19D4788
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::ILoopingSelectorItemDataAutomationPeer>{ 0xEF567E32,0x7CD2,0x4D32,{ 0x95,0x90,0x1F,0x58,0x8D,0x5E,0xF3,0x8D } }; // EF567E32-7CD2-4D32-9590-1F588D5EF38D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IMapControlAutomationPeer>{ 0x425BEEE4,0xF2E8,0x4BCB,{ 0x93,0x82,0x5D,0xFD,0xD1,0x1F,0xE4,0x5F } }; // 425BEEE4-F2E8-4BCB-9382-5DFDD11FE45F
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeer>{ 0xBA0B9FC2,0xA6E2,0x41A5,{ 0xB1,0x7A,0xD1,0x59,0x46,0x13,0xEF,0xBA } }; // BA0B9FC2-A6E2-41A5-B17A-D1594613EFBA
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeerFactory>{ 0xB2AD3B28,0x7575,0x4173,{ 0x9B,0xC7,0x80,0x36,0x7A,0x16,0x4E,0xD2 } }; // B2AD3B28-7575-4173-9BC7-80367A164ED2
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeer>{ 0x02BED209,0x3F65,0x4FDD,{ 0xB5,0xCA,0xC4,0x75,0x0D,0x4E,0x6E,0xA4 } }; // 02BED209-3F65-4FDD-B5CA-C4750D4E6EA4
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeerFactory>{ 0x08848077,0x82AF,0x4D19,{ 0xB1,0x70,0x28,0x2A,0x9E,0x0E,0x7F,0x37 } }; // 08848077-82AF-4D19-B170-282A9E0E7F37
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeer>{ 0xA3AD8D93,0x79F8,0x4958,{ 0xA3,0xC8,0x98,0x0D,0xEF,0xB8,0x3D,0x15 } }; // A3AD8D93-79F8-4958-A3C8-980DEFB83D15
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeerFactory>{ 0xF41CB003,0xE103,0x4AB0,{ 0x81,0x2A,0xA0,0x8F,0xBD,0xB5,0x70,0xCE } }; // F41CB003-E103-4AB0-812A-A08FBDB570CE
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IMenuBarAutomationPeer>{ 0x4B6ADCF1,0xF274,0x5592,{ 0x85,0xA8,0x7B,0x09,0x9E,0x99,0xB3,0x20 } }; // 4B6ADCF1-F274-5592-85A8-7B099E99B320
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IMenuBarAutomationPeerFactory>{ 0x2A094871,0x4A9B,0x5A0B,{ 0x9F,0xDA,0x7B,0xC3,0xAE,0x95,0x7C,0x53 } }; // 2A094871-4A9B-5A0B-9FDA-7BC3AE957C53
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IMenuBarItemAutomationPeer>{ 0x0FCE49B4,0xCFF5,0x5C4B,{ 0x98,0xEE,0xE7,0x5F,0xDD,0xDF,0x79,0x9A } }; // 0FCE49B4-CFF5-5C4B-98EE-E75FDDDF799A
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IMenuBarItemAutomationPeerFactory>{ 0xC9C77746,0x130F,0x5B19,{ 0x83,0xA6,0x61,0xDB,0x58,0x46,0x13,0xAA } }; // C9C77746-130F-5B19-83A6-61DB584613AA
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeer>{ 0x1FC19462,0x21DF,0x456E,{ 0xAA,0x11,0x8F,0xAC,0x6B,0x4B,0x2A,0xF6 } }; // 1FC19462-21DF-456E-AA11-8FAC6B4B2AF6
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeerFactory>{ 0xD08BFCB8,0x20D1,0x45D8,{ 0xA2,0xC2,0x2F,0x13,0x0D,0xF7,0x14,0xE0 } }; // D08BFCB8-20D1-45D8-A2C2-2F130DF714E0
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeer>{ 0xE244A871,0xFCBB,0x48FC,{ 0x8A,0x93,0x41,0xEA,0x13,0x4B,0x53,0xCE } }; // E244A871-FCBB-48FC-8A93-41EA134B53CE
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeerFactory>{ 0x07B5172D,0x761D,0x452B,{ 0x9E,0x6D,0xFA,0x2A,0x8B,0xE0,0xAD,0x26 } }; // 07B5172D-761D-452B-9E6D-FA2A8BE0AD26
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::INavigationViewItemAutomationPeer>{ 0x309847A5,0x9971,0x4D8D,{ 0xA8,0x1C,0x08,0x5C,0x70,0x86,0xA1,0xB9 } }; // 309847A5-9971-4D8D-A81C-085C7086A1B9
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::INavigationViewItemAutomationPeerFactory>{ 0x0BC2835D,0xAA38,0x4F97,{ 0x96,0x64,0xE6,0xFC,0x82,0x1D,0x81,0xED } }; // 0BC2835D-AA38-4F97-9664-E6FC821D81ED
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeer>{ 0x684F065E,0x3DF3,0x4B9F,{ 0x82,0xAD,0x88,0x19,0xDB,0x3B,0x21,0x8A } }; // 684F065E-3DF3-4B9F-82AD-8819DB3B218A
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeerFactory>{ 0xAC3D7EDE,0xDCA4,0x481C,{ 0xB5,0x20,0x4A,0x9B,0x3F,0x3B,0x17,0x9C } }; // AC3D7EDE-DCA4-481C-B520-4A9B3F3B179C
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IPersonPictureAutomationPeer>{ 0x27156D4C,0xA66F,0x4AAF,{ 0x82,0x86,0x4F,0x79,0x6D,0x30,0x62,0x8C } }; // 27156D4C-A66F-4AAF-8286-4F796D30628C
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IPersonPictureAutomationPeerFactory>{ 0xA95F1F6D,0x2524,0x44A4,{ 0x97,0xFD,0x11,0x81,0x13,0x01,0x00,0xAD } }; // A95F1F6D-2524-44A4-97FD-1181130100AD
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IPickerFlyoutPresenterAutomationPeer>{ 0x28414BF7,0x8382,0x4EAE,{ 0x93,0xC1,0xD6,0xF0,0x35,0xAA,0x81,0x55 } }; // 28414BF7-8382-4EAE-93C1-D6F035AA8155
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IPivotAutomationPeer>{ 0xE715A8F8,0x3B9D,0x402C,{ 0x81,0xE2,0x6E,0x91,0x2E,0xF5,0x89,0x81 } }; // E715A8F8-3B9D-402C-81E2-6E912EF58981
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IPivotAutomationPeerFactory>{ 0x3EFE0F94,0x0C91,0x4341,{ 0xB9,0xAC,0x1B,0x56,0xB4,0xE6,0xB8,0x4F } }; // 3EFE0F94-0C91-4341-B9AC-1B56B4E6B84F
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IPivotItemAutomationPeer>{ 0x1A4241AD,0x5D55,0x4D27,{ 0xB4,0x0F,0x2D,0x37,0x50,0x6F,0xBE,0x78 } }; // 1A4241AD-5D55-4D27-B40F-2D37506FBE78
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IPivotItemAutomationPeerFactory>{ 0xF2810471,0x183F,0x416B,{ 0xB4,0x1A,0x1E,0x5A,0x95,0x8A,0x91,0xF4 } }; // F2810471-183F-416B-B41A-1E5A958A91F4
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IPivotItemDataAutomationPeer>{ 0xA2A3B788,0xEA1D,0x48B7,{ 0x88,0xEE,0xF0,0x8B,0x6A,0xA0,0x7F,0xEE } }; // A2A3B788-EA1D-48B7-88EE-F08B6AA07FEE
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IPivotItemDataAutomationPeerFactory>{ 0x517A2480,0xD3B6,0x412E,{ 0x82,0xB6,0x94,0xA0,0xA8,0x4C,0x13,0xB0 } }; // 517A2480-D3B6-412E-82B6-94A0A84C13B0
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeer>{ 0x93F48F86,0xD840,0x4FB6,{ 0xAC,0x2F,0x5F,0x77,0x9B,0x85,0x4B,0x0D } }; // 93F48F86-D840-4FB6-AC2F-5F779B854B0D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeerFactory>{ 0x364679AB,0xB80F,0x41B4,{ 0x8E,0xEA,0x2F,0x52,0x51,0xBC,0x73,0x9C } }; // 364679AB-B80F-41B4-8EEA-2F5251BC739C
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeer>{ 0xBC305EEE,0x39D3,0x4EEB,{ 0xAC,0x33,0x23,0x94,0xDE,0x12,0x3E,0x2E } }; // BC305EEE-39D3-4EEB-AC33-2394DE123E2E
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeerFactory>{ 0xF3DB204B,0x157E,0x40BC,{ 0x95,0x93,0x55,0xBC,0x5C,0x71,0xA4,0xF6 } }; // F3DB204B-157E-40BC-9593-55BC5C71A4F6
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeer>{ 0x7E6A5ED8,0x0B30,0x4743,{ 0xB1,0x02,0xDC,0xDF,0x54,0x8E,0x31,0x31 } }; // 7E6A5ED8-0B30-4743-B102-DCDF548E3131
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeerFactory>{ 0x4940C4FD,0x3D88,0x49CA,{ 0x8F,0x31,0x92,0x41,0x87,0xAF,0x0B,0xFE } }; // 4940C4FD-3D88-49CA-8F31-924187AF0BFE
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeer>{ 0xE454B549,0x4B2C,0x42AD,{ 0xB0,0x4B,0xD3,0x59,0x47,0xD1,0xEE,0x50 } }; // E454B549-4B2C-42AD-B04B-D35947D1EE50
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeerFactory>{ 0x827C7601,0x3078,0x4479,{ 0x95,0xEA,0x91,0x37,0x4C,0xA0,0x62,0x07 } }; // 827C7601-3078-4479-95EA-91374CA06207
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IRatingControlAutomationPeer>{ 0x3D14349A,0x9963,0x4A47,{ 0x82,0x3C,0xF4,0x57,0xCB,0x32,0x09,0xD5 } }; // 3D14349A-9963-4A47-823C-F457CB3209D5
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IRatingControlAutomationPeerFactory>{ 0xF179F272,0x9846,0x4632,{ 0x8B,0x9C,0xBE,0x6F,0xA8,0xD3,0xC9,0xBB } }; // F179F272-9846-4632-8B9C-BE6FA8D3C9BB
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeer>{ 0x29E41AD5,0xA8AC,0x4E8A,{ 0x83,0xD8,0x09,0xE3,0x7E,0x05,0x42,0x57 } }; // 29E41AD5-A8AC-4E8A-83D8-09E37E054257
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeerFactory>{ 0x6A6FF9D4,0x575E,0x4E60,{ 0xBD,0xD6,0xEC,0x14,0x41,0x9B,0x4F,0xF6 } }; // 6A6FF9D4-575E-4E60-BDD6-EC14419B4FF6
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeer>{ 0xC69F5C04,0x16EE,0x467A,{ 0xA8,0x33,0xC3,0xDA,0x84,0x58,0xAD,0x64 } }; // C69F5C04-16EE-467A-A833-C3DA8458AD64
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeerFactory>{ 0x752C8399,0xD296,0x4D87,{ 0x90,0x20,0xA4,0x75,0x0E,0x88,0x5B,0x3C } }; // 752C8399-D296-4D87-9020-A4750E885B3C
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeer>{ 0x93A01A9C,0x9609,0x41FA,{ 0x82,0xF3,0x90,0x9C,0x09,0xF4,0x9A,0x72 } }; // 93A01A9C-9609-41FA-82F3-909C09F49A72
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeerFactory>{ 0x2038AE61,0x1389,0x467A,{ 0xAE,0xD6,0x37,0x33,0x4D,0xA9,0x62,0x2B } }; // 2038AE61-1389-467A-AED6-37334DA9622B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeer>{ 0x8C9A409A,0x2736,0x437B,{ 0xAB,0x36,0xA1,0x6A,0x20,0x2F,0x10,0x5D } }; // 8C9A409A-2736-437B-AB36-A16A202F105D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeerFactory>{ 0xBD5EB663,0x2C14,0x4665,{ 0xAD,0xEF,0xF2,0xB0,0x33,0x94,0x7B,0xEB } }; // BD5EB663-2C14-4665-ADEF-F2B033947BEB
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeer>{ 0x69E0C369,0xBBE7,0x41F2,{ 0x87,0xCA,0xAA,0xD8,0x13,0xFE,0x55,0x0E } }; // 69E0C369-BBE7-41F2-87CA-AAD813FE550E
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeerFactory>{ 0xE1302110,0xAFEB,0x4595,{ 0x8E,0x3D,0xED,0xC0,0x84,0x4A,0x2B,0x21 } }; // E1302110-AFEB-4595-8E3D-EDC0844A2B21
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeer>{ 0xD985F259,0x1B09,0x4E88,{ 0x88,0xFD,0x42,0x17,0x50,0xDC,0x6B,0x45 } }; // D985F259-1B09-4E88-88FD-421750DC6B45
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeerFactory>{ 0x270DFF7D,0xD96D,0x48F9,{ 0xA3,0x6A,0xC2,0x52,0xAA,0x9C,0x46,0x70 } }; // 270DFF7D-D96D-48F9-A36A-C252AA9C4670
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeer>{ 0x854011A4,0x18A6,0x4F30,{ 0x93,0x9B,0x88,0x71,0xAF,0xA3,0xF5,0xE9 } }; // 854011A4-18A6-4F30-939B-8871AFA3F5E9
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeerFactory>{ 0xB3C01430,0x7FAA,0x41BB,{ 0x8E,0x91,0x7C,0x76,0x1C,0x52,0x67,0xF1 } }; // B3C01430-7FAA-41BB-8E91-7C761C5267F1
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeer>{ 0x162AC829,0x7115,0x43EC,{ 0xB3,0x83,0xA7,0xB7,0x16,0x44,0x06,0x9D } }; // 162AC829-7115-43EC-B383-A7B71644069D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeerFactory>{ 0x7B525646,0x829B,0x4DCC,{ 0xBD,0x52,0x5A,0x8D,0x03,0x99,0x38,0x7A } }; // 7B525646-829B-4DCC-BD52-5A8D0399387A
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeer>{ 0xAE8B3477,0x860A,0x45BB,{ 0xBF,0x7C,0xE1,0xB2,0x74,0x19,0xD1,0xDD } }; // AE8B3477-860A-45BB-BF7C-E1B27419D1DD
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeerFactory>{ 0x66D7EDFB,0x786D,0x4362,{ 0xA9,0x64,0xEB,0xFB,0x21,0x77,0x6C,0x30 } }; // 66D7EDFB-786D-4362-A964-EBFB21776C30
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeer>{ 0x3C2FAC6C,0xA977,0x47FC,{ 0xB4,0x4E,0x27,0x54,0xC0,0xB2,0xBE,0xA9 } }; // 3C2FAC6C-A977-47FC-B44E-2754C0B2BEA9
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeerFactory>{ 0xF518D44D,0xA493,0x4496,{ 0xB0,0x77,0x96,0x74,0xC7,0xF4,0xC5,0xFA } }; // F518D44D-A493-4496-B077-9674C7F4C5FA
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeer>{ 0xD0DE0CDB,0x30CF,0x47A6,{ 0xA5,0xEB,0x9C,0x77,0xF0,0xB0,0xD6,0xDD } }; // D0DE0CDB-30CF-47A6-A5EB-9C77F0B0D6DD
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeerFactory>{ 0xF94762BD,0x8A14,0x40E4,{ 0x94,0xA7,0x3F,0x33,0xC9,0x22,0xE9,0x45 } }; // F94762BD-8A14-40E4-94A7-3F33C922E945
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeer>{ 0xEC30015A,0xD611,0x46D0,{ 0xAE,0x4F,0x6E,0xCF,0x27,0xDF,0xBA,0xA5 } }; // EC30015A-D611-46D0-AE4F-6ECF27DFBAA5
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeerFactory>{ 0x971B8056,0x9A7A,0x4DF9,{ 0x95,0xFA,0x6F,0x5C,0x04,0xC9,0x1C,0xAC } }; // 971B8056-9A7A-4DF9-95FA-6F5C04C91CAC
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeer>{ 0xBE2057F5,0x6715,0x4E69,{ 0xA0,0x50,0x92,0xBD,0x0C,0xE2,0x32,0xA9 } }; // BE2057F5-6715-4E69-A050-92BD0CE232A9
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeerFactory>{ 0x76BF924B,0x7CA0,0x4B01,{ 0xBC,0x5C,0xA8,0xCF,0x4D,0x36,0x91,0xDE } }; // 76BF924B-7CA0-4B01-BC5C-A8CF4D3691DE
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeer>{ 0x3A4F1CA0,0x5E5D,0x4D26,{ 0x90,0x67,0xE7,0x40,0xBF,0x65,0x7A,0x9F } }; // 3A4F1CA0-5E5D-4D26-9067-E740BF657A9F
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeerFactory>{ 0x01F0C067,0x966B,0x4130,{ 0xB8,0x72,0x46,0x9E,0x42,0xBD,0x4A,0x7F } }; // 01F0C067-966B-4130-B872-469E42BD4A7F
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeer>{ 0xDC2949B5,0xB45E,0x4D6D,{ 0x89,0x2F,0xD9,0x42,0x2C,0x95,0x0E,0xFB } }; // DC2949B5-B45E-4D6D-892F-D9422C950EFB
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeerFactory>{ 0x970743FF,0xAF41,0x4600,{ 0xB5,0x5D,0x26,0xD4,0x3D,0xF8,0x60,0xE1 } }; // 970743FF-AF41-4600-B55D-26D43DF860E1
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeer>{ 0xA43D44EF,0x3285,0x4DF7,{ 0xB4,0xA4,0xE4,0xCD,0xF3,0x6A,0x3A,0x17 } }; // A43D44EF-3285-4DF7-B4A4-E4CDF36A3A17
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeerFactory>{ 0x978F6671,0x47F8,0x40A7,{ 0x9E,0x21,0x68,0x12,0x8B,0x16,0xB4,0xFD } }; // 978F6671-47F8-40A7-9E21-68128B16B4FD
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::ITimePickerFlyoutPresenterAutomationPeer>{ 0xDA93EE27,0x82F1,0x4701,{ 0x87,0x06,0xBE,0x29,0x7B,0xF0,0x60,0x43 } }; // DA93EE27-82F1-4701-8706-BE297BF06043
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeer>{ 0x62DBE6C5,0xBC0A,0x45BB,{ 0xBF,0x77,0xEA,0x0F,0x15,0x02,0x89,0x1F } }; // 62DBE6C5-BC0A-45BB-BF77-EA0F1502891F
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeerFactory>{ 0xC9218CC4,0xAD4B,0x4D03,{ 0xA6,0xA4,0x7D,0x59,0xE6,0x36,0x00,0x04 } }; // C9218CC4-AD4B-4D03-A6A4-7D59E6360004
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeer>{ 0x6B57EAFE,0x6AF1,0x4903,{ 0x83,0x73,0x34,0x37,0xBF,0x35,0x23,0x45 } }; // 6B57EAFE-6AF1-4903-8373-3437BF352345
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeerFactory>{ 0x94364B77,0x8F6C,0x4837,{ 0xAA,0xE3,0x94,0xD0,0x10,0xD8,0xD1,0x62 } }; // 94364B77-8F6C-4837-AAE3-94D010D8D162
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeer>{ 0xC011F174,0xE89E,0x4790,{ 0xBF,0x9A,0x78,0xEB,0xB5,0xF5,0x9E,0x9F } }; // C011F174-E89E-4790-BF9A-78EBB5F59E9F
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeerFactory>{ 0x31F933E3,0xFEF8,0x4419,{ 0x9D,0xF5,0xD9,0xEF,0x71,0x96,0xEA,0x34 } }; // 31F933E3-FEF8-4419-9DF5-D9EF7196EA34
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::ITreeViewItemAutomationPeer>{ 0x2331D648,0xB617,0x437F,{ 0x92,0x0C,0x71,0xD4,0x50,0x50,0x3E,0x65 } }; // 2331D648-B617-437F-920C-71D450503E65
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::ITreeViewItemAutomationPeerFactory>{ 0x73D388BF,0x1D01,0x4159,{ 0x82,0xC0,0x2B,0x29,0x96,0xDB,0xFD,0xCE } }; // 73D388BF-1D01-4159-82C0-2B2996DBFDCE
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::ITreeViewListAutomationPeer>{ 0x71C1B5BC,0xBB29,0x4479,{ 0xA8,0xA8,0x60,0x6B,0xE6,0xB8,0x23,0xAE } }; // 71C1B5BC-BB29-4479-A8A8-606BE6B823AE
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Automation::Peers::ITreeViewListAutomationPeerFactory>{ 0x00F597E2,0xF811,0x475A,{ 0xBF,0xE6,0x29,0x0F,0xE7,0x07,0xFA,0x88 } }; // 00F597E2-F811-475A-BFE6-290FE707FA88
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::AppBarAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::AppBarButtonAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::AppBarToggleButtonAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::AutoSuggestBoxAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::AutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation>{ using type = Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotation; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ButtonAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ButtonBaseAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::CalendarDatePickerAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ICalendarDatePickerAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::CaptureElementAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::CheckBoxAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ColorPickerSliderAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IColorPickerSliderAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ColorSpectrumAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IColorSpectrumAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ComboBoxAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ComboBoxItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ComboBoxItemDataAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::DatePickerAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::DatePickerFlyoutPresenterAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IDatePickerFlyoutPresenterAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::FlipViewAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::FlipViewItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::FlipViewItemDataAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::FlyoutPresenterAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::FrameworkElementAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::GridViewAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::GridViewHeaderItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::GridViewItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::GridViewItemDataAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::GroupItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::HubAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IHubAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::HubSectionAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::HyperlinkButtonAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ImageAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IImageAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::InkToolbarAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IInkToolbarAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ItemsControlAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ListBoxAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ListBoxItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ListBoxItemDataAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ListPickerFlyoutPresenterAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IListPickerFlyoutPresenterAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ListViewAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ListViewBaseAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ListViewBaseHeaderItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ListViewHeaderItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ListViewItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ListViewItemDataAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::LoopingSelectorAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ILoopingSelectorAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::LoopingSelectorItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ILoopingSelectorItemAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::LoopingSelectorItemDataAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ILoopingSelectorItemDataAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::MapControlAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IMapControlAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::MediaElementAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::MediaPlayerElementAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::MediaTransportControlsAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::MenuBarAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IMenuBarAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::MenuBarItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IMenuBarItemAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::MenuFlyoutItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::MenuFlyoutPresenterAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::NavigationViewItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::INavigationViewItemAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::PasswordBoxAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::PersonPictureAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IPersonPictureAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::PickerFlyoutPresenterAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IPickerFlyoutPresenterAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::PivotAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IPivotAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::PivotItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IPivotItemAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::PivotItemDataAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IPivotItemDataAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ProgressBarAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ProgressRingAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::RadioButtonAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::RangeBaseAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::RatingControlAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IRatingControlAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::RepeatButtonAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::RichEditBoxAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::RichTextBlockAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::RichTextBlockOverflowAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ScrollBarAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ScrollViewerAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::SearchBoxAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::SelectorAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::SelectorItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::SemanticZoomAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::SettingsFlyoutAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::SliderAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::TextBlockAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::TextBoxAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ThumbAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::TimePickerAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::TimePickerFlyoutPresenterAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ITimePickerFlyoutPresenterAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ToggleButtonAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ToggleMenuFlyoutItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::ToggleSwitchAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::TreeViewItemAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ITreeViewItemAutomationPeer; };
    template <> struct default_interface<Windows::UI::Xaml::Automation::Peers::TreeViewListAutomationPeer>{ using type = Windows::UI::Xaml::Automation::Peers::ITreeViewListAutomationPeer; };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EventsSource(void**) noexcept = 0;
            virtual int32_t __stdcall put_EventsSource(void*) noexcept = 0;
            virtual int32_t __stdcall GetPattern(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall RaiseAutomationEvent(int32_t) noexcept = 0;
            virtual int32_t __stdcall RaisePropertyChangedEvent(void*, void*, void*) noexcept = 0;
            virtual int32_t __stdcall GetAcceleratorKey(void**) noexcept = 0;
            virtual int32_t __stdcall GetAccessKey(void**) noexcept = 0;
            virtual int32_t __stdcall GetAutomationControlType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetAutomationId(void**) noexcept = 0;
            virtual int32_t __stdcall GetBoundingRectangle(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall GetChildren(void**) noexcept = 0;
            virtual int32_t __stdcall GetClassName(void**) noexcept = 0;
            virtual int32_t __stdcall GetClickablePoint(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall GetHelpText(void**) noexcept = 0;
            virtual int32_t __stdcall GetItemStatus(void**) noexcept = 0;
            virtual int32_t __stdcall GetItemType(void**) noexcept = 0;
            virtual int32_t __stdcall GetLabeledBy(void**) noexcept = 0;
            virtual int32_t __stdcall GetLocalizedControlType(void**) noexcept = 0;
            virtual int32_t __stdcall GetName(void**) noexcept = 0;
            virtual int32_t __stdcall GetOrientation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall HasKeyboardFocus(bool*) noexcept = 0;
            virtual int32_t __stdcall IsContentElement(bool*) noexcept = 0;
            virtual int32_t __stdcall IsControlElement(bool*) noexcept = 0;
            virtual int32_t __stdcall IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall IsKeyboardFocusable(bool*) noexcept = 0;
            virtual int32_t __stdcall IsOffscreen(bool*) noexcept = 0;
            virtual int32_t __stdcall IsPassword(bool*) noexcept = 0;
            virtual int32_t __stdcall IsRequiredForForm(bool*) noexcept = 0;
            virtual int32_t __stdcall SetFocus() noexcept = 0;
            virtual int32_t __stdcall GetParent(void**) noexcept = 0;
            virtual int32_t __stdcall InvalidatePeer() noexcept = 0;
            virtual int32_t __stdcall GetPeerFromPoint(Windows::Foundation::Point, void**) noexcept = 0;
            virtual int32_t __stdcall GetLiveSetting(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeer2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeer3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Navigate(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetElementFromPoint(Windows::Foundation::Point, void**) noexcept = 0;
            virtual int32_t __stdcall GetFocusedElement(void**) noexcept = 0;
            virtual int32_t __stdcall ShowContextMenu() noexcept = 0;
            virtual int32_t __stdcall GetControlledPeers(void**) noexcept = 0;
            virtual int32_t __stdcall GetAnnotations(void**) noexcept = 0;
            virtual int32_t __stdcall SetParent(void*) noexcept = 0;
            virtual int32_t __stdcall RaiseTextEditTextChangedEvent(int32_t, void*) noexcept = 0;
            virtual int32_t __stdcall GetPositionInSet(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetSizeOfSet(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall RaiseStructureChangedEvent(int32_t, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeer4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetLandmarkType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetLocalizedLandmarkType(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeer5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsPeripheral(bool*) noexcept = 0;
            virtual int32_t __stdcall IsDataValidForForm(bool*) noexcept = 0;
            virtual int32_t __stdcall GetFullDescription(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeer6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCulture(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeer7>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RaiseNotificationEvent(int32_t, int32_t, void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeer8>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetHeadingLevel(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeer9>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsDialog(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Type(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Peer(void**) noexcept = 0;
            virtual int32_t __stdcall put_Peer(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithPeerParameter(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TypeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_PeerProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetPatternCore(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetAcceleratorKeyCore(void**) noexcept = 0;
            virtual int32_t __stdcall GetAccessKeyCore(void**) noexcept = 0;
            virtual int32_t __stdcall GetAutomationControlTypeCore(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetAutomationIdCore(void**) noexcept = 0;
            virtual int32_t __stdcall GetBoundingRectangleCore(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall GetChildrenCore(void**) noexcept = 0;
            virtual int32_t __stdcall GetClassNameCore(void**) noexcept = 0;
            virtual int32_t __stdcall GetClickablePointCore(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall GetHelpTextCore(void**) noexcept = 0;
            virtual int32_t __stdcall GetItemStatusCore(void**) noexcept = 0;
            virtual int32_t __stdcall GetItemTypeCore(void**) noexcept = 0;
            virtual int32_t __stdcall GetLabeledByCore(void**) noexcept = 0;
            virtual int32_t __stdcall GetLocalizedControlTypeCore(void**) noexcept = 0;
            virtual int32_t __stdcall GetNameCore(void**) noexcept = 0;
            virtual int32_t __stdcall GetOrientationCore(int32_t*) noexcept = 0;
            virtual int32_t __stdcall HasKeyboardFocusCore(bool*) noexcept = 0;
            virtual int32_t __stdcall IsContentElementCore(bool*) noexcept = 0;
            virtual int32_t __stdcall IsControlElementCore(bool*) noexcept = 0;
            virtual int32_t __stdcall IsEnabledCore(bool*) noexcept = 0;
            virtual int32_t __stdcall IsKeyboardFocusableCore(bool*) noexcept = 0;
            virtual int32_t __stdcall IsOffscreenCore(bool*) noexcept = 0;
            virtual int32_t __stdcall IsPasswordCore(bool*) noexcept = 0;
            virtual int32_t __stdcall IsRequiredForFormCore(bool*) noexcept = 0;
            virtual int32_t __stdcall SetFocusCore() noexcept = 0;
            virtual int32_t __stdcall GetPeerFromPointCore(Windows::Foundation::Point, void**) noexcept = 0;
            virtual int32_t __stdcall GetLiveSettingCore(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ShowContextMenuCore() noexcept = 0;
            virtual int32_t __stdcall GetControlledPeersCore(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall NavigateCore(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetElementFromPointCore(Windows::Foundation::Point, void**) noexcept = 0;
            virtual int32_t __stdcall GetFocusedElementCore(void**) noexcept = 0;
            virtual int32_t __stdcall GetAnnotationsCore(void**) noexcept = 0;
            virtual int32_t __stdcall GetPositionInSetCore(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetSizeOfSetCore(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetLevelCore(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetLandmarkTypeCore(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetLocalizedLandmarkTypeCore(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsPeripheralCore(bool*) noexcept = 0;
            virtual int32_t __stdcall IsDataValidForFormCore(bool*) noexcept = 0;
            virtual int32_t __stdcall GetFullDescriptionCore(void**) noexcept = 0;
            virtual int32_t __stdcall GetDescribedByCore(void**) noexcept = 0;
            virtual int32_t __stdcall GetFlowsToCore(void**) noexcept = 0;
            virtual int32_t __stdcall GetFlowsFromCore(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCultureCore(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides8>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetHeadingLevelCore(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides9>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsDialogCore(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall PeerFromProvider(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ProviderFromPeer(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ListenerExists(int32_t, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IAutomationPeerStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GenerateRawElementProviderRuntimeId(struct struct_Windows_UI_Xaml_Automation_Peers_RawElementProviderRuntimeId*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::ICalendarDatePickerAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::ICalendarDatePickerAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IColorPickerSliderAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IColorPickerSliderAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IColorSpectrumAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IColorSpectrumAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithParentAndItem(void*, void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IDatePickerFlyoutPresenterAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithParentAndItem(void*, void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Owner(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromElement(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreatePeerForElement(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithParentAndItem(void*, void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IHubAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IHubAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IImageAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IImageAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IInkToolbarAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Item(void**) noexcept = 0;
            virtual int32_t __stdcall get_ItemsControlAutomationPeer(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IItemAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithParentAndItem(void*, void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateItemAutomationPeer(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall OnCreateItemAutomationPeer(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithParentAndItem(void*, void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListPickerFlyoutPresenterAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithParentAndItem(void*, void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::ILoopingSelectorAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::ILoopingSelectorItemAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::ILoopingSelectorItemDataAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IMapControlAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IMenuBarAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IMenuBarAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IMenuBarItemAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IMenuBarItemAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::INavigationViewItemAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::INavigationViewItemAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IPersonPictureAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IPersonPictureAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IPickerFlyoutPresenterAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IPivotAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IPivotAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IPivotItemAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IPivotItemAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IPivotItemDataAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IPivotItemDataAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithParentAndItem(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IRatingControlAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IRatingControlAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithParentAndItem(void*, void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::ITimePickerFlyoutPresenterAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::ITreeViewItemAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::ITreeViewItemAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::ITreeViewListAutomationPeer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::ITreeViewListAutomationPeerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithOwner(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IAppBarAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAppBarAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IAppBarAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::AppBarAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::AppBar const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAppBarAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IAppBarButtonAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAppBarButtonAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IAppBarButtonAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::AppBarButtonAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::AppBarButton const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAppBarButtonAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IAppBarToggleButtonAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAppBarToggleButtonAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IAppBarToggleButtonAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::AppBarToggleButtonAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::AppBarToggleButton const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAppBarToggleButtonAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IAutoSuggestBoxAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutoSuggestBoxAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IAutoSuggestBoxAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::AutoSuggestBoxAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::AutoSuggestBox const& owner) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutoSuggestBoxAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::AutomationPeer) EventsSource() const;
        WINRT_IMPL_AUTO(void) EventsSource(Windows::UI::Xaml::Automation::Peers::AutomationPeer const& value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) GetPattern(Windows::UI::Xaml::Automation::Peers::PatternInterface const& patternInterface) const;
        WINRT_IMPL_AUTO(void) RaiseAutomationEvent(Windows::UI::Xaml::Automation::Peers::AutomationEvents const& eventId) const;
        WINRT_IMPL_AUTO(void) RaisePropertyChangedEvent(Windows::UI::Xaml::Automation::AutomationProperty const& automationProperty, Windows::Foundation::IInspectable const& oldValue, Windows::Foundation::IInspectable const& newValue) const;
        WINRT_IMPL_AUTO(hstring) GetAcceleratorKey() const;
        WINRT_IMPL_AUTO(hstring) GetAccessKey() const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::AutomationControlType) GetAutomationControlType() const;
        WINRT_IMPL_AUTO(hstring) GetAutomationId() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Rect) GetBoundingRectangle() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::Peers::AutomationPeer>) GetChildren() const;
        WINRT_IMPL_AUTO(hstring) GetClassName() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Point) GetClickablePoint() const;
        WINRT_IMPL_AUTO(hstring) GetHelpText() const;
        WINRT_IMPL_AUTO(hstring) GetItemStatus() const;
        WINRT_IMPL_AUTO(hstring) GetItemType() const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::AutomationPeer) GetLabeledBy() const;
        WINRT_IMPL_AUTO(hstring) GetLocalizedControlType() const;
        WINRT_IMPL_AUTO(hstring) GetName() const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::AutomationOrientation) GetOrientation() const;
        WINRT_IMPL_AUTO(bool) HasKeyboardFocus() const;
        WINRT_IMPL_AUTO(bool) IsContentElement() const;
        WINRT_IMPL_AUTO(bool) IsControlElement() const;
        WINRT_IMPL_AUTO(bool) IsEnabled() const;
        WINRT_IMPL_AUTO(bool) IsKeyboardFocusable() const;
        WINRT_IMPL_AUTO(bool) IsOffscreen() const;
        WINRT_IMPL_AUTO(bool) IsPassword() const;
        WINRT_IMPL_AUTO(bool) IsRequiredForForm() const;
        WINRT_IMPL_AUTO(void) SetFocus() const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::AutomationPeer) GetParent() const;
        WINRT_IMPL_AUTO(void) InvalidatePeer() const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::AutomationPeer) GetPeerFromPoint(Windows::Foundation::Point const& point) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting) GetLiveSetting() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer2
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeer2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer3
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) Navigate(Windows::UI::Xaml::Automation::Peers::AutomationNavigationDirection const& direction) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) GetElementFromPoint(Windows::Foundation::Point const& pointInWindowCoordinates) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) GetFocusedElement() const;
        WINRT_IMPL_AUTO(void) ShowContextMenu() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Automation::Peers::AutomationPeer>) GetControlledPeers() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation>) GetAnnotations() const;
        WINRT_IMPL_AUTO(void) SetParent(Windows::UI::Xaml::Automation::Peers::AutomationPeer const& peer) const;
        WINRT_IMPL_AUTO(void) RaiseTextEditTextChangedEvent(Windows::UI::Xaml::Automation::AutomationTextEditChangeType const& automationTextEditChangeType, param::vector_view<hstring> const& changedData) const;
        WINRT_IMPL_AUTO(int32_t) GetPositionInSet() const;
        WINRT_IMPL_AUTO(int32_t) GetSizeOfSet() const;
        WINRT_IMPL_AUTO(int32_t) GetLevel() const;
        WINRT_IMPL_AUTO(void) RaiseStructureChangedEvent(Windows::UI::Xaml::Automation::Peers::AutomationStructureChangeType const& structureChangeType, Windows::UI::Xaml::Automation::Peers::AutomationPeer const& child) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeer3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer4
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType) GetLandmarkType() const;
        WINRT_IMPL_AUTO(hstring) GetLocalizedLandmarkType() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeer4>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer5
    {
        WINRT_IMPL_AUTO(bool) IsPeripheral() const;
        WINRT_IMPL_AUTO(bool) IsDataValidForForm() const;
        WINRT_IMPL_AUTO(hstring) GetFullDescription() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeer5>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer5<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer6
    {
        WINRT_IMPL_AUTO(int32_t) GetCulture() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeer6>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer6<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer7
    {
        WINRT_IMPL_AUTO(void) RaiseNotificationEvent(Windows::UI::Xaml::Automation::Peers::AutomationNotificationKind const& notificationKind, Windows::UI::Xaml::Automation::Peers::AutomationNotificationProcessing const& notificationProcessing, param::hstring const& displayString, param::hstring const& activityId) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeer7>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer7<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer8
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::AutomationHeadingLevel) GetHeadingLevel() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeer8>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer8<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer9
    {
        WINRT_IMPL_AUTO(bool) IsDialog() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeer9>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer9<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerAnnotation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AnnotationType) Type() const;
        WINRT_IMPL_AUTO(void) Type(Windows::UI::Xaml::Automation::AnnotationType const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::AutomationPeer) Peer() const;
        WINRT_IMPL_AUTO(void) Peer(Windows::UI::Xaml::Automation::Peers::AutomationPeer const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotation>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerAnnotation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerAnnotationFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation) CreateInstance(Windows::UI::Xaml::Automation::AnnotationType const& type) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation) CreateWithPeerParameter(Windows::UI::Xaml::Automation::AnnotationType const& type, Windows::UI::Xaml::Automation::Peers::AutomationPeer const& peer) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerAnnotationFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerAnnotationStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) TypeProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) PeerProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerAnnotationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::AutomationPeer) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) GetPatternCore(Windows::UI::Xaml::Automation::Peers::PatternInterface const& patternInterface) const;
        WINRT_IMPL_AUTO(hstring) GetAcceleratorKeyCore() const;
        WINRT_IMPL_AUTO(hstring) GetAccessKeyCore() const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::AutomationControlType) GetAutomationControlTypeCore() const;
        WINRT_IMPL_AUTO(hstring) GetAutomationIdCore() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Rect) GetBoundingRectangleCore() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::Peers::AutomationPeer>) GetChildrenCore() const;
        WINRT_IMPL_AUTO(hstring) GetClassNameCore() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Point) GetClickablePointCore() const;
        WINRT_IMPL_AUTO(hstring) GetHelpTextCore() const;
        WINRT_IMPL_AUTO(hstring) GetItemStatusCore() const;
        WINRT_IMPL_AUTO(hstring) GetItemTypeCore() const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::AutomationPeer) GetLabeledByCore() const;
        WINRT_IMPL_AUTO(hstring) GetLocalizedControlTypeCore() const;
        WINRT_IMPL_AUTO(hstring) GetNameCore() const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::AutomationOrientation) GetOrientationCore() const;
        WINRT_IMPL_AUTO(bool) HasKeyboardFocusCore() const;
        WINRT_IMPL_AUTO(bool) IsContentElementCore() const;
        WINRT_IMPL_AUTO(bool) IsControlElementCore() const;
        WINRT_IMPL_AUTO(bool) IsEnabledCore() const;
        WINRT_IMPL_AUTO(bool) IsKeyboardFocusableCore() const;
        WINRT_IMPL_AUTO(bool) IsOffscreenCore() const;
        WINRT_IMPL_AUTO(bool) IsPasswordCore() const;
        WINRT_IMPL_AUTO(bool) IsRequiredForFormCore() const;
        WINRT_IMPL_AUTO(void) SetFocusCore() const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::AutomationPeer) GetPeerFromPointCore(Windows::Foundation::Point const& point) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting) GetLiveSettingCore() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides2
    {
        WINRT_IMPL_AUTO(void) ShowContextMenuCore() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Automation::Peers::AutomationPeer>) GetControlledPeersCore() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides3
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) NavigateCore(Windows::UI::Xaml::Automation::Peers::AutomationNavigationDirection const& direction) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) GetElementFromPointCore(Windows::Foundation::Point const& pointInWindowCoordinates) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) GetFocusedElementCore() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation>) GetAnnotationsCore() const;
        WINRT_IMPL_AUTO(int32_t) GetPositionInSetCore() const;
        WINRT_IMPL_AUTO(int32_t) GetSizeOfSetCore() const;
        WINRT_IMPL_AUTO(int32_t) GetLevelCore() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides4
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType) GetLandmarkTypeCore() const;
        WINRT_IMPL_AUTO(hstring) GetLocalizedLandmarkTypeCore() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides5
    {
        WINRT_IMPL_AUTO(bool) IsPeripheralCore() const;
        WINRT_IMPL_AUTO(bool) IsDataValidForFormCore() const;
        WINRT_IMPL_AUTO(hstring) GetFullDescriptionCore() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Automation::Peers::AutomationPeer>) GetDescribedByCore() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Automation::Peers::AutomationPeer>) GetFlowsToCore() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Automation::Peers::AutomationPeer>) GetFlowsFromCore() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides5<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides6
    {
        WINRT_IMPL_AUTO(int32_t) GetCultureCore() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides6<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides8
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::AutomationHeadingLevel) GetHeadingLevelCore() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides8>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides8<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides9
    {
        WINRT_IMPL_AUTO(bool) IsDialogCore() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides9>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides9<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerProtected
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::AutomationPeer) PeerFromProvider(Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple const& provider) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple) ProviderFromPeer(Windows::UI::Xaml::Automation::Peers::AutomationPeer const& peer) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerProtected<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerStatics
    {
        WINRT_IMPL_AUTO(bool) ListenerExists(Windows::UI::Xaml::Automation::Peers::AutomationEvents const& eventId) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerStatics3
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::RawElementProviderRuntimeId) GenerateRawElementProviderRuntimeId() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IAutomationPeerStatics3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IButtonAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IButtonAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IButtonAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::ButtonAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Button const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IButtonAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IButtonBaseAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IButtonBaseAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IButtonBaseAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::ButtonBaseAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Primitives::ButtonBase const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IButtonBaseAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_ICalendarDatePickerAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::ICalendarDatePickerAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ICalendarDatePickerAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_ICalendarDatePickerAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::CalendarDatePickerAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::CalendarDatePicker const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::ICalendarDatePickerAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ICalendarDatePickerAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_ICaptureElementAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ICaptureElementAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_ICaptureElementAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::CaptureElementAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::CaptureElement const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ICaptureElementAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_ICheckBoxAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ICheckBoxAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_ICheckBoxAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::CheckBoxAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::CheckBox const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ICheckBoxAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IColorPickerSliderAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IColorPickerSliderAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IColorPickerSliderAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IColorPickerSliderAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::ColorPickerSliderAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Primitives::ColorPickerSlider const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IColorPickerSliderAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IColorPickerSliderAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IColorSpectrumAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IColorSpectrumAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IColorSpectrumAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IColorSpectrumAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::ColorSpectrumAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Primitives::ColorSpectrum const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IColorSpectrumAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IColorSpectrumAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IComboBoxAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IComboBoxAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IComboBoxAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::ComboBoxAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ComboBox const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IComboBoxAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IComboBoxItemAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IComboBoxItemAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IComboBoxItemAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::ComboBoxItemAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ComboBoxItem const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IComboBoxItemAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IComboBoxItemDataAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IComboBoxItemDataAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IComboBoxItemDataAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::ComboBoxItemDataAutomationPeer) CreateInstanceWithParentAndItem(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::ComboBoxAutomationPeer const& parent, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IComboBoxItemDataAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IDatePickerAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IDatePickerAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IDatePickerAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::DatePickerAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::DatePicker const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IDatePickerAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IDatePickerFlyoutPresenterAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IDatePickerFlyoutPresenterAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IDatePickerFlyoutPresenterAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IFlipViewAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IFlipViewAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IFlipViewAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::FlipViewAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::FlipView const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IFlipViewAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IFlipViewItemAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IFlipViewItemAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IFlipViewItemAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::FlipViewItemAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::FlipViewItem const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IFlipViewItemAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IFlipViewItemDataAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IFlipViewItemDataAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IFlipViewItemDataAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::FlipViewItemDataAutomationPeer) CreateInstanceWithParentAndItem(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::FlipViewAutomationPeer const& parent, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IFlipViewItemDataAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IFlyoutPresenterAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IFlyoutPresenterAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IFlyoutPresenterAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::FlyoutPresenterAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::FlyoutPresenter const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IFlyoutPresenterAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IFrameworkElementAutomationPeer
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::UIElement) Owner() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IFrameworkElementAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IFrameworkElementAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::FrameworkElementAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::FrameworkElement const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IFrameworkElementAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IFrameworkElementAutomationPeerStatics
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::AutomationPeer) FromElement(Windows::UI::Xaml::UIElement const& element) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::AutomationPeer) CreatePeerForElement(Windows::UI::Xaml::UIElement const& element) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IFrameworkElementAutomationPeerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IGridViewAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IGridViewAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IGridViewAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::GridViewAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::GridView const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IGridViewAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IGridViewHeaderItemAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IGridViewHeaderItemAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IGridViewHeaderItemAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::GridViewHeaderItemAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::GridViewHeaderItem const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IGridViewHeaderItemAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IGridViewItemAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IGridViewItemAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IGridViewItemAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::GridViewItemAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::GridViewItem const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IGridViewItemAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IGridViewItemDataAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IGridViewItemDataAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IGridViewItemDataAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::GridViewItemDataAutomationPeer) CreateInstanceWithParentAndItem(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::GridViewAutomationPeer const& parent, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IGridViewItemDataAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IGroupItemAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IGroupItemAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IGroupItemAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::GroupItemAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::GroupItem const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IGroupItemAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IHubAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IHubAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IHubAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IHubAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::HubAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Hub const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IHubAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IHubAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IHubSectionAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IHubSectionAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IHubSectionAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::HubSectionAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::HubSection const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IHubSectionAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IHyperlinkButtonAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IHyperlinkButtonAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IHyperlinkButtonAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::HyperlinkButtonAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::HyperlinkButton const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IHyperlinkButtonAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IImageAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IImageAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IImageAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IImageAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::ImageAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Image const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IImageAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IImageAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IInkToolbarAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IInkToolbarAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IInkToolbarAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IItemAutomationPeer
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) Item() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::ItemsControlAutomationPeer) ItemsControlAutomationPeer() const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IItemAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IItemAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::ItemAutomationPeer) CreateInstanceWithParentAndItem(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::ItemsControlAutomationPeer const& parent, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IItemAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IItemAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IItemsControlAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IItemsControlAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IItemsControlAutomationPeer2
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::ItemAutomationPeer) CreateItemAutomationPeer(Windows::Foundation::IInspectable const& item) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IItemsControlAutomationPeer2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IItemsControlAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::ItemsControlAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ItemsControl const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IItemsControlAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IItemsControlAutomationPeerOverrides2
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::ItemAutomationPeer) OnCreateItemAutomationPeer(Windows::Foundation::IInspectable const& item) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IItemsControlAutomationPeerOverrides2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IListBoxAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListBoxAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IListBoxAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::ListBoxAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ListBox const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListBoxAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IListBoxItemAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListBoxItemAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IListBoxItemAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::ListBoxItemAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ListBoxItem const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListBoxItemAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IListBoxItemDataAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListBoxItemDataAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IListBoxItemDataAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::ListBoxItemDataAutomationPeer) CreateInstanceWithParentAndItem(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::ListBoxAutomationPeer const& parent, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListBoxItemDataAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IListPickerFlyoutPresenterAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListPickerFlyoutPresenterAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListPickerFlyoutPresenterAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IListViewAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListViewAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IListViewAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::ListViewAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ListView const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListViewAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IListViewBaseAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListViewBaseAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IListViewBaseAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::ListViewBaseAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ListViewBase const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListViewBaseAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IListViewBaseHeaderItemAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListViewBaseHeaderItemAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IListViewBaseHeaderItemAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::ListViewBaseHeaderItemAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ListViewBaseHeaderItem const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListViewBaseHeaderItemAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IListViewHeaderItemAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListViewHeaderItemAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IListViewHeaderItemAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::ListViewHeaderItemAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ListViewHeaderItem const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListViewHeaderItemAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IListViewItemAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListViewItemAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IListViewItemAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::ListViewItemAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ListViewItem const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListViewItemAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IListViewItemDataAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListViewItemDataAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IListViewItemDataAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::ListViewItemDataAutomationPeer) CreateInstanceWithParentAndItem(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::ListViewBaseAutomationPeer const& parent, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IListViewItemDataAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_ILoopingSelectorAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::ILoopingSelectorAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ILoopingSelectorAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_ILoopingSelectorItemAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::ILoopingSelectorItemAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ILoopingSelectorItemAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_ILoopingSelectorItemDataAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::ILoopingSelectorItemDataAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ILoopingSelectorItemDataAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IMapControlAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IMapControlAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IMapControlAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IMediaElementAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IMediaElementAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IMediaElementAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::MediaElementAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::MediaElement const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IMediaElementAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IMediaPlayerElementAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IMediaPlayerElementAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IMediaPlayerElementAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::MediaPlayerElementAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::MediaPlayerElement const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IMediaPlayerElementAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IMediaTransportControlsAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IMediaTransportControlsAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IMediaTransportControlsAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::MediaTransportControlsAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::MediaTransportControls const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IMediaTransportControlsAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IMenuBarAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IMenuBarAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IMenuBarAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IMenuBarAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::MenuBarAutomationPeer) CreateInstance(Windows::UI::Xaml::Controls::MenuBar const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IMenuBarAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IMenuBarAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IMenuBarItemAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IMenuBarItemAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IMenuBarItemAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IMenuBarItemAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::MenuBarItemAutomationPeer) CreateInstance(Windows::UI::Xaml::Controls::MenuBarItem const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IMenuBarItemAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IMenuBarItemAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IMenuFlyoutItemAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IMenuFlyoutItemAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IMenuFlyoutItemAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::MenuFlyoutItemAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::MenuFlyoutItem const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IMenuFlyoutItemAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IMenuFlyoutPresenterAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IMenuFlyoutPresenterAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IMenuFlyoutPresenterAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::MenuFlyoutPresenterAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::MenuFlyoutPresenter const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IMenuFlyoutPresenterAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_INavigationViewItemAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::INavigationViewItemAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_INavigationViewItemAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_INavigationViewItemAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::NavigationViewItemAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::NavigationViewItem const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::INavigationViewItemAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_INavigationViewItemAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IPasswordBoxAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IPasswordBoxAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IPasswordBoxAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::PasswordBoxAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::PasswordBox const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IPasswordBoxAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IPersonPictureAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IPersonPictureAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IPersonPictureAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IPersonPictureAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::PersonPictureAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::PersonPicture const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IPersonPictureAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IPersonPictureAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IPickerFlyoutPresenterAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IPickerFlyoutPresenterAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IPickerFlyoutPresenterAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IPivotAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IPivotAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IPivotAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IPivotAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::PivotAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Pivot const& owner) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IPivotAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IPivotAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IPivotItemAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IPivotItemAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IPivotItemAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IPivotItemAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::PivotItemAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::PivotItem const& owner) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IPivotItemAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IPivotItemAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IPivotItemDataAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IPivotItemDataAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IPivotItemDataAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IPivotItemDataAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::PivotItemDataAutomationPeer) CreateInstanceWithParentAndItem(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::PivotAutomationPeer const& parent) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IPivotItemDataAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IPivotItemDataAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IProgressBarAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IProgressBarAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IProgressBarAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::ProgressBarAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ProgressBar const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IProgressBarAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IProgressRingAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IProgressRingAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IProgressRingAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::ProgressRingAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ProgressRing const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IProgressRingAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IRadioButtonAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IRadioButtonAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IRadioButtonAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::RadioButtonAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::RadioButton const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IRadioButtonAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IRangeBaseAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IRangeBaseAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IRangeBaseAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::RangeBaseAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Primitives::RangeBase const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IRangeBaseAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IRatingControlAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IRatingControlAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IRatingControlAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IRatingControlAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::RatingControlAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::RatingControl const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IRatingControlAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IRatingControlAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IRepeatButtonAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IRepeatButtonAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IRepeatButtonAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::RepeatButtonAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Primitives::RepeatButton const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IRepeatButtonAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IRichEditBoxAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IRichEditBoxAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IRichEditBoxAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::RichEditBoxAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::RichEditBox const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IRichEditBoxAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IRichTextBlockAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IRichTextBlockAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IRichTextBlockAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::RichTextBlockAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::RichTextBlock const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IRichTextBlockAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IRichTextBlockOverflowAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IRichTextBlockOverflowAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IRichTextBlockOverflowAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::RichTextBlockOverflowAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::RichTextBlockOverflow const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IRichTextBlockOverflowAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IScrollBarAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IScrollBarAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IScrollBarAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::ScrollBarAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Primitives::ScrollBar const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IScrollBarAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IScrollViewerAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IScrollViewerAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IScrollViewerAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::ScrollViewerAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ScrollViewer const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IScrollViewerAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_ISearchBoxAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ISearchBoxAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_ISearchBoxAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::SearchBoxAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::SearchBox const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ISearchBoxAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_ISelectorAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ISelectorAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_ISelectorAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::SelectorAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Primitives::Selector const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ISelectorAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_ISelectorItemAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ISelectorItemAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_ISelectorItemAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::SelectorItemAutomationPeer) CreateInstanceWithParentAndItem(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::SelectorAutomationPeer const& parent, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ISelectorItemAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_ISemanticZoomAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ISemanticZoomAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_ISemanticZoomAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::SemanticZoomAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::SemanticZoom const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ISemanticZoomAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_ISettingsFlyoutAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ISettingsFlyoutAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_ISettingsFlyoutAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::SettingsFlyoutAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::SettingsFlyout const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ISettingsFlyoutAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_ISliderAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ISliderAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_ISliderAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::SliderAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Slider const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ISliderAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_ITextBlockAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ITextBlockAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_ITextBlockAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::TextBlockAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::TextBlock const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ITextBlockAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_ITextBoxAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ITextBoxAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_ITextBoxAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::TextBoxAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::TextBox const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ITextBoxAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IThumbAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IThumbAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IThumbAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::ThumbAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Primitives::Thumb const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IThumbAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_ITimePickerAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ITimePickerAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_ITimePickerAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::TimePickerAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::TimePicker const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ITimePickerAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_ITimePickerFlyoutPresenterAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::ITimePickerFlyoutPresenterAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ITimePickerFlyoutPresenterAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IToggleButtonAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IToggleButtonAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IToggleButtonAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::ToggleButtonAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Primitives::ToggleButton const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IToggleButtonAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IToggleMenuFlyoutItemAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IToggleMenuFlyoutItemAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IToggleMenuFlyoutItemAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::ToggleMenuFlyoutItemAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ToggleMenuFlyoutItem const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IToggleMenuFlyoutItemAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IToggleSwitchAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IToggleSwitchAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_IToggleSwitchAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::ToggleSwitchAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ToggleSwitch const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_IToggleSwitchAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_ITreeViewItemAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::ITreeViewItemAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ITreeViewItemAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_ITreeViewItemAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::TreeViewItemAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::TreeViewItem const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::ITreeViewItemAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ITreeViewItemAutomationPeerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_ITreeViewListAutomationPeer
    {
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::ITreeViewListAutomationPeer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ITreeViewListAutomationPeer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Automation_Peers_ITreeViewListAutomationPeerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::TreeViewListAutomationPeer) CreateInstanceWithOwner(Windows::UI::Xaml::Controls::TreeViewList const& owner, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Automation::Peers::ITreeViewListAutomationPeerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Automation_Peers_ITreeViewListAutomationPeerFactory<D>;
    };
    struct struct_Windows_UI_Xaml_Automation_Peers_RawElementProviderRuntimeId
    {
        uint32_t Part1;
        uint32_t Part2;
    };
    template <> struct abi<Windows::UI::Xaml::Automation::Peers::RawElementProviderRuntimeId>
    {
        using type = struct_Windows_UI_Xaml_Automation_Peers_RawElementProviderRuntimeId;
    };
}
#endif
