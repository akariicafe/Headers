@class NSHashTable, NSString, BNBannerSourceListener, SBPlatterHomeGestureManager, SBWindowLevelAssertionManager, NSMutableArray, SBBannerAuthority, NSMapTable, NSMutableSet;
@protocol SBPresentableIntercepting, BSInvalidatable;

@interface SBBannerManager : NSObject <BNPostingPrivate, BNPresentingDelegate, BNBannerSourceListenerDelegate, SBAssistantObserver, SBAmbientPresentationObserver, SBPlatterHomeGestureManagerDelegate, SBWindowLevelAssertionManagerDelegate, SBBannerPanGestureSystemDragCancellingDelegate, SBPresentableSystemDragCancellationHandler, SBFZStackParticipantDelegate, SBPhysicalButtonZStackPolicyAssistantDelegate, BNPosting, SBButtonEventsHandler, SBWindowLevelAssertionProviding> {
    SBBannerAuthority *_bannerAuthority;
    NSMapTable *_windowScenesToBannerControllers;
    NSMapTable *_windowScenesToBannerWindows;
    BNBannerSourceListener *_bannerSourceListener;
    SBWindowLevelAssertionManager *_windowLevelAssertionManager;
    NSMapTable *_windowScenesToPanGestures;
    NSMapTable *_windowScenesToZStackParticipants;
    NSMapTable *_windowScenesToPhysicalButtonAssistants;
    NSMutableArray *_gesturePriorityAssertions;
    NSMapTable *_gesturePriorityAssertionsToWindowScenes;
    NSMapTable *_presentablesToGesturePriorityAssertions;
    NSMapTable *_windowScenesToPresenterVisibilityGesturePriorityAssertions;
    NSHashTable *_suppressionAssertions;
    NSHashTable *_transitionObservers;
    NSMutableSet *_clientSuppressionAssertions;
    id<BSInvalidatable> _systemStatusBarAssertion;
    id<BSInvalidatable> _appsStatusBarAssertion;
    NSMutableSet *_statusBarAssertionReasons;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _additionalEdgeInsets;
    SBPlatterHomeGestureManager *_platterHomeGestureManager;
    NSMapTable *_presentableHomeGestureParticipantsToGesturePriorityAssertions;
}

@property (weak, nonatomic) id<SBPresentableIntercepting> presentableInterceptor;
@property (readonly, nonatomic, getter=isDisplayingBannerInAnyWindowScene) BOOL displayingBannerInAnyWindowScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_defaultAuthorizedBundleIDs;

