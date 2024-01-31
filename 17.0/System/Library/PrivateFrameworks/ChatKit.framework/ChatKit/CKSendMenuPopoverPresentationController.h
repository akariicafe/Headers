@class CKSendMenuPopoverPresentationControllerAnchorItem, CKSendMenuPopoverPresentationConfiguration, UITapGestureRecognizer, NSString, CKPopoverViewLayout, CKSendMenuPresentationPopoverView, CKSendMenuPopoverPresentationDimmingView, CKSendMenuPopoverViewController, UIViewController;
@protocol CKSendMenuPopoverPresentationControllerDelegate;

@interface CKSendMenuPopoverPresentationController : UIPresentationController <CKSendMenuPopoverPresentationDimmingViewDelegate>

@property (retain, nonatomic) CKPopoverViewLayout *popoverLayout;
@property (retain, nonatomic) CKSendMenuPopoverPresentationDimmingView *dimmingView;
@property (readonly, nonatomic) CKSendMenuPresentationPopoverView *popoverView;
@property (readonly, nonatomic) CKSendMenuPopoverViewController *popoverViewController;
@property (retain, nonatomic) UITapGestureRecognizer *dismissGestureRecognizer;
@property (retain, nonatomic) CKSendMenuPopoverPresentationConfiguration *configuration;
@property (nonatomic) long long presentationState;
@property (readonly, getter=isPresenting) BOOL presenting;
@property (retain, nonatomic) CKSendMenuPopoverPresentationControllerAnchorItem *anchorItem;
@property (retain, nonatomic) UIViewController *sendMenuViewController;
@property (weak, nonatomic) id<CKSendMenuPopoverPresentationControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (BOOL)shouldPresentInFullscreen;
- (id)presentedView;
- (void)containerViewWillLayoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (void)presentationTransitionWillBegin;
- (id)anchorItem;
- (void).cxx_destruct;
- (void)setAnchorItem:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (struct CGPoint { double x0; double x1; })_anchorViewCenterInContainer;
- (void)_informDelegateAboutCurrentPopoverLayoutWithPreviousMetrics:(id)a0;
- (void)anchorViewDidMove;
- (id)initWithConfiguration:(id)a0 popoverViewController:(id)a1 presentingViewController:(id)a2;
- (id)newPopoverLayoutMetrics;
- (void)presentCardWithContentViewController:(id)a0 style:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)sendMenuPopoverPresentationDimmingViewDidReceiveTap:(id)a0;
- (id)sendMenuViewController;
- (void)setSendMenuViewController:(id)a0;

@end
