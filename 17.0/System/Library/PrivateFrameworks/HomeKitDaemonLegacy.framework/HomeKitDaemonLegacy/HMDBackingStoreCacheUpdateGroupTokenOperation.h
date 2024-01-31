@class HMDBackingStoreCacheGroup, CKServerChangeToken;

@interface HMDBackingStoreCacheUpdateGroupTokenOperation : HMDBackingStoreOperation

@property (retain, nonatomic) HMDBackingStoreCacheGroup *record;
@property (retain, nonatomic) CKServerChangeToken *serverChangeToken;

- (void).cxx_destruct;
- (id)initWithGroup:(id)a0 serverChangeToken:(id)a1 resultBlock:(id /* block */)a2;
- (id)mainReturningError;

@end
