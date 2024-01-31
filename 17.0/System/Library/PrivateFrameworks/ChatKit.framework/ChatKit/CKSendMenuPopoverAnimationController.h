@class NSString, CKSendMenuPopoverPresentationConfiguration, CKSendMenuPopoverPresentationControllerAnchorItem;

@interface CKSendMenuPopoverAnimationController : NSObject <UIViewControllerAnimatedTransitioning>

@property (readonly, nonatomic) CKSendMenuPopoverPresentationControllerAnchorItem *anchorItem;
@property (retain, nonatomic) CKSendMenuPopoverPresentationConfiguration *configuration;
@property (nonatomic, getter=isPresenting) BOOL presenting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (void)animateDismissTransitionUsingContext:(id)a0 containerView:(id)a1 popoverViewController:(id)a2;
- (void)animatePresentTransitionUsingContext:(id)a0 containerView:(id)a1 popoverViewController:(id)a2;
- (id)initWithConfiguration:(id)a0 presenting:(BOOL)a1;

@end
