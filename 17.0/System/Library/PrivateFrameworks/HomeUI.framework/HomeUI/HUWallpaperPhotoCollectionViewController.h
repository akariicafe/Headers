@class PHCachingImageManager, HUWallpaperPhotoCollectionFlowLayout, PHFetchResult, NAFuture, NSString;
@protocol HUWallpaperPhotoCollectionViewControllerDelegate;

@interface HUWallpaperPhotoCollectionViewController : UICollectionViewController <PHPhotoLibraryChangeObserver>

@property (weak, nonatomic) HUWallpaperPhotoCollectionFlowLayout *flowLayout;
@property (retain, nonatomic) PHCachingImageManager *imageManager;
@property (retain, nonatomic) PHFetchResult *assetsFetchResult;
@property (retain, nonatomic) NAFuture *imageDownloadFuture;
@property (nonatomic) BOOL initialScrollToBottom;
@property (readonly, weak, nonatomic) id<HUWallpaperPhotoCollectionViewControllerDelegate> delegate;
@property (readonly, nonatomic) long long assetCollectionSubtype;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)photoLibraryDidChange:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)imageFutureForAsset:(id)a0 cloudAllowed:(BOOL)a1;
- (id)initWithTitle:(id)a0 fetchResult:(id)a1 assetCollectionSubtype:(long long)a2 delegate:(id)a3;

@end
