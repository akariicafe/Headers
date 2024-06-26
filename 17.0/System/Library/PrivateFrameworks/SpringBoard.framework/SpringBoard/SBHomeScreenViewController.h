@class UIView, SBUIController, _UILegibilitySettings, NSString, SBWindowSceneStatusBarSettingsAssertion, SBFZStackParticipant, NSMapTable, SBIconController, NSMutableSet, SBHIconManager, SBFloatingDockBehaviorAssertion, SBHomeScreenReturnToSpotlightPolicy;
@protocol BSInvalidatable;

@interface SBHomeScreenViewController : UIViewController <SBFloatingDockControllerObserver, SBFZStackParticipantDelegate, SBHModalLibraryPresentationContainerViewProviding> {
    NSMutableSet *_iconRotationPreventionReasons;
    BOOL _disableAnimationForNextIconRotation;
    SBWindowSceneStatusBarSettingsAssertion *_childOrPresentedStatusBarAssertion;
    NSMapTable *_appIconForceTouchControllerOrientationUpdateDeferralAssertions;
    NSMapTable *_appIconForceTouchControllerWindowLevelAssertions;
}

@property (readonly, weak, nonatomic) SBUIController *userInterfaceController;
@property (readonly, weak, nonatomic) SBIconController *iconController;
@property (readonly, weak, nonatomic) SBHIconManager *iconManager;
@property (retain, nonatomic) SBFloatingDockBehaviorAssertion *homeScreenFloatingDockAssertion;
@property (retain, nonatomic) SBFloatingDockBehaviorAssertion *widgetEditFloatingDockAssertion;
@property (retain, nonatomic) id<BSInvalidatable> widgetEditViewControllerOrientationUpdateDeferralAssertion;
@property (retain, nonatomic) SBFZStackParticipant *zStackParticipant;
@property (nonatomic, getter=isRotating) BOOL rotating;
@property (nonatomic, getter=hasPerformedInitialLayout) BOOL performedInitialLayout;
@property (readonly, nonatomic) SBHomeScreenReturnToSpotlightPolicy *returnToSpotlightPolicy;
@property (readonly, weak, nonatomic) UIView *iconContentView;
@property (nonatomic, getter=isIconContentHidden) BOOL iconContentHidden;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) BOOL homeScreenAutorotatesEvenWhenIconIsDragging;
@property (nonatomic) long long orientation;
@property (nonatomic) long long effectiveOrientation;
@property (nonatomic) unsigned long long allowedInterfaceOrientations;
@property (nonatomic) unsigned long long possibleInterfaceOrientations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_beginAppearanceTransitionForChildViewControllersToVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)zStackParticipantDidChange:(id)a0;
- (void)_endAppearanceTransitionForChildViewControllersToVisible:(BOOL)a0;
- (void)_relinquishForceTouchOrientationUpdateDeferralAssertionForIconView:(id)a0;
- (void)nudgeIconInterfaceOrientation:(long long)a0 duration:(double)a1;
- (id)containerViewForPresentingContextMenuForIconView:(id)a0;
- (void)disableAnimationForNextIconRotation;
- (BOOL)shouldAutorotate;
- (void)_acquireForceTouchOrientationUpdateDeferralAssertionForIconView:(id)a0;
- (void)_relinquishForceTouchWindowLevelAssertionForIconView:(id)a0;
- (void)_appIconForceTouchControllerDidDismissNotification:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)dealloc;
- (void)setLegibilitySettings:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)_appIconForceTouchControllerWillPresentNotification:(id)a0;
- (void)_widgetEditViewDidDisappearImplementation;
- (void)_performInitialLayoutWithOrientation:(long long)a0;
- (void)_dismissAllIconForceTouchControllersDidFire:(id)a0;
- (id)_homeScreenView;
- (void)_updateIconContentViewOrientationAndLayoutIfNeeded;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (void)floatingDockControllerDidRegister:(id)a0;
- (id)containerViewControllerForPresentingFromTodayViewControllerAllowingCoverSheet:(BOOL)a0;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_acquireForceTouchWindowLevelAssertionForIconView:(id)a0;
- (void)_animateTransitionToSize:(struct CGSize { double x0; double x1; })a0 andInterfaceOrientation:(long long)a1 withTransitionContext:(id)a2;
- (void)viewWillDisappear:(BOOL)a0;
- (id)_autorotationPreventionReasons;
- (void)setNeedsStatusBarAppearanceUpdate;
- (void)_widgetEditViewDidDisappear:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)_prepareForTransitionToSize:(struct CGSize { double x0; double x1; })a0 andInterfaceOrientation:(long long)a1 withTransitionCoordinator:(id)a2;
- (void)_acquireFloatingDockBehaviorAssertionIfNecessaryForFloatingDockController:(id)a0;
- (id)containerViewForModalLibraryPresenter:(id)a0;
- (void)_widgetEditViewWillAppear:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)legibilitySettings;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)setAllowIconRotation:(BOOL)a0 forReason:(id)a1;
- (void)_iconEditingDidChange:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_cleanupAfterTransitionToSize:(struct CGSize { double x0; double x1; })a0 fromInterfaceOrientation:(long long)a1 withTransitionContext:(id)a2;
- (id)_iconContentView;
- (id)initWithIconController:(id)a0 userInterfaceController:(id)a1;

@end
