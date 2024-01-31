@class NSArray, NSDictionary, NSXPCConnection, NSString, NSSet, NSObject;
@protocol COStateManagerConnectionProvider, OS_dispatch_queue;

@interface COStateManager : NSObject <COStateManagerClientInterface> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _reconnectionInProgress;
}

@property (weak, nonatomic) NSXPCConnection *lastConnection;
@property (copy, nonatomic) NSDictionary *state;
@property (copy, nonatomic) NSArray *observers;
@property (readonly, nonatomic) id<COStateManagerConnectionProvider> provider;
@property (readonly, copy, nonatomic) NSString *suite;
@property (readonly, copy, nonatomic) NSSet *clusters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)homed_COStateManagerWithSuiteName:(id)a0 homeIdentifier:(id)a1;

- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)_invalidate;
- (void).cxx_destruct;
- (id)_remoteInterfaceWithErrorHandler:(id /* block */)a0;
- (void)_lostConnectionToService;
- (void)_withLock:(id /* block */)a0;
- (id)_sanitizeChanges:(id)a0;
- (void)_onqueue_setDictionary:(id)a0 clusters:(id)a1 cacheLocally:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)_clustersForClustersTmp:(id)a0;
- (BOOL)_onqueue_clustersValid:(id)a0;
- (void)_onqueue_registerObserver:(id)a0;
- (void)_onqueue_removeObjectsForKeyPaths:(id)a0 clusters:(id)a1 cacheLocally:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)addObserverForKeyPathUsingPredicate:(id)a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (void)changesObserved:(id)a0 forPredicate:(id)a1;
- (void)delayForDoorbellChimeWithCompletionHandler:(id /* block */)a0;
- (void)fetchCompositionForCluster:(id)a0 dispatchQueue:(id)a1 block:(id /* block */)a2;
- (id)initWithConnectionProvider:(id)a0 suite:(id)a1 clusters:(id)a2;
- (id)initWithSuiteName:(id)a0 clusters:(id)a1;
- (void)removeObjectForKeyPath:(id)a0 clusters:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeObjectsForKeyPaths:(id)a0 clusters:(id)a1 completionHandler:(id /* block */)a2;
- (void)setBool:(BOOL)a0 forKeyPath:(id)a1 clusters:(id)a2 completionHandler:(id /* block */)a3;
- (void)setDate:(id)a0 forKeyPath:(id)a1 clusters:(id)a2 completionHandler:(id /* block */)a3;
- (void)setDictionary:(id)a0 clusters:(id)a1 completionHandler:(id /* block */)a2;
- (void)setNumber:(id)a0 forKeyPath:(id)a1 clusters:(id)a2 completionHandler:(id /* block */)a3;
- (void)setString:(id)a0 forKeyPath:(id)a1 clusters:(id)a2 completionHandler:(id /* block */)a3;

@end
