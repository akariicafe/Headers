@class NSOrderedSet;

@interface SBIconModel : SBHIconModel {
    BOOL _iconsHaveBeenLoadedOnce;
    BOOL _createsIconsForInternalApps;
}

@property (copy, nonatomic) NSOrderedSet *cachedFlattenedForecastedDesiredIconState;

+ (id)currentLocaleDidChangeNotificationName;
+ (Class)applicationIconClass;
+ (Class)bookmarkIconClass;
+ (id)migratedIdentifierForLeafIdentifier:(id)a0;
+ (Class)bookmarkClass;

- (id)modernizeRootArchive:(id)a0;
- (id)forecastedLayoutForIconState:(id)a0 includeMissingIcons:(BOOL)a1;
- (id)applicationWithBundleIdentifier:(id)a0;
- (BOOL)importState:(id)a0;
- (id)applicationIconForBundleIdentifier:(id)a0;
- (id)indexPathForIconInPlatformState:(id)a0;
- (id)addApplication:(id)a0;
- (id)bookmarkIconForWebClipIdentifier:(id)a0;
- (void)clearDesiredIconStateWithOptions:(unsigned long long)a0;
- (void)_replaceAppIconsWithDownloadingIcons;
- (id)exportFlattenedState:(BOOL)a0 includeMissingIcons:(BOOL)a1;
- (void)loadAllIcons;
- (void).cxx_destruct;
- (id)exportPendingState:(BOOL)a0 includeMissingIcons:(BOOL)a1;
- (BOOL)shouldAvoidPlacingIconOnFirstPage:(id)a0;
- (void)adjustIconsToShow:(id)a0 iconsToHide:(id)a1 afterChangeToVisibleIconTags:(id)a2 hiddenIconTags:(id)a3;
- (BOOL)isIconVisible:(id)a0;
- (id)exportState:(BOOL)a0;
- (void)willLayout;
- (BOOL)shouldAvoidCreatingIconForApplication:(id)a0;
- (id)addBookmarkIconForWebClip:(id)a0;
- (void)_replaceAppIconsWithDownloadingIcons:(id)a0;

@end
