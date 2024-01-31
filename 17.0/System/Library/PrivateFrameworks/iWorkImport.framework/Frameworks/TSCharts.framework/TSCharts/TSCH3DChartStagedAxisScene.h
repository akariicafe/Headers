@interface TSCH3DChartStagedAxisScene : TSCH3DChartScene

+ (BOOL)supportsValueAxisLabelAlignmentCaching;

- (void)addChartTitlesToScene;
- (void)addGridlinesToScene;
- (void)addLabelsToScene;
- (void)addObjectsToScene;
- (void)addPartsForEnumerator:(id)a0 styleIndex:(unsigned long long)a1;
- (void)addSageBoundsToScene;

@end
