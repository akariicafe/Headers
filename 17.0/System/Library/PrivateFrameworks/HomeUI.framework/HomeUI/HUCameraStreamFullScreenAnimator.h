@class HUGridCameraCell;

@interface HUCameraStreamFullScreenAnimator : NSObject

@property (readonly, nonatomic) HUGridCameraCell *sourceCameraCell;

- (double)transitionDuration:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_adjustPresentedViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forTransitionContext:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_toViewFinalFrame:(id)a0;
- (id)initWithSourceCameraCell:(id)a0;

@end
