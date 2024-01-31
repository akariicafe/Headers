@class HMDBackingStoreCacheGroup;

@interface HMDBackingStoreCacheCreateGroupOperation : HMDBackingStoreOperation

@property (retain, nonatomic) HMDBackingStoreCacheGroup *record;
@property (copy, nonatomic) id /* block */ creationBlock;

- (void).cxx_destruct;
- (id)initWithZone:(id)a0 owner:(id)a1 rootRecord:(id)a2 subscriptionName:(id)a3 subscription:(id)a4 creationBlock:(id /* block */)a5;
- (id)mainReturningError;

@end
