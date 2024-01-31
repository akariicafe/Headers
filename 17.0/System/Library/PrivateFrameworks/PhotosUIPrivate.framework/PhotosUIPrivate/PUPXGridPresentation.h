@class PHPhotoLibrary, PUSessionInfo, NSString;

@interface PUPXGridPresentation : NSObject <PXGridPresentation>

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) long long userInterfaceIdiom;
@property (retain, nonatomic) PUSessionInfo *sessionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithUserInterfaceIdiom:(long long)a0;
- (id)createAlbumListViewControllerWithCollectionList:(id)a0;
- (id)createPhotosAlbumViewControllerForAlbum:(id)a0 withFetchResult:(id)a1;
- (id)createViewControllerForAssetCollection:(id)a0 existingAssetsFetchResult:(id)a1;
- (void)_customizePhotosViewConfiguationForAssetPicker:(id)a0 assetCollection:(id)a1;
- (BOOL)_isEmpty:(id)a0;
- (id)createAlbumListViewControllerWithConfiguration:(id)a0;
- (id)createAssetPickerPhotosAlbumViewControllerForAlbum:(id)a0;
- (id)createDuplicatesGridViewControllerWithCollection:(id)a0;
- (id)createImportHistoryGridViewControllerWithCollection:(id)a0;
- (id)createPanoramaViewController;
- (id)createPlacesViewControllerForAssetCollection:(id)a0;
- (id)createSharedAlbumListViewControllerWithConfiguration:(id)a0;
- (id)createViewControllerForAssetCollection:(id)a0;

@end
