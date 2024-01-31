@class UIViewController, CKSendMenuPresentationPopoverView;

@interface CKSendMenuPopoverViewController : UIViewController

@property (retain, nonatomic) UIViewController *sendMenuViewController;
@property (retain, nonatomic) UIViewController *appContainerViewController;
@property (readonly, nonatomic) CKSendMenuPresentationPopoverView *popoverView;

- (id)init;
- (void)loadView;
- (void).cxx_destruct;
- (void)anchorViewDidMove;
- (id)animationForDismissingWithFinalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 finalCenter:(struct CGPoint { double x0; double x1; })a1 finalAlpha:(double)a2;
- (id)animationForPresentingSendMenuViewControllerWithFinalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 finalCenter:(struct CGPoint { double x0; double x1; })a1;
- (id)animationForTransitioningToAppContainerViewControllerWithFinalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 finalCenter:(struct CGPoint { double x0; double x1; })a1;

@end
