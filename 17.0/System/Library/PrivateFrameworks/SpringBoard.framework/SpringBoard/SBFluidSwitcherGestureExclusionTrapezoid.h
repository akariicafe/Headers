@class NSString;

@interface SBFluidSwitcherGestureExclusionTrapezoid : NSObject <SBFluidSwitcherGestureExclusionShape>

@property (nonatomic) double baseHeight;
@property (nonatomic) double trapezoidHeight;
@property (nonatomic) double adjacentBaseXDistanceFromEdge;
@property (nonatomic) double opposingBaseXDistanceFromEdge;
@property (nonatomic) BOOL allowHorizontalSwipesOutsideTrapezoid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exclusionTrapezoidWithBaseHeight:(double)a0 trapezoidHeight:(double)a1 adjacentBaseXDistanceFromEdge:(double)a2 opposingBaseXDistanceFromEdge:(double)a3 allowHorizontalSwipesOutsideTrapezoid:(BOOL)a4;

- (id)debugView;
- (BOOL)shouldBeginGestureAtStartingPoint:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
