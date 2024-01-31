@class PRXPurelyInteractiveTransition, NSString, PRXPullDismissalScrollView, UIViewController;
@protocol UIViewControllerInteractiveTransitioning, UIViewControllerAnimatedTransitioning;

@interface PRXPullDismissalInteractionDriver : NSObject <UIScrollViewDelegate> {
    PRXPurelyInteractiveTransition *_interactiveTransition;
}

@property (readonly, weak, nonatomic) PRXPullDismissalScrollView *scrollView;
@property (readonly, weak, nonatomic) UIViewController *presentedViewController;
@property (readonly, nonatomic) id<UIViewControllerAnimatedTransitioning> animationController;
@property (readonly, nonatomic) id<UIViewControllerInteractiveTransitioning> interactionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)_finishPullToDismiss;
- (id)initWithPresentedViewController:(id)a0 scrollView:(id)a1;

@end
