@class SBApplication, NSString, SBSiriHardwareButtonInteraction, SBHardwareButtonService, SBWalletPreArmController, SBSleepWakeHardwareButtonInteraction, SOSManager, SBHardwareButtonGestureParameters, SBProximitySensorManager, SBAccessibilityHardwareButtonInteraction;
@protocol SBHardwareButtonGestureParametersProvider, SBHardwareButtonInteraction;

@interface SBLockHardwareButtonActions : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonGestureParametersObserver> {
    long long _homeButtonType;
    SBApplication *_lastLockButtonEventRecipient;
    SBProximitySensorManager *_proximitySensorManager;
    SBHardwareButtonService *_hardwareButtonService;
    SBWalletPreArmController *_walletPreArmController;
    SOSManager *_sosManager;
    SBHardwareButtonGestureParameters *_accessibilityGestureParameters;
    SBHardwareButtonGestureParameters *_siriGestureParameters;
    SBHardwareButtonGestureParameters *_proximitySensorGestureParameters;
    long long _sosTriggerMechanism;
}

@property (retain, nonatomic) SBSiriHardwareButtonInteraction *siriButtonInteraction;
@property (retain, nonatomic) SBAccessibilityHardwareButtonInteraction *accessibilityButtonInteraction;
@property (retain, nonatomic) SBSleepWakeHardwareButtonInteraction *sleepWakeButtonInteraction;
@property (retain, nonatomic) id<SBHardwareButtonInteraction, SBHardwareButtonGestureParametersProvider> proximitySensorButtonInteraction;
@property (readonly, nonatomic) BOOL isButtonDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performLongPressActions;
- (BOOL)_usesLockButtonForSiri;
- (void)performSinglePressDidFailActions;
- (void)performTriplePressActions;
- (void)performInitialButtonDownActions;
- (void)provider:(id)a0 didUpdateButtonGestureParameters:(id)a1;
- (BOOL)_usesLockButtonForSecureIntent;
- (BOOL)_sendButtonDownToRegisteredApp;
- (BOOL)reverseFadeOutIfNeeded;
- (void)performKeyboardShortcut;
- (void)performSOSActionsWithUUID:(id)a0 triggerMechanism:(long long)a1 completion:(id /* block */)a2;
- (id)initWithHomeButtonType:(long long)a0 proximitySensorManager:(id)a1;
- (void)performDoublePressActions;
- (void)performLongPressCancelledActions;
- (void)_sendButtonEventToApp:(id)a0 down:(BOOL)a1;
- (BOOL)disallowsDoublePressForReason:(id *)a0;
- (void)performForceResetSequenceBeganActions;
- (void)performInitialButtonUpActions;
- (BOOL)performButtonUpPreActions;
- (id)hardwareButtonGestureParameters;
- (void)performSOSGestureEndedActions;
- (void).cxx_destruct;
- (id)_foregroundAppRegisteredForLockButtonEvents;
- (void)_performSOSDidTriggerActions;
- (BOOL)_shouldWaitForDoublePress;
- (BOOL)_sendButtonUpToRegisteredApp;
- (BOOL)shouldBeginDoublePressGestureWhileObjectWithinProximity;
- (void)performSOSGestureBeganActions;
- (BOOL)disallowsTriplePressForReason:(id *)a0;
- (BOOL)_isSOSActive;
- (BOOL)disallowsLongPressForReason:(id *)a0;
- (void)performSecondButtonDownActions;
- (void)performFinalButtonUpActions;
- (void)performTerminalLockLongPressActions;
- (BOOL)disallowsSinglePressForReason:(id *)a0;
- (void)_showPowerDownTransientOverlayOnForceReset;
- (void)performSinglePressAction;
- (void)_registeredLockButtonAppsDidChange:(id)a0;

@end
