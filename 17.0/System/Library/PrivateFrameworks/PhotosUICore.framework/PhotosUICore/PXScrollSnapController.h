@protocol PXScrollablePageSource;

@interface PXScrollSnapController : NSObject

@property (nonatomic) long long snapBehavior;
@property (nonatomic) long long scrollAxis;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } visibilityInsets;
@property (weak, nonatomic) id<PXScrollablePageSource> scrollablePageSource;
@property (nonatomic) double maximumAccelerationFactor;
@property (nonatomic) double maximumDecelerationFactor;
@property (nonatomic) double minimumSpeed;

- (id)init;
- (struct CGPoint { double x0; double x1; })adjustedTargetVisibleOriginForProposedTargetVisibleOrigin:(struct CGPoint { double x0; double x1; })a0 scrollingVelocity:(struct CGPoint { double x0; double x1; })a1 decelerationRate:(inout long long *)a2;
- (void).cxx_destruct;
- (id)initWithSnapBehavior:(long long)a0 scrollAxis:(long long)a1 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 visibilityInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 scrollablePageSource:(id)a4;

@end
