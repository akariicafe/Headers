@interface SBFluidSwitcherTouchPassThroughScrollView : UIScrollView

@property (nonatomic) double velocityScaleFactor;

+ (BOOL)superclassRespondsToVelocityScaleFactor;
+ (BOOL)superclassRespondsToSetVelocityScaleFactor;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
