@class BMSource, NSDate, _CDContextualKeyPath, NSObject;
@protocol OS_dispatch_source, _CDLocalContext;

@interface _DKDeviceActivityLevelMonitor : _DKMonitor {
    BMSource *_bmSource;
}

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL initialized;
@property (nonatomic) unsigned long long lastInUseStatus;
@property (nonatomic) unsigned long long currentInUseStatus;
@property (retain, nonatomic) NSDate *lastSetActiveDate;
@property (retain, nonatomic) id<_CDLocalContext> context;
@property (retain, nonatomic) _CDContextualKeyPath *lastUseDate;
@property (retain, nonatomic) _CDContextualKeyPath *inUseStatus;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *debounceTimer;
@property (nonatomic) unsigned long long userActivityNotificationHandle;
@property (nonatomic) int siriToken;
@property (nonatomic) BOOL limitsImposed;
@property (nonatomic) BOOL limitsInitialized;
@property (retain, nonatomic) _CDContextualKeyPath *keyPathForReducedPerfStateStatus;
@property (retain, nonatomic) _CDContextualKeyPath *keyPathForDeviceToppingOff;

+ (id)eventStream;
+ (void)initialize;
+ (BOOL)shouldMergeUnchangedEvents;
+ (id)entitlements;
+ (id)_eventWithState:(unsigned long long)a0;

- (void)dealloc;
- (void)start;
- (void)stop;
- (void)updatePerformanceThrottleStatusWithLevel:(unsigned long long)a0;
- (void)synchronouslyReflectCurrentValue;
- (void)handleUserActivity:(int)a0;
- (void).cxx_destruct;
- (void)updateActivityDateAndInUseState:(unsigned long long)a0;
- (void)setLastActivityDate:(id)a0;
- (void)updateActivityInUseState:(unsigned long long)a0;
- (void)deactivate;

@end
