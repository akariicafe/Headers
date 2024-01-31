@class SiriPresentationSpringBoardMainScreenViewController, BSEventQueue, SBAssistantGestureManager, SBAssistantContext, SBWindowScene, NSString, SBAssistantRootViewController, SiriPresentationOptions, UIApplicationSceneDeactivationAssertion, SBFluidDismissalState, SBWindow;
@protocol SBAssistantSessionDelegate, SBAssistantWindowProtocol, BSInvalidatable;

@interface SBAssistantSession : NSObject <CSExternalBehaviorProviding, SBAssistantGestureManagerDelegate> {
    SBFluidDismissalState *_fluidDismissalState;
    id<BSInvalidatable> _traitsOrientationPolicySpecifier;
}

@property (readonly, nonatomic) BSEventQueue *operationQueue;
@property (readonly, nonatomic) SiriPresentationSpringBoardMainScreenViewController *siriPresentationViewController;
@property (readonly, nonatomic) SiriPresentationOptions *siriPresentationOptions;
@property (readonly, nonatomic) UIApplicationSceneDeactivationAssertion *resignActiveAssertion;
@property (readonly, nonatomic) SBAssistantContext *context;
@property (retain, nonatomic) SBWindow<SBAssistantWindowProtocol> *assistantWindow;
@property (retain, nonatomic) SBAssistantGestureManager *gestureManager;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic, getter=isHidingOtherWindows) BOOL hidingOtherWindows;
@property (retain, nonatomic) id<BSInvalidatable> displayLayoutAssertion;
@property (retain, nonatomic) id<BSInvalidatable> suspendWallpaperAnimationAssertion;
@property (retain, nonatomic) id<BSInvalidatable> hideApplicationModelAlertsAssertion;
@property (retain, nonatomic) id<BSInvalidatable> deferOrientationUpdatesAssertion;
@property (nonatomic) BOOL hasPresented;
@property (nonatomic) BOOL hasDismissed;
@property (weak, nonatomic) id<SBAssistantSessionDelegate> delegate;
@property (readonly, weak, nonatomic) SBWindowScene *windowScene;
@property (readonly, nonatomic) SBWindow *window;
@property (readonly, nonatomic) SBAssistantRootViewController *assistantRootViewController;
@property (readonly, nonatomic) long long scrollingStrategy;
@property (readonly, nonatomic) long long notificationBehavior;
@property (readonly, nonatomic) unsigned long long restrictedCapabilities;
@property (readonly, nonatomic) long long proximityDetectionMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) long long participantState;

- (void)dismissAssistantViewIfNecessaryWithAnimation:(long long)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)conformsToCSExternalBehaviorProviding;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)conformsToCSBehaviorProviding;
- (void)_setDisplayLayoutElementActive:(BOOL)a0;
- (void)_viewDidAppear:(BOOL)a0;
- (void)_dockFrameDidChange:(id)a0;
- (id)_newTraitsOrientationPolicySpecifier;
- (void)_notifyViewDidAppear;
- (void)_notifyViewDidDisappear;
- (void)_notifyViewWillAppear;
- (void)_notifyViewWillDisappear;
- (void)_restoreOrientation;
- (void)_setStatusBarHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)_toggleModalAlertHidingAssertion:(BOOL)a0;
- (void)_updateDockViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateOrbLocation:(id)a0;
- (void)_updateOrientationLock;
- (void)_viewDidDisappear:(BOOL)a0;
- (void)_viewWillAppear:(BOOL)a0;
- (void)_viewWillDisappear:(BOOL)a0;
- (void)assertWindowLevel:(double)a0;
- (void)assistantGestureManagerDidRecognizeDismissGesture:(id)a0 preferredDismissalOptions:(id)a1;
- (BOOL)contentObscuresScreen;
- (void)dismissWithFactory:(id)a0 dismissalOptions:(id)a1 completion:(id /* block */)a2;
- (id)initWithSiriPresentationViewController:(id)a0 siriPresentationOptions:(id)a1 gestureConfiguration:(id)a2 windowScene:(id)a3 context:(id)a4 operationQueue:(id)a5;
- (void)presentWithFactory:(id)a0 completion:(id /* block */)a1;

@end
