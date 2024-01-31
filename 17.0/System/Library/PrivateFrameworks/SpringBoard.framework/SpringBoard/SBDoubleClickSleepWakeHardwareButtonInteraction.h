@class SBProximitySensorManager;
@protocol BSInvalidatable;

@interface SBDoubleClickSleepWakeHardwareButtonInteraction : SBSleepWakeHardwareButtonInteraction

@property (retain, nonatomic) id<BSInvalidatable> proxLockAssertion;
@property (retain, nonatomic) SBProximitySensorManager *proximitySensorManager;

- (void)_resumeProxForReason:(id)a0;
- (void)observeSinglePressDidFail;
- (void)_performWake;
- (void)_resumeProxAfterMultiplePressIntervalForReason:(id)a0;
- (void)_suspendProx;
- (BOOL)consumeInitialPressUp;
- (BOOL)consumeInitialPressDown;
- (void)observeFinalPressUp;
- (void)_cancelPreviousResumeProxRequests;
- (BOOL)consumeSecondPressDown;
- (void).cxx_destruct;
- (id)initWithProximitySensorManager:(id)a0;
- (void)_performSleep;

@end
