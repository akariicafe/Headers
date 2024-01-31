@class VKPuckAnimator, NSArray, NSString, VKTimedAnimation;
@protocol VKInteractiveMapDelegate;

@interface VKMapCanvas : VKScreenCanvas <VKInteractiveMap> {
    struct CGSize { double width; double height; } _lastCanvasSize;
    struct optional<float> { BOOL _hasValue; union ValueUnion { unsigned char data[4]; float type; } _value; } _lastValidCanvasSizeZoomLevel;
    VKTimedAnimation *_horizontalOffsetAnimation;
    struct shared_ptr<md::OverlayContainer> { struct OverlayContainer *__ptr_; struct __shared_weak_count *__cntrl_; } _overlayContainer;
    int _consoleFpsUpdateTicker;
    float _consoleFps;
}

@property (weak, nonatomic) id<VKInteractiveMapDelegate> delegate;
@property (weak, nonatomic) VKPuckAnimator *puckAnimator;
@property (nonatomic) BOOL trafficEnabled;
@property (nonatomic) double canonicalSkyHeight;
@property (readonly, nonatomic) NSArray *overlays;
@property (readonly, nonatomic) NSArray *visibleTileSets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsMapType:(int)a0 scale:(int)a1;

- (void)didBecomeActive;
- (long long)tileSize;
- (void)didBecomeInActive;
- (void)clearScene;
- (void)goToTileX:(int)a0 Y:(int)a1 Z:(int)a2 tileSize:(int)a3;
- (void)updateWithTimestamp:(double)a0 withContext:(void *)a1;
- (void)setContentsScale:(double)a0;
- (void)setMapType:(int)a0 animated:(BOOL)a1;
- (id)detailedDescription;
- (void)dealloc;
- (struct CGPoint { double x0; double x1; })convertCoordinateToPoint:(struct { double x0; double x1; })a0;
- (void)setMapType:(int)a0;
- (BOOL)isPointValidForGesturing:(struct CGPoint { double x0; double x1; })a0;
- (id)markerAtScreenPoint:(struct CGPoint { double x0; double x1; })a0 enableExtendedFeatureMarkers:(BOOL)a1;
- (void)addOverlay:(id)a0;
- (struct CGPoint { double x0; double x1; })convertCoordinateToCameraModelPoint:(struct { double x0; double x1; })a0;
- (id).cxx_construct;
- (BOOL)shouldHideOffscreenSelectedAnnotation;
- (void)insertOverlay:(id)a0 belowOverlay:(id)a1;
- (struct { double x0; double x1; })convertPointToMapPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)insertOverlay:(id)a0 aboveOverlay:(id)a1;
- (void)updateCameraForFrameResize;
- (id /* block */)annotationRectTest;
- (void)setCameraHorizontalOffset:(double)a0 duration:(double)a1 timingFunction:(id)a2;
- (id)attributionsForCurrentRegion;
- (BOOL)_isGlobeEnabled;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (struct CGPoint { double x0; double x1; })convertMapPointToPoint:(struct { double x0; double x1; })a0;
- (void).cxx_destruct;
- (struct { double x0; double x1; })convertPointToCoordinate:(struct CGPoint { double x0; double x1; })a0;
- (struct optional<float> { BOOL x0; union ValueUnion { unsigned char x0[4]; float x1; } x1; })_zoomLevelForCanvasSize:(struct CGSize { double x0; double x1; })a0;
- (id /* block */)annotationCoordinateTest;
- (void)populateDebugNode:(void *)a0 withOptions:(const void *)a1;
- (void)transferStateFromCanvas:(id)a0;
- (id /* block */)globeAnnotationCoordinateTest;
- (void)updateOverlays;
- (void)removeOverlay:(id)a0;
- (void)debugHighlightObjectAtPoint:(struct CGPoint { double x0; double x1; })a0 highlightTarget:(unsigned char)a1;
- (id)consoleString:(BOOL)a0;
- (id /* block */)globeAnnotationRectTest;
- (id)initWithMapEngine:(void *)a0 inBackground:(BOOL)a1;
- (void)transitionToTracking:(BOOL)a0 mapMode:(long long)a1 startLocation:(struct { double x0; double x1; })a2 startCourse:(double)a3 cameraController:(id)a4 pounceCompletionHandler:(id /* block */)a5;

@end
