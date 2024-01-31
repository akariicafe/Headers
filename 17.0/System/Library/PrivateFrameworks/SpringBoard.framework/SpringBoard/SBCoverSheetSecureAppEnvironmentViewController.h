@class SBFZStackParticipant, NSString, SBDashBoardHostedAppViewController, SBTraitsSceneParticipantDelegate, TRAParticipant, SBSystemApertureZStackPolicyAssistant;
@protocol BSInvalidatable, SBCoverSheetSecureAppEnvironmentViewControllerDelegate;

@interface SBCoverSheetSecureAppEnvironmentViewController : UIViewController <SBSystemApertureZStackPolicyAssistantDelegate, BLSBacklightStateObserving, SBFZStackParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBSecureAppObserver, SBTraitsParticipantDelegate, SBTraitsSceneSettingsUpdater, CSApplicationHosting, SBCoverSheetSlidingViewControllerContentViewController> {
    id<BSInvalidatable> _biometricMatchingAssertion;
    unsigned long long _currentOrientationMask;
    TRAParticipant *_secureAppTraitsParticipant;
    SBTraitsSceneParticipantDelegate *_secureAppTraitsParticipantDelegateHelper;
    SBSystemApertureZStackPolicyAssistant *_systemApertureZStackPolicyAssistant;
}

@property (readonly, nonatomic) SBDashBoardHostedAppViewController *secureAppViewController;
@property (weak, nonatomic) id<SBCoverSheetSecureAppEnvironmentViewControllerDelegate> delegate;
@property (retain, nonatomic) SBFZStackParticipant *zStackParticipant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL contentOccludesBackground;

- (void)zStackParticipantDidChange:(id)a0;
- (void)updatePreferencesForParticipant:(id)a0 updater:(id)a1;
- (id)participantAssociatedWindows:(id)a0;
- (void)conformsToSBApplicationHosting;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)homeGrabberViewDidReceiveClick:(id)a0;
- (void)systemApertureZStackPolicyAssistantDidChange:(id)a0;
- (void)appendDescriptionForParticipant:(id)a0 withBuilder:(id)a1 multilinePrefix:(id)a2;
- (void)secureAppOfTypeDidBegin:(unsigned long long)a0;
- (id)hostedAppSceneHandles;
- (BOOL)handlesRotationIndependentOfCoverSheet;
- (BOOL)isHostingAnApp;
- (void)viewDidLoad;
- (id)hostedAppSceneHandle;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)a0;
- (void)updateOrientationSceneSettingsForParticipant:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)canHostAnApp;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)conformsToCSApplicationHosting;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)needsActuationForUpdateReasons:(long long)a0;
- (void)didChangeSettingsForParticipant:(id)a0 context:(id)a1;
- (id)traitsParticipantForSceneHandle:(id)a0;
- (id)participantAssociatedSceneIdentityTokens:(id)a0;
- (id)_traitsArbiter;
- (void)backlight:(id)a0 didChangeAlwaysOnEnabled:(BOOL)a1;
- (void)_acquireSecureAppTraitsParticipantIfNeeded;
- (void)_actuateTraitsParticipantResolution;
- (id)_currentSecureAppAction;
- (void)_invalidateTraitsParticipantAndDelegateHelper;
- (void)_updateIdleWarnModeForAlwaysOnEnabled:(BOOL)a0;
- (void)_updateSupportedOrientationsMaskForSecureAppAction;
- (void)_updateSystemApertureZStackPolicyAssistant;
- (void)conformsToSBCoverSheetSlidingViewControllerContentViewController;
- (id)initWithSecureAppViewController:(id)a0;
- (void)relinquishHiddenAssertionForHomeGrabber:(id)a0 animated:(BOOL)a1;
- (void)relinquishHomeGesture;
- (void)requestHomeGestureOwnership;
- (void)secureAppOfTypeDidTakeNewAssertion:(unsigned long long)a0;
- (void)takeHiddenAssertionForHomeGrabber:(id)a0 animated:(BOOL)a1;
- (void)updateHomeGrabberHiddenAssertion:(BOOL)a0;

@end
