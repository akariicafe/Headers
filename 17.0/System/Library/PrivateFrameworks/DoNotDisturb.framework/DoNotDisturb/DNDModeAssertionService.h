@class NSString, NSHashTable, DNDModeAssertion, NSObject;
@protocol OS_dispatch_queue;

@interface DNDModeAssertionService : NSObject <DNDRemoteServiceConnectionEventListener> {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSHashTable *_assertionUpdateListeners;
    struct atomic_flag { _Atomic BOOL _Value; } _registeredForUpdates;
    DNDModeAssertion *_activeAssertion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _activeAssertionLock;
    BOOL _activeAssertionQueried;
}

@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)serviceForClientIdentifier:(id)a0;

- (id)activeModeAssertionWithError:(id *)a0;
- (void).cxx_destruct;
- (id)_initWithClientIdentifier:(id)a0;
- (void)_handleChangeActiveModeAssertion:(id)a0 invalidation:(id)a1;
- (void)_registerForAssertionUpdatesIfRequiredWithCompletionHandler:(id /* block */)a0;
- (BOOL)addAssertionUpdateListener:(id)a0 error:(id *)a1;
- (void)addAssertionUpdateListener:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)allModeAssertionsWithError:(id *)a0;
- (id)invalidateActiveModeAssertionWithError:(id *)a0;
- (id)invalidateActiveModeAssertionWithInvalidationDetails:(id)a0 reasonOverride:(unsigned long long)a1 error:(id *)a2;
- (BOOL)invalidateAllActiveModeAssertionsWithError:(id *)a0;
- (id)latestModeAssertionInvalidationWithError:(id *)a0;
- (void)remoteService:(id)a0 didChangeActiveModeAssertion:(id)a1 invalidation:(id)a2;
- (void)removeAssertionUpdateListener:(id)a0;
- (BOOL)removeAssertionUpdateListener:(id)a0 error:(id *)a1;
- (id)takeModeAssertionWithDetails:(id)a0 error:(id *)a1;

@end
