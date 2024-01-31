@class NSTimer, PHAsset, NSString, UIImage, PHAssetCollection, PHPhotoLibrary, NSMutableArray, PXLibraryFilterState, PHFetchResult, NSObject;
@protocol PXPlacesSnapshotFactoryDelegate, OS_dispatch_queue;

@interface PXPlacesSnapshotFactory : NSObject <PHPhotoLibraryChangeObserver> {
    NSString *_cachedFilePathLight;
    NSString *_cachedFilePathDark;
    UIImage *_cachedSnapshotImageLight;
    UIImage *_cachedSnapshotImageDark;
    NSString *_cachedSnapshotImageIdentifier;
    UIImage *_cachedPlaceholderImage;
    long long _cachedCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachedIvarLock;
    NSMutableArray *_requestedCompletionBlocks;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
}

@property (nonatomic) BOOL isRegisteredForPhotoLibraryChanges;
@property (retain, nonatomic) PHAsset *snapshottedAsset;
@property (retain, nonatomic) PHFetchResult *placesAssetsFetchResult;
@property (nonatomic) BOOL countCacheInvalidated;
@property (retain, nonatomic) PHFetchResult *assetCountFetchResult;
@property (retain, nonatomic) NSTimer *assetCountChangedTimer;
@property (retain, nonatomic) NSMutableArray *localSearches;
@property (nonatomic) long long currentUserInterfaceStyle;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState;
@property (readonly, nonatomic) long long countLabelStyle;
@property (weak, nonatomic) id<PXPlacesSnapshotFactoryDelegate> delegate;
@property (retain, nonatomic) PHAssetCollection *placesCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)photoLibraryDidChange:(id)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (BOOL)_imageExistsWithLocalIdentifier:(id)a0;
- (id)_placeHolderImageForExtendedTraitCollection:(id)a0;
- (void)requestAssetCountWithForcedRefresh:(BOOL)a0 completion:(id /* block */)a1;
- (void)requestBoundingRegionForQuery:(id)a0 completion:(id /* block */)a1;
- (void)requestMapSnapshotForQuery:(id)a0 snapshotOptions:(id)a1 completion:(id /* block */)a2;
- (void)requestMapSnapshotOfRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 snapshotOptions:(id)a1 completion:(id /* block */)a2;
- (void)requestMapSnapshotWithAssets:(id)a0 snapshotOptions:(id)a1 popoverImageOptions:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)requestPlacesLibraryAlbumSnapshotWithSnapshotOptions:(id)a0 andCompletion:(id /* block */)a1;
- (void)_addLocalSearch:(id)a0;
- (void)_fetchImageOfAsset:(id)a0 withSnapshotOptions:(id)a1 andCompletion:(id /* block */)a2;
- (void)_handleAsyncPlacesLibraryAlbumSnapshotWithSnapshotOptions:(id)a0 andCompletion:(id /* block */)a1;
- (void)_removeLocalSearch:(id)a0;
- (id)_representativeAsset;
- (void)_saveImage:(id)a0 ofAsset:(id)a1 atPath:(id)a2;
- (long long)assetCountWithForcedRefresh:(BOOL)a0;
- (void)removePreviousCachedImages;
- (void)requestPlacesImageOfAsset:(id)a0 withSnapshotOptions:(id)a1 andCompletion:(id /* block */)a2;
- (void)tickAssetCountChangedTimer:(id)a0;

@end
