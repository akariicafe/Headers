@class NSString, BSAbsoluteMachTimer, BLSHWatchdogProvider;
@protocol BLSHWatchdogDelegate;

@interface BSLHWatchdogTimer : NSObject <SWSystemSleepObserver, BLSHWatchdogTiming> {
    BSAbsoluteMachTimer *_timer;
    NSString *_explanation;
    id<BLSHWatchdogDelegate> _delegate;
    BLSHWatchdogProvider *_provider;
    double _lock_timeout;
    double _lock_watchdogStart;
    BOOL _lock_sleepImminentSinceScheduled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_invalidated;
    unsigned long long _lock_invalidationReason;
}

@property (nonatomic, getter=hasSleepBeenImminentSinceScheduled) BOOL sleepImminentSinceScheduled;
@property (readonly, nonatomic, getter=wasSleepImminentWhenScheduled) BOOL sleepImminentWhenScheduled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, nonatomic) unsigned long long invalidationReason;
@property (readonly, copy, nonatomic) NSString *explanation;

- (void)systemSleepMonitorSleepRequestAborted:(id)a0;
- (void)invalidate:(unsigned long long)a0;
- (void)systemSleepMonitorDidWakeFromSleep:(id)a0;
- (void)dealloc;
- (id)initWithExplanation:(id)a0 delegate:(id)a1 provider:(id)a2;
- (void)systemSleepMonitorWillWakeFromSleep:(id)a0;
- (void).cxx_destruct;
- (void)scheduleWithTimeout:(double)a0;
- (void)timerFired;

@end
