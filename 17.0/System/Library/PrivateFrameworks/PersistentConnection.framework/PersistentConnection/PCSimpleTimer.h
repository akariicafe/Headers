@class NSString, PCDispatchTimer, NSDate, NSRunLoop, NSObject;
@protocol OS_dispatch_queue;

@interface PCSimpleTimer : NSObject {
    double _fireTime;
    double _startTime;
    double _lastUpdateTime;
    double _earlyFireDelta;
    BOOL _triggerOnGMTChange;
    NSDate *_scheduledWakeDate;
    NSString *_serviceIdentifier;
    id _target;
    SEL _selector;
    id _userInfo;
    BOOL _userVisible;
    PCDispatchTimer *_preventSleepTimer;
    PCDispatchTimer *_fireTimer;
    BOOL _sleepIsImminent;
    unsigned int _powerAssertionID;
    id _timeChangeSource;
    NSRunLoop *_timerRunLoop;
    NSString *_timerMode;
    int _significantTimeChangeToken;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) BOOL disableSystemWaking;
@property (nonatomic, getter=isUserVisible) BOOL userVisible;

+ (id)lastSystemWakeDate;
+ (double)currentMachTimeInterval;

- (void)scheduleInRunLoop:(id)a0 inMode:(id)a1;
- (void)_invalidateAllowAsync:(BOOL)a0;
- (id)_getTimerMode;
- (void)dealloc;
- (void)_performBlockOnQueue:(id /* block */)a0;
- (id)userInfo;
- (void)_updateTimers;
- (void)scheduleInRunLoop:(id)a0;
- (BOOL)firingIsImminent;
- (void)_powerNotificationSleepIsNotImminent;
- (void)invalidate;
- (id)_getTimerRunLoop;
- (void)_preventSleepFired;
- (id)initWithTimeInterval:(double)a0 serviceIdentifier:(id)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4;
- (void)_fireTimerFired;
- (void)_significantTimeChange;
- (BOOL)isValid;
- (id)initWithAbsoluteTime:(double)a0 serviceIdentifier:(id)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4 triggerOnGMTChange:(BOOL)a5;
- (void).cxx_destruct;
- (void)_scheduleTimer;
- (id)debugDescription;
- (void)updateFireTime:(double)a0 triggerOnGMTChange:(BOOL)a1;
- (void)_setSignificantTimeChangeMonitoringEnabled:(BOOL)a0;
- (void)_setPowerMonitoringEnabled:(BOOL)a0;
- (void)_powerNotificationSleepIsImminent;
- (id)initWithFireDate:(id)a0 serviceIdentifier:(id)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4;
- (void)scheduleInQueue:(id)a0;

@end
