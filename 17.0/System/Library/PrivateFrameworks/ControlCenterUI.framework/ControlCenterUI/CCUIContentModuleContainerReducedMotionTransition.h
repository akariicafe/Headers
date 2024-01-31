@class UIWindow, UIView;

@interface CCUIContentModuleContainerReducedMotionTransition : CCUIContentModuleContainerTransition

@property (weak, nonatomic) UIWindow *snapshotHostWindow;
@property (retain, nonatomic) UIView *snapshotView;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } snapshotCorrectiveTransform;

- (void).cxx_destruct;
- (id)customAnimator;
- (void)performTransitionFromView:(id)a0 toView:(id)a1 containerView:(id)a2;

@end
