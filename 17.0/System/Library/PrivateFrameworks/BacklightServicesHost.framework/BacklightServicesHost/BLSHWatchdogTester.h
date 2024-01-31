@class NSMapTable, BLSHWatchdogProvider;
@protocol BLSHWatchdogProviderDelegate;

@interface BLSHWatchdogTester : NSObject {
    NSMapTable *_testables;
    unsigned long long _lock_nextTimerID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BLSHWatchdogProvider *_watchdogProvider;
    id<BLSHWatchdogProviderDelegate> _watchdogProviderDelegate;
}

- (void).cxx_destruct;
- (id)_watchdogProvider;
- (void)_triggerTestWatchdog:(id)a0;
- (id)initWithWatchdogProviderDelegate:(id)a0 testables:(id)a1;

@end
