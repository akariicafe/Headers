@class NSHashTable, NSString, BLSHAggregatedSystemActivityAssertionFactory, NSMutableDictionary, NSMutableSet, NSMutableArray, NSObject, NSMapTable;
@protocol BLSHOSInterfaceProviding, OS_dispatch_queue, OS_dispatch_workloop;

@interface BLSHLocalAssertionService : NSObject <BLSHAssertionAttributeHandlerService> {
    NSMutableDictionary *_attributeHandlers;
    NSMapTable *_activeAssertions;
    NSMutableArray *_pausedAssertions;
    NSMutableSet *_queue_deferredAcquisitionAssertions;
    NSHashTable *_observers;
    BLSHAggregatedSystemActivityAssertionFactory *_aggregatedAssertionFactory;
    unsigned long long _stateHandler;
    NSObject<OS_dispatch_workloop> *_rootWorkloop;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) id<BLSHOSInterfaceProviding> osInterfaceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)replaceWithService:(id)a0;
- (void)removeObserver:(id)a0;
- (id)initWithOSInterfaceProvider:(id)a0;
- (oneway void)restartAssertionTimeoutTimer:(id)a0;
- (oneway void)cancelAssertion:(id)a0 withError:(id)a1;
- (void)registerAttributeHandler:(id)a0 forAttributeClasses:(id)a1;
- (void)pauseAssertion:(id)a0;
- (oneway void)acquireAssertion:(id)a0;
- (void)resumeAssertion:(id)a0;
- (void).cxx_destruct;
- (void)willCancelAssertion:(id)a0;
- (void)addObserver:(id)a0;

@end
