@class NSMutableDictionary;

@interface SBFluidSwitcherSheetMetricsCache : NSObject {
    NSMutableDictionary *_cacheKeyToSizeValueMap;
    NSMutableDictionary *_boundsToTransformMap;
}

- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForCardUnderSheetForBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)_displayEdgeInfo;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pageSheetFrameForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 interfaceOrientation:(long long)a1 configuration:(long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pageSheetFrameForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 interfaceOrientation:(long long)a1 configuration:(long long)a2 userInterfaceIdiom:(long long)a3 displayScale:(double)a4 displayEdgeInfo:(id)a5;
- (struct CGSize { double x0; double x1; })pageSheetMetricsForBoundsSize:(struct CGSize { double x0; double x1; })a0 interfaceOrientation:(long long)a1 configuration:(long long)a2;
- (struct CGSize { double x0; double x1; })pageSheetMetricsForBoundsSize:(struct CGSize { double x0; double x1; })a0 interfaceOrientation:(long long)a1 configuration:(long long)a2 userInterfaceIdiom:(long long)a3 displayScale:(double)a4 displayEdgeInfo:(id)a5;

@end
