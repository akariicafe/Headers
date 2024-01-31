@class HMDBackingStoreCacheGroup, NSArray;

@interface HMDBackingStoreCacheDeleteRecordOperation : HMDBackingStoreOperation

@property (retain, nonatomic) HMDBackingStoreCacheGroup *group;
@property (retain, nonatomic) NSArray *recordNames;

- (void).cxx_destruct;
- (id)initWithGroup:(id)a0 recordNames:(id)a1 resultBlock:(id /* block */)a2;
- (id)mainReturningError;

@end
