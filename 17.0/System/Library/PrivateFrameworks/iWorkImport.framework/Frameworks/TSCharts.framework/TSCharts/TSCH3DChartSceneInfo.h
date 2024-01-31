@class TSCHChartSeriesType, TSCHChartInfo, TSCHChartType, TSCH3DScene;
@protocol TSWPStyleProviding;

@interface TSCH3DChartSceneInfo : NSObject <NSCopying>

@property (readonly, nonatomic) TSCH3DScene *scene;
@property (readonly, nonatomic) TSCHChartInfo *chartInfo;
@property (readonly, nonatomic) TSCHChartType *chartType;
@property (readonly, nonatomic) TSCHChartSeriesType *seriesType;
@property (readonly, nonatomic) struct { BOOL forceOmitLegend; BOOL forceOmitTitle; BOOL forceOmitAxisTitle; BOOL forceOmitLabelPlacement; BOOL forceTitleAtTop; BOOL forceLegendAtBottom; BOOL enable3DTightBounds; BOOL enable3DScaledDepthBounds; long long maxDepthRatioType; unsigned long long max3DLimitingSeries; } layoutSettings;
@property (readonly, weak, nonatomic) id<TSWPStyleProviding> styleProvidingSource;

+ (id)infoWithScene:(id)a0 chartInfo:(id)a1 chartType:(id)a2 seriesType:(id)a3 layoutSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; })a4 styleProvidingSource:(id)a5;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithScene:(id)a0 chartInfo:(id)a1 chartType:(id)a2 seriesType:(id)a3 layoutSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; })a4 styleProvidingSource:(id)a5;

@end
