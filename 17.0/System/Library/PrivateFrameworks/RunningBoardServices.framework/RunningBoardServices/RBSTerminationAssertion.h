@class RBSAssertion, RBSTerminateContext, RBSProcessPredicate, NSMutableSet, NSHashTable, RBSProcessMonitor;
@protocol RBSServiceLocalProtocol;

@interface RBSTerminationAssertion : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    RBSAssertion *_assertion;
    RBSProcessMonitor *_monitor;
    RBSTerminateContext *_terminateContext;
    RBSProcessPredicate *_predicate;
    RBSProcessPredicate *_allow;
    id<RBSServiceLocalProtocol> _service;
    unsigned long long _state;
    BOOL _processExists;
    NSMutableSet *_runningHandles;
    BOOL _deathMonitorsSetUp;
    BOOL _observersHaveBeenNotified;
    NSHashTable *_observers;
}

@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) BOOL processExists;

- (BOOL)invalidateWithError:(out id *)a0;
- (void)removeObserver:(id)a0;
- (id)initWithPredicate:(id)a0 context:(id)a1;
- (void)invalidate;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (BOOL)acquireWithError:(out id *)a0;
- (id)initWithPredicate:(id)a0 context:(id)a1 allowLaunch:(id)a2;
- (id)initWithPredicate:(id)a0 context:(id)a1 allowLaunch:(id)a2 service:(id)a3;
- (id)initWithTarget:(id)a0 context:(id)a1;

@end
