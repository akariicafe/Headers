@interface ASVHitTestStrategyAveragedPlaneWithClusteringAndInterpolation : ASVHitTestStrategy {
    float _currentPlaneHeight;
    void /* unknown type, empty encoding */ _currentPlaneNormal;
}

- (id)init;
- (void)clearHistory;
- (id)decisionForHitTestOfType:(id)a0 atScreenPoint:(SEL)a1 inFrame:(long long)a2 withViewportSize:(id)a3 assetPosition:(struct CGSize { double x0; double x1; })a4 maxDistance:(float)a5;
- (id)decisionForHitTestOfType:(id)a0 atScreenPoint:(SEL)a1 inSession:(long long)a2 withViewportSize:(id)a3 assetPosition:(struct CGSize { double x0; double x1; })a4 maxDistance:(float)a5;
- (id)decisionForHitTestOfType:(id)a0 originalResult:(SEL)a1 atImagePoint:(long long)a2 inFrame:(id)a3 withViewportSize:(id)a4 assetPosition:(struct CGSize { double x0; double x1; })a5 maxDistance:(float)a6;
- (id)decisionForMovementFromOriginalResult:(id)a0 atImagePoint:(SEL)a1 inFrame:(id)a2 withViewportSize:(id)a3 assetPosition:(struct CGSize { double x0; double x1; })a4 maxDistance:(float)a5;
- (id)decisionForPlacementFromOriginalResult:(id)a0 afterPlacementTimeout:(SEL)a1 atImagePoint:(id)a2 inFrame:(BOOL)a3 withViewportSize:(id)a4 assetPosition:(struct CGSize { double x0; double x1; })a5 maxDistance:(float)a6;
- (BOOL)decisionHistoryContainsPlaneChange:(id)a0 relativeToNewDecision:(id)a1;
- (BOOL)hasFormedClusterForInitialPlacement:(float *)a0 planeNormal:(void *)a1;
- (BOOL)hasFormedClusterForMovement:(float *)a0 planeNormal:(void *)a1;
- (id)interpolatedDecisionForDecision:(id)a0;
- (id)reprojectOntoCurrentPlaneAtImagePoint:(id)a0 inFrame:(SEL)a1 withViewportSize:(id)a2 assetPosition:(struct CGSize { double x0; double x1; })a3 maxDistance:(float)a4;
- (BOOL)resultsContainPoorQualityEstimatedResults:(id)a0;

@end
