@class PXSharedLibraryStatusProvider, PXStoryMemoryFeedDataSourceManager, NSString, PXLibraryFilterState, UINavigationItem;

@interface PXStoryMemoryFeedChromeController : NSObject <PXChangeObserver, PXSectionedDataSourceManagerObserver, PXFeedChromeController>

@property (readonly, nonatomic) UINavigationItem *navigationItem;
@property (readonly, nonatomic) PXStoryMemoryFeedDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState;
@property (readonly, nonatomic) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isActive;

- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void).cxx_destruct;
- (void)_updateChrome;
- (void)_handleFavoritesToggleButton:(id)a0;
- (void)_invalidateChrome;
- (id)initWithViewController:(id)a0 dataSourceManager:(id)a1;

@end