- (void)zStackParticipantDidChange:(id)a0;
- (void)ambientPresentationController:(id)a0 willUpdatePresented:(BOOL)a1;
- (id)userInterfaceStyleTransitionAnimationSettingsForPresentable:(id)a0 forTransitionToStyle:(long long)a1;
- (void)bannerSourceListener:(id)a0 didUpdateInitialSceneSettingsWithParameters:(id)a1;
- (void)bannerSourceListener:(id)a0 presentationSize:(out struct CGSize { double x0; double x1; } *)a1 containerSize:(out struct CGSize { double x0; double x1; } *)a2 error:(id *)a3;
- (id)bannerWindowInWindowScene:(id)a0;
- (id)_acquireGestureRecognizerPriorityAssertionWithPriority:(long long)a0 windowScene:(id)a1 reason:(id)a2;
- (id)_bannerWindowForWindowScene:(id)a0;
- (id)init;
- (void)physicalButtonZStackPolicyAssistantDidChange:(id)a0;
- (void)removeTransitionObserver:(id)a0;
- (void)_updatePolicyAssistantForWindowScene:(id)a0;
- (id)_zStackPolicyAssistantForWindowScene:(id)a0;
- (id)acquireGestureRecognizerPriorityAssertionForPresentable:(id)a0 priority:(long long)a1 reason:(id)a2;
- (void)platterHomeGestureManager:(id)a0 participantOwningHomeGestureDidChange:(id)a1;
- (BOOL)isDisplayingFullScreenBannerInWindowScene:(id)a0;
- (void)_setWindowScene:(id)a0 forGestureRecognizerPriorityAssertion:(id)a1;
- (id)revokePresentablesWithIdentification:(id)a0 reason:(id)a1 options:(unsigned long long)a2 animated:(BOOL)a3 userInfo:(id)a4 error:(out id *)a5;
- (void)presenter:(id)a0 willDismissPresentable:(id)a1 withTransitionCoordinator:(id)a2 userInfo:(id)a3;
- (id)bannerSourceListener:(id)a0 newBannerSourceListenerPresentableForBannerSpecification:(id)a1 serviceDomain:(id)a2 scene:(id)a3 readyCompletion:(id /* block */)a4;
- (id)_platterHomeGestureManager;
- (BOOL)handleVoiceCommandButtonPress;
- (void)_enumerateObserversRespondingToSelector:(SEL)a0 usingBlock:(id /* block */)a1;
- (void)_unregisterHomeGestureContextForPresentable:(id)a0;
- (id)_statusBarAssertionReasonForPresentable:(id)a0;
- (BOOL)handleHomeButtonLongPress;
- (void)presenter:(id)a0 presentable:(id)a1 willTransitionToSize:(struct CGSize { double x0; double x1; })a2 withTransitionCoordinator:(id)a3;
- (BOOL)_handleButtonEventWithTest:(id /* block */)a0 handler:(id /* block */)a1;
- (void)addTransitionObserver:(id)a0;
- (void)_invalidatePresenterVisibilityGestureRecognizerPriorityAssertionForWindowScene:(id)a0;
- (BOOL)pointInsideBanner:(struct CGPoint { double x0; double x1; })a0 inWindowScene:(id)a1;
- (void)_hideStatusBarIfNecessaryForPresentable:(id)a0;
- (id)_bannerWindowForWindowScene:(id)a0 creatingIfNecessary:(BOOL)a1;
- (BOOL)bannerSourceListener:(id)a0 requestsPostingPresentable:(id)a1 options:(unsigned long long)a2 userInfo:(id)a3 error:(id *)a4;
- (BOOL)handleVolumeUpButtonPress;
- (id)_zStackParticipantForAssistant:(id)a0;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (void)assistantWillAppear:(id)a0 windowScene:(id)a1;
- (void)_systemApertureInsetsDidChange:(id)a0;
- (void)_revealStatusBarIfNecessaryForPresentable:(id)a0;
- (BOOL)bannerSourceListenerShouldEnablePresentableContextInterface:(id)a0;
- (id)_homeGestureContextForPresentable:(id)a0 windowScene:(id)a1;
- (id)panGestureRecognizerForPresenter:(id)a0;
- (id)_layoutDescriptionWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inWindowScene:(id)a1;
- (id)revokePresentablesWithIdentification:(id)a0 reason:(id)a1 options:(unsigned long long)a2 userInfo:(id)a3 error:(out id *)a4;
- (void)presenterRequestsVisibility:(id)a0;
- (long long)platterHomeGestureManager:(id)a0 zStackParticipantIdentifierForParticipant:(id)a1;
- (void)presenterRelinquishesVisibility:(id)a0;
- (BOOL)bannerPanGestureRecognizer:(id)a0 shouldCancelSystemDragGestureWithTouches:(id)a1 event:(id)a2;
- (id)platterHomeGestureManager:(id)a0 windowForParticipant:(id)a1;
- (BOOL)isDisplayingBannerInWindowScene:(id)a0;
- (void)presenter:(id)a0 willTransitionToSize:(struct CGSize { double x0; double x1; })a1 withTransitionCoordinator:(id)a2;
- (void)_acquirePresenterVisibilityGestureRecognizerPriorityAssertionForWindowScene:(id)a0;
- (BOOL)handleLockButtonPress;
- (struct CGPoint { double x0; double x1; })presenter:(id)a0 gestureRecognizer:(id)a1 locationForTouch:(id)a2 inView:(id)a3;
- (id)_panGestureInWindowScene:(id)a0;
- (id)bannerSourceListener:(id)a0 layoutDescriptionWithError:(id *)a1;
- (id)_contentViewControllerForWindowScene:(id)a0;
- (BOOL)bannerPanGestureRecognizer:(id)a0 shouldDisableTouchCancellationForTouch:(id)a1 event:(id)a2;
- (id)windowSceneForPresentable:(id)a0;
- (id)newBannerControllerForWindowScene:(id)a0;
- (id)_presenterForPresentable:(id)a0;
- (BOOL)_isPresentableNotice:(id)a0;
- (id)_windowForPresenter:(id)a0;
- (id)acquireWindowLevelAssertionWithPriority:(long long)a0 windowLevel:(double)a1 windowScene:(id)a2 reason:(id)a3;
- (void)cancelSystemDragForPresentable:(id)a0;
- (BOOL)bannerSourceListener:(id)a0 recommendsSuspending:(BOOL)a1 forReason:(id)a2 revokingCurrent:(BOOL)a3 error:(id *)a4;
- (void)dismissAllBannersInWindowScene:(id)a0 animated:(BOOL)a1 reason:(id)a2;
- (void)registerAuthority:(id)a0 forRequesterIdentifier:(id)a1;
- (double)presenterMinimumPreferredTopEdgeInset:(id)a0;
- (id)_panGestureInWindowScene:(id)a0 creatingIfNecessary:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)postPresentable:(id)a0 withOptions:(unsigned long long)a1 userInfo:(id)a2 error:(out id *)a3;
- (struct CGPoint { double x0; double x1; })presenter:(id)a0 gestureRecognizer:(id)a1 locationForEvent:(id)a2 inView:(id)a3;
- (id)platterHomeGestureManager:(id)a0 gestureRecognizerPriorityAssertionForParticipant:(id)a1 reason:(id)a2;
- (id)_bannerControllerForWindowScene:(id)a0;
- (BOOL)handleHomeButtonDoublePress;
- (id)_windowSceneForPresenter:(id)a0;
- (void)windowLevelAssertionManager:(id)a0 didUpdateAssertionsForWindowScene:(id)a1;
- (id)_zStackParticipantForWindowScene:(id)a0;
- (BOOL)handleVolumeDownButtonPress;
- (void)_updateGesturePriorityForGestureRecognizerInWindowScene:(id)a0;
- (id)acquireBannerSuppressionAssertionForReason:(id)a0;
- (struct CGPoint { double x0; double x1; })presenter:(id)a0 gestureRecognizer:(id)a1 translationInView:(id)a2;
- (BOOL)_isPresentableHUD:(id)a0;
- (id)_presenterForWindowScene:(id)a0;
- (void)presenter:(id)a0 willPresentPresentable:(id)a1 withTransitionCoordinator:(id)a2 userInfo:(id)a3;
- (id)_windowSceneForBannerController:(id)a0;
- (BOOL)_shouldHideStatusBarForPresentable:(id)a0;
- (id)bannerSourceListener:(id)a0 sceneSpecificationForBannerSceneWithIdentifier:(id)a1 forProcess:(id)a2 userInfo:(id)a3;
- (void)_updateZStackPolicyAssistantForWindowScene:(id)a0 reasonSuffix:(id)a1 transitionCoordinator:(id)a2;
- (void)dismissAllBannersInAllWindowScenesAnimated:(BOOL)a0 reason:(id)a1;
- (BOOL)handleHeadsetButtonPress:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })presenter:(id)a0 gestureRecognizer:(id)a1 velocityInView:(id)a2;
- (id)_zStackPolicyAssistantForParticipant:(id)a0;
- (id)layoutManagerInWindowScene:(id)a0;
- (id)platterHomeGestureManager:(id)a0 orderedParticipants:(id)a1;
- (BOOL)handleHomeButtonPress;
- (void)_updateWindowLevelForScene:(id)a0;
- (void)setSuspended:(BOOL)a0 forReason:(id)a1;
- (id)bannerSourceListener:(id)a0 requestsRevokingPresentablesWithIdentification:(id)a1 reason:(id)a2 animated:(BOOL)a3 userInfo:(id)a4 error:(id *)a5;

@end
