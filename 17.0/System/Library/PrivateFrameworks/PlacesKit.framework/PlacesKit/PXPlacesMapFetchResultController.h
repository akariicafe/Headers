@class NSString, PXPlacesPhotoAssetsStore, PXPlacesMapPipeline, PHPhotoLibrary, PXPlacesMapController, NSObject, PXLibraryFilterState, PXPlacesMapView;
@protocol PXPlacesMapGeotaggableInfoDelegate, PXPlacesMapThumbnailCurationDelegate, PXPlacesMapControllerAccess, OS_dispatch_queue;

@interface PXPlacesMapFetchResultController : NSObject <PXChangeObserver>

@property (retain, nonatomic) id<PXPlacesMapControllerAccess> mapViewController;
@property (weak, nonatomic) id<PXPlacesMapGeotaggableInfoDelegate> geotaggableInfoDelegate;
@property (retain) PXPlacesPhotoAssetsStore *providedAssetStore;
@property (retain) PXPlacesMapPipeline *providedPipeline;
@property (retain, nonatomic) PXPlacesPhotoAssetsStore *albumAssetStore;
@property (retain, nonatomic) PXPlacesMapPipeline *albumPipeline;
@property (retain, nonatomic) PXPlacesMapPipeline *currentPipeline;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState;
@property (readonly, nonatomic) PXPlacesMapView *mapView;
@property (readonly, nonatomic) PXPlacesMapController *mapController;
@property (weak, nonatomic) id<PXPlacesMapThumbnailCurationDelegate> thumbnailCurationDelegate;
@property (nonatomic) unsigned long long contentMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)resumeWithCompletion:(id /* block */)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (void)loadFetchResult:(id)a0 withCompletion:(id /* block */)a1;
- (void)focusOnGeotaggablesAnimated:(BOOL)a0;
- (void)focusOnProvidedAssetsAnimated:(BOOL)a0;
- (id)initWithGeotaggableInfoDelegate:(id)a0 andMapViewController:(id)a1 libraryFilterState:(id)a2 photoLibrary:(id)a3;
- (void)loadFetchResults:(id)a0 withCompletion:(id /* block */)a1;
- (void)loadProvidedAssetStoreWithCompletion:(id /* block */)a0;
- (void)reloadContentModeWithCompletion:(id /* block */)a0;
- (id)visibleGeotaggables;
- (id)currentAssetStore;
- (void)focusOnMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 animated:(BOOL)a1;
- (void)focusOnProvidedAssetsImmediately;
- (void)reloadMapWithCompletion:(id /* block */)a0;

@end
