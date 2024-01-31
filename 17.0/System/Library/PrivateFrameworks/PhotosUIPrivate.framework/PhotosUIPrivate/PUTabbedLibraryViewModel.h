@class NSArray, PUTabbedLibrarySettings;

@interface PUTabbedLibraryViewModel : NSObject

@property (readonly, nonatomic) PUTabbedLibrarySettings *settings;
@property (readonly, nonatomic) NSArray *tabInfos;

+ (id)viewModelWithDefaultParameters;

- (BOOL)_shouldShowCuratedLibraryTabForTabbedLibraryViewController:(id)a0;
- (id)tabInfoForContentMode:(int)a0;
- (BOOL)_shouldShowAllPhotosTabForTabbedLibraryViewController:(id)a0;
- (BOOL)_ppt_shouldShowBlankTab;
- (void).cxx_destruct;
- (BOOL)tabbedLibraryViewController:(id)a0 shouldShowTabForContentMode:(int)a1;
- (BOOL)_ppt_shouldShowNilTab;
- (id)tabbedLibraryViewController:(id)a0 tabBarItemForContentMode:(int)a1;
- (BOOL)_shouldShowSharedTabForTabbedLibraryViewController:(id)a0;
- (BOOL)_shouldShowForYouTabForTabbedLibraryViewController:(id)a0;
- (BOOL)_shouldShowSearchTabForTabbedLibraryViewController:(id)a0;
- (id)initWithSettings:(id)a0;

@end
