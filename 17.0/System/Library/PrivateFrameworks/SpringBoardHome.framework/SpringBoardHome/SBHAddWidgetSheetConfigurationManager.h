@class NSArray, SBHomeScreenDefaults, SBHIconModel, CHSWidgetExtensionProvider;
@protocol SBHWidgetDragHandling, SBHAddWidgetSheetConfigurationManagerDelegate, SBIconListLayoutProvider;

@interface SBHAddWidgetSheetConfigurationManager : NSObject {
    SBHomeScreenDefaults *_homeScreenDefaults;
}

@property (retain, nonatomic) NSArray *stackConfigurationSuggestedWidgetItems;
@property (retain, nonatomic) NSArray *editingSuggestedWidgetItems;
@property (nonatomic) unsigned long long addWidgetSheetStyle;
@property (nonatomic) unsigned long long addWidgetSheetLocation;
@property (nonatomic) unsigned long long allowedWidgetFamilies;
@property (nonatomic) unsigned long long minimumRequiredSDKVersion;
@property (readonly, nonatomic) CHSWidgetExtensionProvider *widgetExtensionProvider;
@property (weak, nonatomic) SBHIconModel *iconModel;
@property (weak, nonatomic) id<SBIconListLayoutProvider> listLayoutProvider;
@property (weak, nonatomic) id<SBHWidgetDragHandling> widgetDragHandlerDelegate;
@property (weak, nonatomic) id<SBHAddWidgetSheetConfigurationManagerDelegate> configurationManagerDelegate;
@property (nonatomic) BOOL allowsFakeWidgets;

+ (unsigned long long)_galleryVariantForAddWidgetSheetLocation:(unsigned long long)a0;

- (id)homeScreenDefaults;
- (void).cxx_destruct;
- (id)applicationWidgetCollectionsForEditingViewController:(id)a0 withAllowedSizeClasses:(unsigned long long *)a1 allowingNonStackableItems:(BOOL)a2;
- (id)initWithWidgetExtensionProvider:(id)a0;
- (void)updatePresentedWidgetEditingViewController:(id)a0;
- (BOOL)_shouldAddSpecialAvocadoOfType:(unsigned long long)a0;
- (void)_addBatteriesSpecialAvocadosToApplicationWidgetCollections:(id)a0;
- (void)_addFilesSpecialAvocadosToApplicationWidgetCollections:(id)a0;
- (void)_addShortcutsSpecialAvocadoToApplicationWidgetCollections:(id)a0;
- (void)_addSiriSuggestionsSpecialAvocadosToApplicationWidgetCollections:(id)a0;
- (unsigned long long)_defaultEditingSuggestedWidgetItemsFamilyMask;
- (void)_fetchGalleryContentForGridSize:(unsigned long long)a0 withFamilyMask:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_insertSmartStackSpecialAvocadosAtTheTopOfApplicationWidgetCollections:(id)a0;
- (BOOL)_isDescriptorAllowed:(id)a0;
- (BOOL)_isDescriptorSupported:(id)a0;
- (BOOL)_isDescriptorUpdatedForSDKRequirements:(id)a0;
- (BOOL)_isDescriptorVisibleByDefault:(id)a0;
- (BOOL)_isVisibilityWidgetDefined:(long long)a0;
- (unsigned long long)_stackConfigurationGridSize;
- (id)_widgetIconForDescriptor:(id)a0 sizeClass:(long long)a1;
- (id)_widgetIconForDescriptors:(id)a0 sizeClass:(long long)a1;
- (void)fetchGalleryContentForHomeScreenEditingWithGridSize:(unsigned long long)a0 addWidgetSheetViewController:(id)a1;
- (void)fetchGalleryContentForStackConfigurationViewController:(id)a0 addWidgetSheetViewController:(id)a1;
- (id)vendorNameForAppWithBundleIdentifier:(id)a0;

@end
