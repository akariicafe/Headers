@class NSMutableDictionary, SBLockHardwareButton, SBBacklightController, SBCombinationHardwareButtonActions, NSString, SBVolumeHardwareButton, SBProximitySensorManager, SBPressGestureRecognizer, SBSOSClawGestureObserver, SBSOSLockGestureObserver, SBHomeHardwareButton, SBClickGestureRecognizer, SBHardwareButtonCoordinator, SBLongPressGestureRecognizer;

@interface SBCombinationHardwareButton : NSObject <UIGestureRecognizerDelegate, SBHardwareButtonGestureParametersObserver, SBSOSLockGestureObserverDelegate, SBSOSClawGestureObserverDelegate, SBPressPrecedenceArbiter, SBHardwareButtonColluding> {
    NSMutableDictionary *_screenshotDisableAssertions;
    SBCombinationHardwareButtonActions *_buttonActions;
    SBClickGestureRecognizer *_screenshotGestureRecognizer;
    SBHomeHardwareButton *_homeHardwareButton;
    SBLockHardwareButton *_lockHardwareButton;
    SBVolumeHardwareButton *_volumeHardwareButton;
    SBProximitySensorManager *_proximitySensorManager;
    SBBacklightController *_backlightController;
    SBPressGestureRecognizer *_sosGestureRecognizer;
    SBSOSClawGestureObserver *_sosClawGestureObserver;
    SBSOSLockGestureObserver *_sosLockGestureObserver;
    SBLongPressGestureRecognizer *_shutdownGestureRecognizer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SBHardwareButtonCoordinator *hardwareButtonCoordinator;

- (void)sosClawAutoCallInteractiveStateChanged:(id)a0 interacting:(BOOL)a1;
- (void)_configureGestureRecognizers;
- (void)_sosTriggerMechanismDidChange;
- (void)dealloc;
- (void)screenshotGesture:(id)a0;
- (void)sosLockDidTriggerSOS:(id)a0 completion:(id /* block */)a1;
- (void)provider:(id)a0 didUpdateButtonGestureParameters:(id)a1;
- (void)cancelHardwareButtonPress;
- (id)hardwareButtonIdentifier;
- (void)shutdownGesture:(id)a0;
- (void)sosClawDidTriggerSOS:(id)a0 completion:(id /* block */)a1;
- (void)sosClawDidBecomeInactive:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithScreenshotGestureRecognizer:(id)a0 shutdownGestureRecognizer:(id)a1 homeHardwareButton:(id)a2 lockHardwareButton:(id)a3 volumeHardwareButton:(id)a4 proximitySensorManager:(id)a5 backlightController:(id)a6;
- (id)preemptablePressGestureRecognizers;
- (void)_configureSOSGestureBehaviors;
- (void)_setScreenshotDisabled:(BOOL)a0 forReason:(id)a1;
- (void)_backlightChanged:(id)a0;
- (void)sosLockTriggerDidBecomeInactive:(id)a0;
- (void)sosGesture:(id)a0;
- (void).cxx_destruct;
- (void)sosClawDidBecomeActive:(id)a0;
- (void)sosLockTriggerDidBecomeActive:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;

@end
