@class NSString, NSMutableDictionary;

@interface SBHDefaultIconListLayoutProvider : NSObject <SBIconListLayoutProvider, BSDescriptionProviding> {
    NSMutableDictionary *_cachedListLayouts;
}

@property (class, readonly, nonatomic) SBHDefaultIconListLayoutProvider *frameworkFallbackInstance;
@property (class, readonly, nonatomic) unsigned long long extendedFloatingDockCapacityIconCount;
@property (class, readonly, nonatomic) unsigned long long currentDeviceScreenType;

@property (readonly, nonatomic) unsigned long long screenType;
@property (readonly, nonatomic) unsigned long long layoutOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)defaultLayoutOptions;

- (id)init;
- (id)initWithScreenType:(unsigned long long)a0 layoutOptions:(unsigned long long)a1;
- (void)configureFolderIconConfiguration:(id)a0 forScreenType:(unsigned long long)a1 numberOfRows:(unsigned long long)a2 layoutOptions:(unsigned long long)a3;
- (id)initWithScreenType:(unsigned long long)a0;
- (void)configureIconAccessoryConfiguration:(id)a0 forScreenType:(unsigned long long)a1 layoutOptions:(unsigned long long)a2;
- (id)succinctDescriptionBuilder;
- (void)configureFloatyFolderConfiguration:(id)a0 forScreenType:(unsigned long long)a1 layoutOptions:(unsigned long long)a2;
- (void)configureGridSizeClassSizes:(struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x2; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x3; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x4; } *)a0 forScreenType:(unsigned long long)a1 numberOfColumns:(unsigned long long)a2 iconLocation:(id)a3 layoutOptions:(unsigned long long)a4;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)layoutForIconLocation:(id)a0;
- (unsigned long long)layoutOptionsForIconLocation:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)configureFloatingDockConfiguration:(id)a0 forScreenType:(unsigned long long)a1 layoutOptions:(unsigned long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })homeScreenSearchOverlayInsetsForScreenType:(unsigned long long)a0 layoutOptions:(unsigned long long)a1 forAppLibrary:(BOOL)a2;
- (void)configureAppLibraryConfiguration:(id)a0 forScreenType:(unsigned long long)a1 layoutOptions:(unsigned long long)a2;
- (void)configureSidebarConfiguration:(id)a0 forScreenType:(unsigned long long)a1 layoutOptions:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)initWithLayoutOptions:(unsigned long long)a0;
- (void)configureRootFolderConfiguration:(id)a0 forScreenType:(unsigned long long)a1 layoutOptions:(unsigned long long)a2;
- (void)configureSupportedIconGridSizeClasses:(unsigned long long *)a0 forScreenType:(unsigned long long)a1 iconLocation:(id)a2 layoutOptions:(unsigned long long)a3;
- (id)makeLayoutForIconLocation:(id)a0;
- (void)configureLabelConfigurations:(id)a0 forScreenType:(unsigned long long)a1;

@end
