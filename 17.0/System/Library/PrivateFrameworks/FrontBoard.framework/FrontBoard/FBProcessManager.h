@class NSHashTable, NSString, NSMutableDictionary, FBApplicationProcess, NSMutableSet, NSObject, RBSProcessMonitor, RBSAssertion, FBProcess;
@protocol FBProcessWatchdogProviding, OS_dispatch_queue;

@interface FBProcessManager : NSObject <FBProcessDelegate> {
    FBProcess *_currentProcess;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    RBSProcessMonitor *_processMonitor;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bootstrapLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bootstrapPredicatesLock;
    NSMutableSet *_bootstrap_pendingProcesses;
    NSMutableSet *_bootstrap_bootstrappingProcesses;
    NSMutableSet *_bootstrap_processPredicates;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_lock_processesByPID;
    NSMutableDictionary *_lock_processesByVersionedPID;
    NSMutableDictionary *_lock_processesByIdentity;
    NSHashTable *_lock_observers;
    RBSAssertion *_lock_assertion;
    BOOL _lock_initializationComplete;
}

@property (retain) id<FBProcessWatchdogProviding> defaultWatchdogPolicy;
@property (readonly, nonatomic) FBApplicationProcess *systemApplicationProcess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
+ (id)_sharedInstanceCreateIfNeeded:(BOOL)a0;

- (id)currentProcess;
- (oneway void)launchProcessWithContext:(id)a0;
- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)noteProcessAssertionStateDidChange:(id)a0;
- (id)_reallyRegisterProcessForHandle:(id)a0;
- (id)_createProcessWithExecutionContext:(id)a0 error:(out id *)a1;
- (id)registerProcessForHandle:(id)a0;
- (void)noteProcessDidExit:(id)a0;
- (id)processForIdentity:(id)a0;
- (id)allApplicationProcesses;
- (id)_createProcessFutureWithExecutionContext:(id)a0 error:(out id *)a1;
- (void)_removeProcess:(id)a0;
- (id)processesForBundleIdentifier:(id)a0;
- (id)allProcesses;
- (id)applicationProcessForPID:(int)a0;
- (id)_bootstrapProcessWithExecutionContext:(id)a0 synchronously:(BOOL)a1 error:(out id *)a2;
- (void)_notifyObserversUsingBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (id)processForPID:(int)a0;
- (id)applicationProcessesForBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)_createProcessFutureForProcessHandle:(id)a0 error:(out id *)a1;
- (id)watchdogPolicyForProcess:(id)a0 eventContext:(id)a1;
- (void)_bootstrap_consumeLock_addProcess:(id)a0;
- (id)_bootstrapProcessWithHandle:(id)a0 synchronously:(BOOL)a1 error:(out id *)a2;
- (id)registerProcessForAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)addObserver:(id)a0;
- (void)_bootstrap_consumeLock_addProcess:(id)a0 synchronously:(BOOL)a1;
- (void)noteProcessDidLaunch:(id)a0;
- (void)_noteShellInitializationComplete;
- (id)processForVersionedPID:(long long)a0;

@end
