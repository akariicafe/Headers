@class NSString, NSMapTable, NSObject, BSServiceConnection;
@protocol OS_dispatch_queue;

@interface BLSXPCBacklightProxy : NSObject <BLSBacklightProxy, BLSXPCBacklightProxyClientInterface, BSInvalidatable> {
    NSMapTable *_lock_observers;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BSServiceConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    int _lock_observingDidCompleteUpdateToStateCount;
    int _lock_observingEventsArrayCount;
    int _lock_observingDidChangeAlwaysOnEnabledCount;
    int _lock_observingActivatingWithEventCount;
    int _lock_observingDeactivatingWithEventCount;
    int _lock_observingPerformingEventCount;
    long long _lock_backlightState;
    BOOL _lock_isBacklightStateCached;
    BOOL _lock_isAlwaysOnEnabled;
    BOOL _lock_isAlwaysOnEnabledCached;
    BOOL _lock_deviceSupportsAlwaysOn;
    BOOL _lock_deviceSupportsAlwaysOnCached;
    BOOL _lock_invalidated;
}

@property (readonly, nonatomic) long long backlightState;
@property (readonly, nonatomic) long long flipbookState;
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;
@property (readonly, nonatomic, getter=isAlwaysOnEnabled) BOOL alwaysOnEnabled;
@property (readonly, nonatomic) BOOL deviceSupportsAlwaysOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)performChangeRequest:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (oneway void)didChangeAlwaysOnEnabled:(id)a0;
- (oneway void)didCompleteUpdateToState:(id)a0 forEvents:(id)a1 abortedEvents:(id)a2;
- (oneway void)performingEvent:(id)a0;

@end
