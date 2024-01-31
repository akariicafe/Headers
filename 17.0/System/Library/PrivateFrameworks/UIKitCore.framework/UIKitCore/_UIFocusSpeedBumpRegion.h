@interface _UIFocusSpeedBumpRegion : _UIFocusRegion

@property (nonatomic) unsigned long long speedBumpEdges;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)_boundariesBlockingFocusMovementRequest:(id)a0;
- (BOOL)_canBeOccludedByRegionsAbove;
- (BOOL)_canOccludeRegionsBelow;
- (id)_focusRegionWithAdjustedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coordinateSpace:(id)a1;
- (BOOL)_shouldCropRegionToSearchArea;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coordinateSpace:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coordinateSpace:(id)a1 speedBumpEdges:(unsigned long long)a2;

@end
