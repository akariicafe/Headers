@class NSString, SBCoverSheetPresentationManager, SBBacklightController, SBAlertItemsController, SBLockScreenManager, SBScreenWakeAnimationController, NSDictionary, SBAlwaysOnSettings, SBScreenSleepTransitionWindow, SBWindowScene;
@protocol SBFAuthenticationStatusProvider, BLSHBacklightSceneHostEnvironment, SBFAuthenticationAssertionProviding;

@interface SBScreenSleepCoordinator : NSObject <SBScreenWakeAnimationControllerDelegate> {
    SBScreenWakeAnimationController *_screenWakeAnimationController;
    SBLockScreenManager *_lockScreenManager;
    SBBacklightController *_backlightController;
    SBCoverSheetPresentationManager *_coverSheetPresentationManager;
    id<SBFAuthenticationStatusProvider> _authenticationStatusProvider;
    id<SBFAuthenticationAssertionProviding> _authenticationAssertionProvider;
    SBAlertItemsController *_alertItemsController;
    SBWindowScene *_windowScene;
    BOOL _didLock;
    int _lastLockSource;
    NSDictionary *_lastLockOptions;
    unsigned long long _transitionGeneration;
    SBAlwaysOnSettings *_alwaysOnSettings;
    SBScreenSleepTransitionWindow *_transitionWindow;
}

@property (readonly, nonatomic) id<BLSHBacklightSceneHostEnvironment> backlightSceneHostEnvironment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sleepAndLockUIFromSource:(int)a0 lockOptions:(id)a1 completion:(id /* block */)a2;
- (BOOL)_shouldPresentAmbientOnSleepAndLock;
- (void)sleepAndLockUIFromSource:(int)a0 completion:(id /* block */)a1;
- (id)_ambientPresentationController;
- (id)initWithScreenWakeAnimationController:(id)a0 lockScreenManager:(id)a1 backlightController:(id)a2 coverSheetPresentationManager:(id)a3 authenticationStatusProvider:(id)a4 authenticationAssertionProvider:(id)a5 alertItemsController:(id)a6 windowScene:(id)a7;
- (void)_performLockAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (void)transitionToVisualState:(id)a0 fromVisualState:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)_setTransitionWindowVisible:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_performLock;
- (long long)targetBacklightStateForSource:(long long)a0 isWake:(BOOL)a1;

@end
