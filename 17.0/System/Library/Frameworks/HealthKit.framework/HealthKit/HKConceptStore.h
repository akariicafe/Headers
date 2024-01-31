@class HKObserverSet, NSUUID, HKHealthStore, HKTaskServerProxyProvider, NSString;

@interface HKConceptStore : NSObject <_HKXPCExportable, HKConceptStoreClientInterface> {
    HKObserverSet *_conceptObservers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _conceptIndexManagerStateLock;
    unsigned long long _lastKnownConceptIndexManagerState;
}

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider;
@property (readonly, nonatomic) unsigned long long currentConceptIndexerState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serverInterface;
+ (id)taskServerIdentifier;

- (id)exportedInterface;
- (id)init;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)_startObservingConceptIndexManager;
- (void)clientRemote_conceptIndexManagerDidChangeState:(unsigned long long)a0;
- (id)countOfConceptsAssociatedToUserRecordsWithError:(id *)a0;
- (void)fetchConceptForIdentifier:(id)a0 loadRelationships:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)registerAsConceptObserver:(id)a0 onQueue:(id)a1;
- (void)startObservingConceptIndexManagerWithCompletion:(id /* block */)a0;
- (void)unregisterAsConceptObserver:(id)a0;

@end
