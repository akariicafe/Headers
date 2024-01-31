@class TSCH3DChartSceneInfo;

@interface TSCH3DChartScene : NSObject {
    TSCH3DChartSceneInfo *_sceneInfo;
}

+ (void)addObjectsToSceneWithSceneInfo:(id)a0;
+ (BOOL)supportsValueAxisLabelAlignmentCaching;

- (id)scene;
- (struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; })layoutSettings;
- (void).cxx_destruct;
- (id)seriesType;
- (id)chartType;
- (id)styleProvidingSource;
- (id)chartInfo;
- (void)addAllLabelsToScene;
- (void)addAllObjectsToScene;
- (void)addChartTitlesToScene;
- (void)addLabelsToScene;
- (void)addObjectsToScene;
- (void)addSeriesObjectsToScene;
- (void)adjustSceneSettings;
- (id)initWithSceneInfo:(id)a0;

@end
