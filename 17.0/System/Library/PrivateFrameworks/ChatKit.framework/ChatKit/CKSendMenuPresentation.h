@class CKSendMenuPopoverTransitioningDelegate, CKSendMenuViewController, CKSendMenuPopoverViewController, NSString, UIViewController;
@protocol CKSendMenuPresentationDelegate, CKSceneOverlayPresentationContext;

@interface CKSendMenuPresentation : NSObject <CKSendMenuPopoverPresentationControllerDelegate>

@property (retain, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) CKSendMenuViewController *sendMenuViewController;
@property (weak, nonatomic) id<CKSendMenuPresentationDelegate> delegate;
@property (nonatomic) long long presentationState;
@property (retain, nonatomic) CKSendMenuPopoverTransitioningDelegate *sendMenuTransitioningDelegate;
@property (retain, nonatomic) CKSendMenuPopoverViewController *popoverRootViewController;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastAnchorViewRectInWindow;
@property (nonatomic) BOOL hasRequestedKeyboardSnapshot;
@property (retain, nonatomic) id<CKSceneOverlayPresentationContext> overlayPresentationContext;
@property (readonly, nonatomic) long long presentationStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)layout;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void)removeSendMenuFromViewHierarchy;
- (void)__dismissPopoverPresentationAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_beginFullscreenPresentationWithCompletion:(id /* block */)a0;
- (void)_beginPopoverPresentationWithCompletion:(id /* block */)a0;
- (void)_delegateDidDismissSendMenu;
- (void)_dismissFullscreenPresentationAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_dismissPopoverPresentationAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_layoutFullScreenSendMenuView;
- (void)beginPresentationWithCompletion:(id /* block */)a0;
- (void)chatControllerWillDisappear:(id)a0;
- (void)enforceSendMenuOrderingInWindowSubviews;
- (void)informSendMenuOfAnchorViewPositionChangeIfNecessary;
- (id)initWithOverlayPresentationContext:(id)a0 presentingViewController:(id)a1 sendMenuViewController:(id)a2 delegate:(id)a3;
- (id)newPopoverLayoutMetrics;
- (void)presentCardWithContentViewController:(id)a0 style:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)rePresentSendMenu;
- (void)requestDismissKeyboardSnapshotForSendMenuIfNeeded;
- (void)sendMenuPresentationController:(id)a0 didChangePopoverLayoutMetrics:(id)a1;
- (void)sendMenuPresentationControllerWantsToBeDismissed:(id)a0;
- (void)sendMenuPresentationControllerWillDismiss:(id)a0;

@end
