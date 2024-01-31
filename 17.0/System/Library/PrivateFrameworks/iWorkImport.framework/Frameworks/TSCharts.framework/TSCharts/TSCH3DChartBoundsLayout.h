@class TSCH3DScene, TSCH3DChartBoundsLayoutSceneDelegate, TSCH3DChartGetProjectedBoundsPipeline;

@interface TSCH3DChartBoundsLayout : NSObject {
    TSCH3DScene *_bounds;
    TSCH3DChartGetProjectedBoundsPipeline *_getBounds;
    TSCH3DChartBoundsLayoutSceneDelegate *_sceneDelegate;
}

@property (readonly, nonatomic) struct { BOOL forceOmitLegend; BOOL forceOmitTitle; BOOL forceOmitAxisTitle; BOOL forceOmitLabelPlacement; BOOL forceTitleAtTop; BOOL forceLegendAtBottom; BOOL enable3DTightBounds; BOOL enable3DScaledDepthBounds; long long maxDepthRatioType; unsigned long long max3DLimitingSeries; } layoutSettings;
@property (readonly, nonatomic) TSCH3DScene *scene;
@property (nonatomic) struct box<glm::detail::tvec2<float>> { struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _min; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _max; } layoutInPage;
@property (nonatomic) struct box<glm::detail::tvec2<float>> { struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _min; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _max; } bodyLayoutInPage;
@property (nonatomic) struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } containingViewport;
@property (nonatomic) struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } originalContainingViewport;
@property (nonatomic) int mode;
@property (retain, nonatomic) Class getBoundsClass;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)invalidateBounds;
- (const void *)projectedBounds;
- (id)cacheableGetBoundsPipeline;
- (id)debugBounds;
- (id)initWithScene:(id)a0 containingViewport:(void *)a1 originalContainingViewport:(void *)a2 layoutSettings:(const struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; } *)a3;
- (void)invalidateLabelsBoundsForSceneObjectClass:(Class)a0 boundsIndex:(long long)a1;
- (BOOL)isInward;
- (BOOL)isSage;
- (const void *)p_projectedBoundsWithLabelsMode:(int)a0;
- (void)p_updateLabelWrapBoundsPass;
- (void)resetContainingViewport;
- (void)resetSceneDelegate;
- (struct ResizingSize { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x2; })resizingSize;

@end
