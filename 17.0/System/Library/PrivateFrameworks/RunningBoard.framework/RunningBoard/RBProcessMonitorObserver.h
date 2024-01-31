@class NSString, RBProcessMap, NSSet, NSMutableDictionary, RBSProcessStateDescriptor, RBSProcessHandle, RBProcess, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, RBProcessMonitoring, RBProcessMonitorObserverConnection;

@interface RBProcessMonitorObserver : NSObject <RBProcessMonitorObserving> {
    id<RBProcessMonitoring> _monitor;
    RBProcess *_process;
    id<RBProcessMonitorObserverConnection> _connection;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned int _qos;
    RBProcessMap *_pendingProcessState;
    NSMutableArray *_pendingExitEvents;
    NSSet *_pendingPreventLaunchPredicates;
    NSMutableDictionary *_configurations;
    RBSProcessStateDescriptor *_stateDescriptor;
    RBSProcessHandle *_lastMatchedHandle;
    BOOL _extantStateUpdate;
    BOOL _extantEventUpdate;
    BOOL _didClearState;
    double _lastSend;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;

- (void)removeConfigurationWithIdentifier:(unsigned long long)a0;
- (void)dealloc;
- (id)captureState;
- (void)_lock_rebuildConfiguration;
- (void)_lock_addAllConfiguredStatesToPending;
- (id)initWithMonitor:(id)a0 forProcess:(id)a1 connection:(id)a2;
- (void)addConfiguration:(id)a0;
- (void)invalidate;
- (void)_lock_sendPendingStateUpdates;
- (void)_lock_clearPendingNonterminalStates;
- (void)didResolvePreventLaunchPredicates:(id)a0;
- (void).cxx_destruct;
- (void)processMonitor:(id)a0 didChangeProcessStates:(id)a1;
- (void)didObserveProcessExit:(id)a0;
- (void)_lock_addConfigurationStatesToPending:(id)a0;
- (void)_checkForBadActorWithPendingStates:(id)a0;

@end
