@class NSString, RBProcessMap, RBLaunchManager, RBLaunchdJobManager, RBPrewarmManager, RBSystemState, NSMutableDictionary, RBProcessIndex, NSCountedSet;
@protocol RBJetsamPropertyManaging, RBBundlePropertiesManaging, RBHistoricalStatisticsMaintaining, RBProcessManagerDelegate, RBEntitlementManaging;

@interface RBProcessManager : NSObject <RBProcessManaging, RBStateCapturing, RBLaunchManagerDelegate> {
    RBLaunchdJobManager *_jobManager;
    id<RBBundlePropertiesManaging> _bundlePropertiesManager;
    id<RBEntitlementManaging> _entitlementManager;
    id<RBJetsamPropertyManaging> _jetsamPropertytManager;
    id<RBHistoricalStatisticsMaintaining> _historicalStatistics;
    RBPrewarmManager *_prewarmManager;
    RBLaunchManager *_launchManager;
    id<RBProcessManagerDelegate> _delegate;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pendingExitBlockLock;
    _Atomic unsigned long long _counter;
    RBProcessIndex *_processIndex;
    RBProcessIndex *_processGraveyard;
    RBSystemState *_systemState;
    RBProcessMap *_processState;
    NSMutableDictionary *_identityToPendingExitBlock;
    NSMutableDictionary *_identityToProcessLifecycleQueue;
    NSCountedSet *_lifecycleQueuesInUse;
    BOOL _systemPreventsIdleSleep;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;

+ (id)stateApplicationQueue;

- (BOOL)isActiveProcess:(id)a0;
- (id)init;
- (void)applySystemState:(id)a0;
- (BOOL)_canTerminateProcess:(id)a0 withContext:(id)a1 error:(out id *)a2;
- (id)busyExtensionInstancesFromSet:(id)a0;
- (id)captureState;
- (void)start;
- (id)_lifecycleQueue_addProcessWithInstance:(id)a0 properties:(id)a1;
- (void)_enqueueGuaranteedRunningLaunchForIdentity:(id)a0 atTime:(double)a1;
- (id)_processForIdentifier:(id)a0;
- (id)processForIdentity:(id)a0;
- (id)_resolveProcessWithIdentifier:(id)a0 auditToken:(id)a1 properties:(id *)a2;
- (id)_processForInstance:(id)a0;
- (BOOL)_preflightCheck:(id)a0;
- (void)_removeProcess:(id)a0;
- (id)processForIdentifier:(id)a0;
- (void)systemPreventIdleSleepStateDidChange:(BOOL)a0;
- (id)executeLaunchRequest:(id)a0 withError:(out id *)a1;
- (void)_executeLifecycleEventForIdentity:(id)a0 sync:(BOOL)a1 withBlock:(id /* block */)a2;
- (void)executeTerminateRequest:(id)a0 completion:(id /* block */)a1;
- (id)_sharedPreflightManager;
- (id)initWithBundlePropertiesManager:(id)a0 entitlementManager:(id)a1 jetsamPropertytManager:(id)a2 timeProvider:(id)a3 historialStatistics:(id)a4 delegate:(id)a5;
- (void).cxx_destruct;
- (id)processesMatchingPredicate:(id)a0;
- (void)didUpdateProcessStates:(id)a0 completion:(id /* block */)a1;
- (id)processForIdentifierWithoutStartingTracking:(id)a0;
- (id)processForInstance:(id)a0;
- (id)_processForIdentifier:(id)a0 withAuditToken:(id)a1 forceStartTracking:(BOOL)a2;
- (id)_getLifecycleQueueForIdentity:(id)a0;
- (void)removeStateForProcessIdentity:(id)a0;
- (void)_releaseLifecycleQueueForIdentity:(id)a0;
- (id)processForAuditToken:(id)a0;

@end
