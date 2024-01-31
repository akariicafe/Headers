@class SBLockStateAggregator, NSString, SBBacklightController, CMPocketStateManager, SBLockScreenManager;

@interface SBNCScreenController : NSObject <CMPocketStateDelegate, SBIdleTimerResetSource>

@property (retain, nonatomic) SBBacklightController *backlightController;
@property (retain, nonatomic) SBLockScreenManager *lockScreenManager;
@property (retain, nonatomic) SBLockStateAggregator *lockStateAggregator;
@property (retain, nonatomic) CMPocketStateManager *pocketStateManager;
@property (nonatomic) BOOL turnOnScreenForOutOfPocketEvent;
@property (copy, nonatomic) NSString *powerAssertionName;
@property (nonatomic) unsigned int powerAssertionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)_isDeviceUILocked;
- (void)_releasePowerAssertion;
- (void)turnOnScreenIfPossibleForNotificationRequest:(id)a0;
- (void)_turnOnScreenForOutOfPocketEventIfNecessary;
- (BOOL)canTurnOnScreenForNotificationRequest:(id)a0;
- (void)_turnOnScreenForPocketMode;
- (void)_turnOnScreen;
- (id)initWithBackLightController:(id)a0 lockScreenManager:(id)a1 lockStateAggregator:(id)a2;
- (void)resetAutomaticLockStateForNotificationRequest:(id)a0;
- (void)_turnOnScreenForOutOfPocketEventBeforeTimeInterval:(double)a0;
- (void)turnOnScreenForNotificationRequest:(id)a0;
- (void).cxx_destruct;
- (void)_createOrResetPowerAssertionWithTimeout:(double)a0;
- (void)_cancelTurnOnScreenForOutOfPocketEvents;
- (void)pocketStateManager:(id)a0 didUpdateState:(long long)a1;

@end
