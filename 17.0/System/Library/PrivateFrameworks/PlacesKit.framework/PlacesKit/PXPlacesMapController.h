@class CLLocationManager, NSString, PXPlacesImageCache, NSSet, NSMutableDictionary, NSOrderedSet, PXPlacesMapPipelineExecutionContext, NSObject, PXPlacesMapView, NSMapTable;
@protocol PXPlacesMapControllerChangeDelegate, PXPlacesMapControllerFocusDelegate, PXPlacesMapControllerLoadingStateDelegate, OS_dispatch_source, PXPlacesMapControllerSelectionDelegate, MKAnnotation, OS_dispatch_queue;

@interface PXPlacesMapController : NSObject <PXPlacesMapViewDelegate, CLLocationManagerDelegate, PXPlacesGeotaggedItemDataSourceDelegate> {
    NSObject<OS_dispatch_queue> *_pipelinesQueue;
    NSObject<OS_dispatch_queue> *_dataSourcesQueue;
    NSObject<OS_dispatch_queue> *_executionContextQueue;
    NSObject<OS_dispatch_source> *_uiUpdateTimer;
    NSMapTable *_dataSourceExecutionContexts;
    NSMapTable *_pendingDataSourceChanges;
}

@property (retain) NSSet *dataSources;
@property (retain) NSMapTable *dataSourceToPipelineMap;
@property (retain, nonatomic) PXPlacesMapView *mapView;
@property (retain) PXPlacesMapPipelineExecutionContext *currentExecutionContext;
@property BOOL pipelineExecutionAllowed;
@property BOOL mapViewIsVisible;
@property (nonatomic) BOOL signalFocusWhenMapViewBecomesVisible;
@property (nonatomic) struct { struct { double x; double y; } origin; struct { double width; double height; } size; } signalFocusMapRect;
@property (retain) PXPlacesImageCache *cache;
@property (retain, nonatomic) CLLocationManager *locationManager;
@property (retain, nonatomic) NSMutableDictionary *showDebugMapRectColors;
@property (readonly, nonatomic) BOOL enableLocationAuthorizationMonitoring;
@property (weak) id<PXPlacesMapControllerSelectionDelegate> selectionDelegate;
@property (weak) id<PXPlacesMapControllerChangeDelegate> changeDelegate;
@property (weak) id<PXPlacesMapControllerFocusDelegate> focusDelegate;
@property (weak) id<PXPlacesMapControllerLoadingStateDelegate> stateDelegate;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } initialCenterCoordinate;
@property (nonatomic) struct { struct CLLocationCoordinate2D { double latitude; double longitude; } center; struct { double latitudeDelta; double longitudeDelta; } span; } initialCoordinateRegion;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } initialEdgePadding;
@property (nonatomic) int currentLocationAuthorizationStatus;
@property (retain, nonatomic) id<MKAnnotation> currentSelection;
@property (readonly, nonatomic) NSOrderedSet *currentSelectedGeotaggables;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)launchMapsAtCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 withTitle:(id)a1 completionHandler:(id /* block */)a2;
+ (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })mapRectWithMapViewSize:(struct CGSize { double x0; double x1; })a0 centeredOnCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 visibleDistance:(double)a2;

- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (void)removeDataSource:(id)a0;
- (void)dealloc;
- (double)_defaultAnimationDuration;
- (void)loadView;
- (void).cxx_destruct;
- (void)mapView:(id)a0 didAddAnnotationViews:(id)a1;
- (void)mapView:(id)a0 didSelectAnnotationView:(id)a1;
- (void)mapView:(id)a0 regionDidChangeAnimated:(BOOL)a1;
- (id)mapView:(id)a0 rendererForOverlay:(id)a1;
- (id)mapView:(id)a0 viewForAnnotation:(id)a1;
- (void)mapViewDidFinishRenderingMap:(id)a0 fullyRendered:(BOOL)a1;
- (void)mapViewWillStartLocatingUser:(id)a0;
- (id)createTrackingBarButtonItem;
- (id)initWithEnableLocationAuthorizationMonitoring:(BOOL)a0;
- (void)mapContainerViewDidAppear;
- (void)mapContainerViewDidDisappear;
- (void)mapContainerViewWillAppear;
- (void)mapContainerViewWillDisappear;
- (void)setVisibleMapRelativeToViewPort:(id)a0 andViewSize:(struct CGSize { double x0; double x1; })a1 forRenderer:(id)a2;
- (void)removePipeline:(id)a0;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })_ensureMinimumSize:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (void)_executeUpdatePlanResults:(id)a0;
- (double)_fadeInAnimationDuration;
- (double)_fadeOutAnimationDuration;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })_mapRectForGeotaggablesFromPipeline:(id)a0 fitAdjusted:(BOOL *)a1;
- (void)_setVisibleMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 edgePadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 animated:(BOOL)a2;
- (void)_showDebugMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 color:(id)a1;
- (void)_updateMapWithAllDataSources:(id /* block */)a0;
- (void)_updateMapWithDataSource:(id)a0 dataSourceChange:(id)a1 completion:(id /* block */)a2;
- (void)_updateMapWithDataSources:(id)a0 dataSourceChangeTable:(id)a1 completion:(id /* block */)a2;
- (double)_zPositionForAnnotationIndex:(long long)a0;
- (void)addPipeline:(id)a0;
- (void)dataSource:(id)a0 didChange:(id)a1;
- (id)executePipeline:(id)a0 dataSourceChange:(id)a1 context:(id)a2;
- (void)focusOnGeotaggablesFromPipeline:(id)a0 animated:(BOOL)a1;
- (void)focusOnGeotaggablesFromPipelineImmediately:(id)a0;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })mapRectForGeotaggablesFromDataSource:(id)a0 renderer:(id)a1 mapViewSize:(struct CGSize { double x0; double x1; })a2 fitAdjusted:(BOOL *)a3;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })mapRectForNearbyQueriesFromRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 atScale:(double)a1 targetViewSize:(struct CGSize { double x0; double x1; })a2;
- (void)resumePipelines:(id /* block */)a0;
- (void)runPipelines;
- (void)setVisibleMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 forPipeline:(id)a1 animated:(BOOL)a2;
- (void)setVisibleMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 forRenderer:(id)a1 animated:(BOOL)a2;
- (void)suspendPipelines;
- (id)visibleGeotaggableFromDataSource:(id)a0;

@end
