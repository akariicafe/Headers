@class SBLayoutStateTransitionCoordinator, NSString, SBWorkspaceKeyboardFocusController, SBPIPInteractionSettings, SBPIPContainerViewController, __UIKeyboardArbiterManager, UIApplicationSceneDeactivationAssertion, SBPIPStashableWrapperViewController, UIViewController, SBKeyboardDismissalManager, NSNumber, SBKeyboardSuppressionManager;
@protocol SBPIPSceneContentContainerAdapterDelegate, SBPIPContainerViewControllerAdapterContextProviding, BSInvalidatable, SBPIPSceneContentProviding;

@interface SBPIPSceneContentContainerAdapter : NSObject <SBPIPStashableWrapperViewControllerDelegate, SBLayoutStateTransitionObserver, SBDeviceApplicationSceneHandleObserver, SBWorkspaceKeyboardFocusControllerObserver, SBKeyboardDismissalParticipant, SBPIPContainerViewControllerAdapter> {
    SBPIPContainerViewController<SBPIPContainerViewControllerAdapterContextProviding> *_containerViewController;
    SBPIPStashableWrapperViewController *_stashableWrappingViewController;
    BOOL _invalidated;
    struct CGSize { double width; double height; } _minimumStashTabSize;
    id<SBPIPSceneContentContainerAdapterDelegate> _delegate;
    UIApplicationSceneDeactivationAssertion *_sceneDeactivationAssertion;
    id<BSInvalidatable> _keyboardSuppressionAssertion;
    __UIKeyboardArbiterManager *_keyboardArbiterManager;
    SBWorkspaceKeyboardFocusController *_keyboardFocusController;
    id<BSInvalidatable> _keyboardFocusObserver;
    SBKeyboardDismissalManager *_keyboardDismissalManager;
    id<BSInvalidatable> _keyboardDismissalParticipantHandle;
    SBKeyboardSuppressionManager *_keyboardSuppressionManager;
    SBLayoutStateTransitionCoordinator *_transitionCoordinator;
    SBPIPInteractionSettings *_interactionSettings;
}

@property (readonly, nonatomic) UIViewController<SBPIPSceneContentProviding> *sceneContentViewController;
@property (readonly, weak, nonatomic) SBPIPContainerViewController *containerViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSNumber *overrideResourcesUsageReductionTimeout;
@property (readonly, nonatomic) BOOL shouldSuppressAssociatedElementsInSystemAperture;

- (void)dealloc;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidEndWithTransitionContext:(id)a1;
- (void)setContainerViewController:(id)a0;
- (void)sceneHandle:(id)a0 didUpdatePairingStatusForExternalSceneIdentifiers:(id)a1;
- (void)invalidate;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidBeginWithTransitionContext:(id)a1;
- (void)containerViewControllerDidEndInteraction:(id)a0 targetWindowScene:(id)a1;
- (void).cxx_destruct;
- (void)keyboardFocusController:(id)a0 externalSceneDidAcquireFocus:(id)a1;
- (void)containerViewController:(id)a0 handleDestructionRequestForSceneHandle:(id)a1;
- (void)_dismissKeyboardIfNecessaryForTransitionContext:(id)a0;
- (long long)_effectiveEnvironmentModeForTransitionContext:(id)a0;
- (BOOL)_hitTestTouch:(id)a0 inWindow:(id)a1;
- (id)_hostedAppSceneHandle;
- (BOOL)_hostedSceneIsPresentingKeyboard;
- (BOOL)_tapInEnvironmentCanDismiss:(long long)a0;
- (void)_updateDisplayLayoutElementKeyboardFocus:(BOOL)a0;
- (id)bundleIdentifierForContainerViewController:(id)a0;
- (void)containerViewController:(id)a0 didSettleOnStashState:(BOOL)a1;
- (void)containerViewController:(id)a0 didUpdateStashProgress:(double)a1;
- (void)containerViewController:(id)a0 didUpdateStashState:(BOOL)a1 springSettings:(id)a2;
- (BOOL)containerViewController:(id)a0 shouldHandleStashingForTransitionContext:(id)a1;
- (void)containerViewController:(id)a0 wantsStashTabHidden:(BOOL)a1 left:(BOOL)a2 springSettings:(id)a3 completion:(id /* block */)a4;
- (void)containerViewController:(id)a0 willBeginInteractionWithGestureRecognizer:(id)a1;
- (void)containerViewController:(id)a0 willUpdateStashState:(BOOL)a1;
- (void)containerViewControllerDidEndSizeChange:(id)a0;
- (void)containerViewControllerPanGestureDidEnd:(id)a0;
- (BOOL)containerViewControllerShouldRequireMedusaKeyboard:(id)a0;
- (void)containerViewControllerWillBeginSizeChange:(id)a0 behavior:(int)a1;
- (id)contentViewControllerForContainerViewController:(id)a0;
- (id)hostedAppSceneHandleForContainerViewController:(id)a0;
- (id)initWithSceneContentViewController:(id)a0 contentViewLayoutSettings:(id)a1 stashSettings:(id)a2 shadowSettings:(id)a3 interactionSettings:(id)a4 keyboardArbiterManager:(id)a5 keyboardFocusController:(id)a6 keyboardSuppressionManager:(id)a7 keyboardDismissalManager:(id)a8 deactivationManager:(id)a9 transitionCoordinator:(id)a10 delegate:(id)a11;
- (BOOL)isStashTabHiddenForContainerViewController:(id)a0;
- (BOOL)keyboardDismissalManager:(id)a0 shouldPreventDismissalForTouch:(id)a1 inWindow:(id)a2;
- (void)loadSubviewsForContainerViewController:(id)a0;
- (int)processIdentifierForContainerViewController:(id)a0;
- (id)scenePersistenceIdentifierForContainerViewController:(id)a0;
- (BOOL)stashableWrapper:(id)a0 didReceivedTapGesture:(id)a1;
- (void)stashableWrapper:(id)a0 didTransitionToStashed:(BOOL)a1;

@end
