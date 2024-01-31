@class SBVolumeHardwareButton, SBPressGestureRecognizer, SBHardwareButtonGestureParameters, NSString, SBHardwareButtonCoordinator, SBLockHardwareButtonActions, SBLongPressGestureRecognizer, SBHomeHardwareButton, SBClickGestureRecognizer, UIGestureRecognizer;
@protocol BSInvalidatable;

@interface SBLockHardwareButton : SBHardwareButtonGestureParametersProviderBase <UIGestureRecognizerDelegate, SBHardwareButtonGestureParametersObserver, SBPressPrecedenceArbiter, SBHardwareButtonColluding> {
    unsigned long long _aggdStartTime;
    double _lastPressDownTime;
}

@property (retain, nonatomic) SBLockHardwareButtonActions *buttonActions;
@property (retain, nonatomic) SBHardwareButtonGestureParameters *buttonGestureParameters;
@property (retain, nonatomic) SBPressGestureRecognizer *buttonDownGestureRecognizer;
@property (retain, nonatomic) SBClickGestureRecognizer *singlePressGestureRecognizer;
@property (retain, nonatomic) SBLongPressGestureRecognizer *longPressGestureRecognizer;
@property (retain, nonatomic) SBClickGestureRecognizer *doublePressGestureRecognizer;
@property (retain, nonatomic) SBClickGestureRecognizer *triplePressGestureRecognizer;
@property (retain, nonatomic) SBClickGestureRecognizer *quadruplePressGestureRecognizer;
@property (retain, nonatomic) SBLongPressGestureRecognizer *terminalLockLongPressGestureRecognizer;
@property (weak, nonatomic) UIGestureRecognizer *screenshotGestureRecognizer;
@property (weak, nonatomic) SBLongPressGestureRecognizer *shutdownGestureRecognizer;
@property (weak, nonatomic) SBHomeHardwareButton *homeHardwareButton;
@property (weak, nonatomic) SBVolumeHardwareButton *volumeHardwareButton;
@property (retain, nonatomic) id<BSInvalidatable> buttonActiveAssertion;
@property (nonatomic) long long homeButtonType;
@property (nonatomic) unsigned long long configuredMaximumPressCount;
@property (nonatomic) unsigned long long currentPressCount;
@property (readonly, nonatomic) BOOL isButtonDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SBHardwareButtonCoordinator *hardwareButtonCoordinator;

- (void)_gestureRecognizerFailed:(id)a0;
- (void)triplePress:(id)a0;
- (BOOL)_shouldRunActions;
- (void)cancelLongPress;
- (void)provider:(id)a0 didUpdateButtonGestureParameters:(id)a1;
- (void)cancelHardwareButtonPress;
- (id)hardwareButtonIdentifier;
- (BOOL)reverseFadeOutIfNeeded;
- (void)terminalLockLongPress:(id)a0;
- (void)_cancelGestureRecognizer:(id)a0;
- (void)longPress:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithScreenshotGestureRecognizer:(id)a0 shutdownGestureRecognizer:(id)a1 proximitySensorManager:(id)a2 homeHardwareButton:(id)a3 volumeHardwareButton:(id)a4 buttonActions:(id)a5 homeButtonType:(long long)a6 createGestures:(BOOL)a7;
- (void)quadruplePress:(id)a0;
- (id)initWithScreenshotGestureRecognizer:(id)a0 shutdownGestureRecognizer:(id)a1 proximitySensorManager:(id)a2 homeHardwareButton:(id)a3 volumeHardwareButton:(id)a4 homeButtonType:(long long)a5;
- (id)preemptablePressGestureRecognizers;
- (void)_createGestureRecognizers;
- (void)singlePress:(id)a0;
- (id)hardwareButtonGestureParameters;
- (void).cxx_destruct;
- (void)forceResetSequenceDidBegin;
- (void)screenshotRecognizerDidRecognize:(id)a0;
- (void)_updatePressCountForDownEvent;
- (void)_reportAggdLoggingForButtonEventIsDownEvent:(BOOL)a0;
- (void)doublePress:(id)a0;
- (void)_reconfigureButtonGestureRecognizers;
- (void)_cancelLongPressRecognizer:(id)a0;
- (void)buttonDown:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;

@end
