@class NSString, UIViewController, NSLayoutConstraint;
@protocol TSKSheetViewControllerDelegate;

@interface TSKSheetViewController : UIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIGestureRecognizerDelegate> {
    UIViewController *_contentViewController;
    NSLayoutConstraint *_contentVerticalConstraint;
    BOOL _isContentHidden;
}

@property (nonatomic) id<TSKSheetViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (BOOL)shouldAutorotate;
- (id)animationControllerForDismissedController:(id)a0;
- (double)transitionDuration:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)animateTransition:(id)a0;
- (void)setContentHidden:(BOOL)a0;
- (id)initWithContentViewController:(id)a0;
- (void)didTapView;
- (void)animateDismissWithContext:(id)a0;
- (void)animateShowWithContext:(id)a0;
- (void)dismissSheetAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithContentViewController:(id)a0 allowTapsOutsideContentView:(BOOL)a1;
- (BOOL)isShowingForTransitionContext:(id)a0;

@end
