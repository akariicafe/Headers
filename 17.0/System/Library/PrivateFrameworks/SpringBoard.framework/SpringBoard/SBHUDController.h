@class UIWindow, SBFZStackParticipant, _SBHUDHostViewController, NSString, NSCountedSet, SBWindowScene, SBHUDSettings;
@protocol BSInvalidatable;

@interface SBHUDController : NSObject <_SBHUDHostViewControllerDelegate, SBFZStackParticipantDelegate, PTSettingsKeyObserver, BSDescriptionProviding, UIViewControllerTransitioningDelegate> {
    NSCountedSet *_hudHiddenAssertions;
    id<BSInvalidatable> _stateCaptureHandle;
}

@property (readonly, nonatomic) SBFZStackParticipant *zStackParticipant;
@property (readonly, nonatomic) UIWindow *HUDWindow;
@property (readonly, nonatomic) _SBHUDHostViewController *hudViewController;
@property (readonly, nonatomic) SBHUDSettings *settings;
@property (readonly, nonatomic) SBWindowScene *windowScene;
@property (readonly, nonatomic) BOOL anyHUDsVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_defaultCrossfadeAnimatorForHUDController:(id)a0;

- (void)_setupStateCapture;
- (void)zStackParticipantDidChange:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (void)_hideWindowIfPossible;
- (id)init;
- (void)_tearDown;
- (void)hudViewController:(id)a0 didPresentHUD:(id)a1;
- (void)dealloc;
- (void)hudViewController:(id)a0 willDismissHUD:(id)a1;
- (void)_finishedTransitionForHUD:(id)a0 intendedState:(long long)a1 finalState:(long long)a2;
- (void)_notificationFiredToDismissHUDs:(id)a0;
- (id)presentedHUDs;
- (id)succinctDescriptionBuilder;
- (void)hudViewController:(id)a0 didDismissHUD:(id)a1;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (id)knownHUDControllerForIdentifier:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_dismissHUD:(id)a0 animated:(BOOL)a1;
- (void)hudViewController:(id)a0 willPresentHUD:(id)a1;
- (void)_presentHUD:(id)a0 animated:(BOOL)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)HUDSessionForViewController:(id)a0 identifier:(id)a1;
- (id)acquireHUDHiddenAssertionForIdentifier:(id)a0 withReason:(id)a1;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)dismissHUDs:(BOOL)a0;
- (id)knownHUDs;
- (void).cxx_destruct;
- (void)_createHUDWindowIfNeeded;
- (id)succinctDescription;
- (void)windowSceneDidConnect:(id)a0;
- (id)presentedHUDControllerForIdentifier:(id)a0;
- (id)presentingHUDs;

@end
