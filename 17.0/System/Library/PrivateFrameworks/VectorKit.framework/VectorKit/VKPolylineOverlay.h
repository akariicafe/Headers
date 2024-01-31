@class GEOComposedRoute, NSString, GEOComposedRouteTraffic, GEOMapRegion, VKRouteLine;
@protocol VKPolylineOverlayRouteRibbonObserver;

@interface VKPolylineOverlay : NSObject <VKRouteOverlay, GEOComposedRouteObserver> {
    struct __CFSet { } *_observers;
    BOOL _isReadyForSnapping;
    struct unique_ptr<md::TrafficSegmentsAlongRoute, std::default_delete<md::TrafficSegmentsAlongRoute>> { struct __compressed_pair<md::TrafficSegmentsAlongRoute *, std::default_delete<md::TrafficSegmentsAlongRoute>> { struct TrafficSegmentsAlongRoute *__value_; } __ptr_; } _trafficSegments;
}

@property (readonly, nonatomic) double trafficTimeStamp;
@property (weak, nonatomic) VKRouteLine *routeRibbon;
@property (weak, nonatomic) id<VKPolylineOverlayRouteRibbonObserver> routeRibbonObserver;
@property (readonly, nonatomic) BOOL containsTransit;
@property (readonly, nonatomic) GEOComposedRoute *composedRoute;
@property (readonly, nonatomic) GEOComposedRouteTraffic *traffic;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL hasFocus;
@property (nonatomic) BOOL showTraffic;
@property (readonly, nonatomic) struct { double x0; double x1; } coordinate;
@property (readonly, nonatomic) GEOMapRegion *boundingMapRegion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (BOOL)_meetsMinimumPathLengthBetweenStart:(unsigned int)a0 end:(unsigned int)a1;
- (void)clearSnappedPathsForObserver:(id)a0;
- (void)composedRoute:(id)a0 appliedTransitRouteUpdates:(id)a1;
- (void)composedRoute:(id)a0 changedSelectedRideInClusteredSegment:(id)a1 fromIndex:(unsigned long long)a2 toIndex:(unsigned long long)a3;
- (void)composedRoute:(id)a0 selectedSections:(id)a1 deselectedSections:(id)a2;
- (void)composedRouteUpdatedSnappedPaths:(id)a0;
- (id)initWithComposedRoute:(id)a0 traffic:(id)a1;
- (void)_setNeedsLayout;
- (struct DebugTreeNode { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; struct vector<gdc::DebugTreeNode, std::allocator<gdc::DebugTreeNode>> { struct DebugTreeNode *x0; struct DebugTreeNode *x1; struct __compressed_pair<gdc::DebugTreeNode *, std::allocator<gdc::DebugTreeNode>> { struct DebugTreeNode *x0; } x2; } x2; struct vector<gdc::DebugTreeProperty, std::allocator<gdc::DebugTreeProperty>> { struct DebugTreeProperty *x0; struct DebugTreeProperty *x1; struct __compressed_pair<gdc::DebugTreeProperty *, std::allocator<gdc::DebugTreeProperty>> { struct DebugTreeProperty *x0; } x2; } x3; })createDebugNode;
- (void)createMatchedSegmentAndAddToPaths:(id)a0 section:(id)a1 pathStartIndex:(unsigned int)a2 pathEndIndex:(unsigned int)a3 shouldGenerateSnapPath:(BOOL)a4;
- (id)getPathsForRenderRegion:(id)a0 shouldSnapToRoads:(BOOL)a1 shouldGenerateSnapPath:(BOOL)a2 verifySnapping:(BOOL)a3 isGradientTraffic:(BOOL)a4 observer:(id)a5;
- (BOOL)isSnappingForSceneTiles;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })sectionRangeForBounds:(struct Box<double, 2> { struct Matrix<double, 2, 1> { double x0[2]; } x0; struct Matrix<double, 2, 1> { double x0[2]; } x1; })a0;
- (void)updateTraffic:(id)a0;

@end
