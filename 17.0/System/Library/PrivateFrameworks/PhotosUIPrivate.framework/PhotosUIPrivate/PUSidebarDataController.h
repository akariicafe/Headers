@class NSOperationQueue, UIImage;

@interface PUSidebarDataController : PXSidebarDataController

@property (readonly, nonatomic) NSOperationQueue *workQueue;
@property (retain, nonatomic) UIImage *emptyAlbumPlaceholderImage;

+ (id)sharedAlbumsDataSectionManagerWithPhotoLibrary:(id)a0 context:(id)a1 hideAdd:(BOOL)a2;
+ (id)_actionManagerWithActionType:(id)a0;
+ (void)_prepareSectionConfiguration:(id)a0 assetsFilterPredicate:(id)a1;
+ (id)_singleItemDataSourceManagerForCollection:(id)a0 context:(id)a1;
+ (id)fromMyMacAlbumsDataSectionManagerWithPhotoLibrary:(id)a0 context:(id)a1;
+ (id)myAlbumsDataSectionManagerForPhotoLibrary:(id)a0 context:(id)a1 hideAdd:(BOOL)a2;
+ (id)otherAlbumsDataSectionManagerWithPhotoLibrary:(id)a0 context:(id)a1;

- (void).cxx_destruct;
- (void)appearanceDidChange;
- (id)makeSectionManagers;
- (long long)requestImageForItem:(id)a0 parentItem:(id)a1 completion:(id /* block */)a2;
- (long long)_requestImageForAsset:(id)a0 size:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (id)backedPlusButtonImage;
- (id)sidebarCustomSymbolImageWithName:(id)a0 symbolColor:(id)a1 scale:(double)a2;

@end
