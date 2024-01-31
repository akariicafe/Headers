@class NSArray, SBHWidget;
@protocol SBLeafIconDataSource;

@interface SBWidgetIcon : SBLeafIcon

@property (retain, nonatomic) SBHWidget *activeWidget;
@property (readonly, copy, nonatomic) NSArray *widgets;
@property (retain, nonatomic) id<SBLeafIconDataSource> lastUserSelectedDataSource;
@property (nonatomic) unsigned long long stackChangeReason;
@property (readonly, nonatomic) unsigned long long iconDataSourcesExcludingSuggestionsCount;
@property (nonatomic) BOOL allowsSuggestions;
@property (nonatomic) BOOL allowsExternalSuggestions;
@property (readonly, nonatomic) SBHWidget *firstSuggestedWidget;
@property (readonly, nonatomic) id<SBLeafIconDataSource> firstSuggestedIconDataSource;

- (id)initWithCHSWidgetDescriptors:(id)a0 suggestionSource:(long long)a1;
- (BOOL)matchesWidgetIcon:(id)a0;
- (void)_setPropertiesFromIcon:(id)a0;
- (id)initWithCHSWidgetDescriptor:(id)a0;
- (BOOL)canBeAddedToMultiItemDrag;
- (void)removeFirstSuggestedIconDataSource;
- (id)initWithWidget:(id)a0;
- (BOOL)_hasDataSourceThatIgnoresAllOtherDataSources;
- (id)initWithWidgetExtensionIdentifiers:(id)a0 widgetKinds:(id)a1 widgetContainerBundleIdentifiers:(id)a2;
- (BOOL)isWidgetIcon;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)didAddIconDataSource:(id)a0;
- (id)copyWithSuggestionSource:(long long)a0;
- (void)updateLabel;
- (id)initWithWidgets:(id)a0;
- (id)firstWidgetPassingTest:(id /* block */)a0;
- (id)_fallbackBestDataSource;
- (BOOL)canReceiveGrabbedIcon;
- (BOOL)supportsConfiguration;
- (void)addDataSourcesFromWidgetIcons:(id)a0;
- (unsigned long long)supportedGridSizeClasses;
- (void).cxx_destruct;
- (id)copyWithUniqueLeafIdentifier;
- (BOOL)canBeReceivedByIcon;
- (id)initWithWidgetExtensionIdentifiers:(id)a0 widgetKinds:(id)a1;
- (BOOL)isWidgetStackIcon;
- (id)initWithLeafIdentifier:(id)a0 applicationBundleID:(id)a1;
- (BOOL)canGenerateIconsInBackground;
- (void)addFirstSuggestedWidget;
- (id)initWithWidgetExtensionIdentifiers:(id)a0 widgetKinds:(id)a1 widgetContainerBundleIdentifiers:(id)a2 suggestionSource:(long long)a3;
- (void)didRemoveIconDataSource:(id)a0;
- (id)initWithCHSWidgetDescriptors:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)supportsStackConfiguration;

@end
