@class UIViewController, PHAsset, PXPlacesMapThumbnailLocationCurator, NSString, PHPhotoLibrary, PXPlacesMapModeController, PXPhotoKitAssetsDataSourceManager, PXPlacesMapFetchResultController, PXPlacesMapOptionsController, PXMapOptionsView, UIBarButtonItem;
@protocol PXPlacesMapGeotaggableInfoDelegate, PXPlacesGeotaggable, PXPlacesAssetsSelectionDelegate, PXPlacesMapBarButtonsDelegate, PXPlacesMapLocationEditDelegate;

@interface PXPlacesMapFetchResultViewController : UIViewController <PXPlacesMapOptionsControllerDelegate, PXPlacesMapControllerChangeDelegate, PXPlacesMapControllerSelectionDelegate, PXOneUpPresentationDelegate> {
    PHPhotoLibrary *_photoLibrary;
}

@property (retain) PHAsset<PXPlacesGeotaggable> *selectedGeotaggable;
@property (retain, nonatomic) id<PXPlacesMapGeotaggableInfoDelegate> geotaggableInfoDelegate;
@property (retain, nonatomic) UIBarButtonItem *filterAssetsBtn;
@property (retain, nonatomic) PXPhotoKitAssetsDataSourceManager *oneUpDataSourceManager;
@property (retain, nonatomic) PXPlacesMapThumbnailLocationCurator *thumbnailLocationCurator;
@property (retain, nonatomic) PXPlacesMapModeController *mapModeController;
@property (readonly, nonatomic) BOOL enableMapModeControlsOverlay;
@property (readonly, nonatomic) BOOL enableNearbyAssetsAffordance;
@property (retain, nonatomic) PXMapOptionsView *mapOptionsView;
@property (retain, nonatomic) PXPlacesMapOptionsController *mapOptionsController;
@property (readonly, nonatomic) PXPlacesMapFetchResultController *mapFetchResultsController;
@property (weak, nonatomic) id<PXPlacesAssetsSelectionDelegate> assetSelectionDelegate;
@property (weak, nonatomic) id<PXPlacesMapBarButtonsDelegate> barButtonsDelegate;
@property (weak, nonatomic) id<PXPlacesMapLocationEditDelegate> editLocationDelegate;
@property (weak, nonatomic) UIViewController *pxOneUpPresentationViewController;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL showNavigationBar;
@property BOOL canEditLocation;
@property BOOL autoRefocusOnDataChange;
@property (readonly, nonatomic) BOOL prefersToolbarVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)oneUpPresentationOrigin:(id)a0;
- (void)dataSourceDidChange:(id)a0;
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (id)oneUpPresentationInitialAssetReference:(id)a0;
- (void)loadView;
- (id)oneUpPresentationDataSourceManager:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)oneUpPresentationMediaProvider:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_editDidPress;
- (id)_fetchHydratedAssetForPlacesAsset:(id)a0;
- (void)_placeNavigationBarItems:(id)a0;
- (void)_placeToolbarItems:(id)a0;
- (void)_reloadContentModeDisplay:(unsigned long long)a0;
- (void)_reloadStyleForLegacyMapToolbars;
- (void)_reloadStyleForMapModeControlsOverlay;
- (void)_selectedGeotaggables:(id)a0;
- (void)_setupCurrentLocationToolbarLayoutWithInfoToolbarButton:(id)a0 locationStatus:(int)a1;
- (void)_setupEditButtonInNavigationBarForWidgetStyle;
- (void)_setupMapModeControlsOverlay;
- (void)_setupNearbyAssetsToolbarLayoutWithInfoToolbarButton:(id)a0;
- (void)_updateMapOptionsView;
- (id)dataSourceForAssets:(id)a0;
- (void)didEnterForeground:(id)a0;
- (void)didSelectGeotaggableItems:(id)a0 fromMapView:(id)a1;
- (id)initWithInitialCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 libraryFilterState:(id)a1 enableMapModeControlsOverlay:(BOOL)a2 enableNearbyAssetsAffordance:(BOOL)a3 photoLibrary:(id)a4;
- (void)locationServiceAuthorizationChanged;
- (void)mapOptionsControllerDidInvalidateMapOptions:(id)a0;
- (void)mapRegionDidChange:(id)a0;
- (void)ppt_performPlacesScrollTest:(id)a0 iterations:(long long)a1 screenDelta:(long long)a2 delay:(double)a3 completion:(id /* block */)a4;
- (void)ppt_performPlacesZoomTest:(id)a0 iterations:(long long)a1 delay:(double)a2 completion:(id /* block */)a3;
- (BOOL)pu_shouldOptOutFromChromelessBars;
- (void)reloadStyle;
- (void)tapCountToolbarButton:(id)a0;
- (void)tapFilterAssetsBtn:(id)a0;
- (void)tapInfoToolbarButton:(id)a0;
- (void)tapShowAll:(id)a0;

@end
