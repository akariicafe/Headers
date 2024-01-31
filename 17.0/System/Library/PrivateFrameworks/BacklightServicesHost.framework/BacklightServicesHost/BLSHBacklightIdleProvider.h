@class NSString;
@protocol BLSHBacklightIdleProviderDelegate, BLSHUserIdleProviding, BLSBacklightChangeRequestable, BLSHBacklightHostObservable;

@interface BLSHBacklightIdleProvider : NSObject <BLSHBacklightHostObserving, BLSHUserIdleProvidingDelegate, BSInvalidatable> {
    id<BLSHUserIdleProviding> _lock_idleProvider;
    id<BLSHBacklightHostObservable, BLSBacklightChangeRequestable> _backlightHost;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    double _lock_idleTimeout;
    double _lock_nonInteractiveIdleTimeout;
    long long _lock_previousBacklightState;
    BOOL _lock_started;
    BOOL _lock_active;
    BOOL _lock_suspended;
    BOOL _lock_suppressed;
    BOOL _lock_idle;
    BOOL _lock_pendingIdleInactiveRequest;
    BOOL _lock_didStartTransitionToNewState;
    BOOL _lock_userActivityOccured;
    BOOL _lock_invalidated;
}

@property (nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) id<BLSHBacklightIdleProviderDelegate> delegate;
@property (nonatomic) double idleTimeout;
@property (nonatomic) double nonInteractiveIdleTimeout;
@property (readonly, nonatomic, getter=isIdle) BOOL idle;
@property (readonly, nonatomic, getter=hasUserActivityOccured) BOOL userActivityOccured;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedProvider;
+ (id)createSharedProviderWithLocalAssertionService:(id)a0;

- (void)setSuspended:(BOOL)a0;
- (void)reset;
- (void)dealloc;
- (void)start;
- (void)backlightHost:(id)a0 willTransitionToState:(long long)a1 forEvent:(id)a2;
- (void)invalidate;
- (void).cxx_destruct;
- (void)backlight:(id)a0 didCompleteUpdateToState:(long long)a1 forEvents:(id)a2 abortedEvents:(id)a3;
- (void)idleProviderDidIdle:(id)a0;
- (void)idleProviderDidUnidle:(id)a0;
- (id)initWithLocalAssertionService:(id)a0 idleProvider:(id)a1 backlightHost:(id)a2;
- (void)signalUserActivityOccurred;

@end
