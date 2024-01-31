@class NSString, PRUIModalRemoteViewController;
@protocol SBPosterEditingTransientOverlayViewControllerDelegate, PRUIExternallyHostedPosterEditingRequest;

@interface SBPosterEditingTransientOverlayViewController : SBTransientOverlayViewController <PRUIModalRemoteViewControllerDelegate> {
    PRUIModalRemoteViewController *_remoteViewController;
    unsigned char _hasNotifiedDelegateOfWillDismiss : 1;
    unsigned char _hasNotifiedDelegateOfDidDismiss : 1;
}

@property (weak, nonatomic) id<SBPosterEditingTransientOverlayViewControllerDelegate> delegate;
@property (readonly, copy, nonatomic) id<PRUIExternallyHostedPosterEditingRequest> editingRequest;
@property (nonatomic) BOOL synthesizeDelegateCallbacksFromAppearanceTransitions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getRotationContentSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; double x5; int x6; } *)a0 forWindow:(id)a1;
- (void)viewDidLoad;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)handleHomeButtonPress;
- (BOOL)prefersEmbeddedDisplayPresentation;
- (void)modalRemoteViewController:(id)a0 didDismissWithResponse:(id)a1;
- (void)modalRemoteViewController:(id)a0 willDismissWithResponse:(id)a1;
- (void)sendRequestDismissalAction;
- (void)_notifyDelegateOfDidDismissWithResponse:(id)a0;
- (void)_notifyDelegateOfWillDismissWithResponse:(id)a0;
- (BOOL)allowsStackingOverlayContentAbove;
- (void)handleGestureDismissal;
- (id)initWithEditingRequest:(id)a0;
- (long long)preferredLockedGestureDismissalStyle;
- (long long)preferredUnlockedGestureDismissalStyle;

@end
