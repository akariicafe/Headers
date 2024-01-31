@class NSString, BLSXPCBacklightProxyObserverMask, RBSProcessMonitor;
@protocol BLSXPCBacklightProxyClientInterface, BLSBacklightProxy;

@interface BLSHXPCBacklightProxyHost : NSObject <BLSHBacklightHostObserving, BLSXPCBacklightProxyHostInterface, BSInvalidatable> {
    id<BLSBacklightProxy> _localBacklightProxy;
    id<BLSXPCBacklightProxyClientInterface> _lock_observingClient;
    RBSProcessMonitor *_processMonitor;
    BLSXPCBacklightProxyObserverMask *_lock_observingMask;
    int _clientPid;
    unsigned int _entitlements;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_clientIsTaskScheduled;
    BOOL _lock_stateIsStale;
    BOOL _lock_valid;
    BOOL _lock_observingDidCompleteUpdateToState;
    BOOL _lock_observingDidChangeAlwaysOnEnabled;
    BOOL _lock_observingActivatingWithEvent;
    BOOL _lock_observingDeactivatingWithEvent;
    BOOL _lock_observingPerformingEvent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isAlwaysOnEnabled;
- (void)dealloc;
- (id)performChangeRequest:(id)a0;
- (void)invalidate;
- (BOOL)isTransitioning;
- (void).cxx_destruct;
- (BOOL)deviceSupportsAlwaysOn;
- (void)backlight:(id)a0 didCompleteUpdateToState:(long long)a1 forEvents:(id)a2 abortedEvents:(id)a3;
- (void)backlight:(id)a0 activatingWithEvent:(id)a1;
- (void)backlight:(id)a0 deactivatingWithEvent:(id)a1;
- (void)backlight:(id)a0 didChangeAlwaysOnEnabled:(BOOL)a1;
- (void)backlight:(id)a0 performingEvent:(id)a1;
- (id)getBacklightState;
- (id)getFlipbookState;
- (oneway void)nowObservingWithMask:(id)a0 completion:(id /* block */)a1;
- (BOOL)observesActivation;
- (BOOL)observesDeactivation;
- (BOOL)observesPerformingAllEvents;
- (id)initWithLocalBacklightProxy:(id)a0 peer:(id)a1;

@end
