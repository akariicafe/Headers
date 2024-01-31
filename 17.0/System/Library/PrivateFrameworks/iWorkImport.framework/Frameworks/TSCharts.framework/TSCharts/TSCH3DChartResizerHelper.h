@class TSCH3DVector, TSCH3DChartBoundsLayout, TSCHChartInfo;

@interface TSCH3DChartResizerHelper : NSObject {
    TSCH3DChartBoundsLayout *_boundsLayout;
}

@property (readonly, nonatomic) TSCHChartInfo *chartInfo;
@property (nonatomic) struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } containingViewport;
@property (readonly, nonatomic) TSCH3DVector *containingViewportVector;
@property (readonly, nonatomic) struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } originalContainingViewport;
@property (nonatomic) struct { BOOL forceOmitLegend; BOOL forceOmitTitle; BOOL forceOmitAxisTitle; BOOL forceOmitLabelPlacement; BOOL forceTitleAtTop; BOOL forceLegendAtBottom; BOOL enable3DTightBounds; BOOL enable3DScaledDepthBounds; long long maxDepthRatioType; unsigned long long max3DLimitingSeries; } layoutSettings;

+ (id)helperWithInfo:(id)a0;
+ (struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })containingViewportForVector:(id)a0;
+ (id)vectorForContainingViewport:(void *)a0;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithInfo:(id)a0;
- (void)invalidateBounds;
- (id)boundsLayoutForScene:(id)a0 mode:(int)a1;
- (id)boundsLayoutResizedForScene:(id)a0 bounds:(void *)a1 resizeStartingSize:(void *)a2 mode:(int)a3 returningResultSize:(void *)a4;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })chartBodyLayoutOffsetInChartAreaLayoutSpaceUsingConverter:(const void *)a0;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })chartBodySizeByResizingScene:(id)a0 toLayoutSize:(void *)a1 resizeStartingSize:(void *)a2 returningChartBodyLayoutOffsetInChartAreaLayoutSpace:(void *)a3 resultLayoutSize:(void *)a4;
- (void)initializeOriginalContainingViewport;
- (void)invalidateLabelsBoundsForSceneObjectClass:(Class)a0 boundsIndex:(long long)a1;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })layoutSizeByResizingScene:(id)a0 toChartBodyLayoutSize:(void *)a1 resizeStartingSize:(void *)a2 returningChartBodyLayoutBoundsInChartAreaLayoutSpace:(void *)a3;

@end
