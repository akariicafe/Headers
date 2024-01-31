@class NSPersistentContainer, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ENGroupContextCoreDataCache : NSObject <ENGroupContextCacheMiddleware>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSPersistentContainer *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)deleteAllKnownGroupsForGroupContext:(id)a0 completion:(id /* block */)a1;
- (void)deleteCachedValueForForGroupContext:(id)a0 withGroupID:(id)a1 completion:(id /* block */)a2;
- (void)groupContext:(id)a0 cacheGroup:(id)a1 completion:(id /* block */)a2;
- (void)groupContext:(id)a0 cachedGroupWithID:(id)a1 completion:(id /* block */)a2;
- (void)groupContext:(id)a0 fetchAllKnownGroups:(id /* block */)a1;
- (void)groupContext:(id)a0 latestCachedGroupWithStableID:(id)a1 completion:(id /* block */)a2;
- (long long)middlewareCacheCostForContext:(id)a0;
- (void)_groupFromCypher:(id)a0 groupID:(id)a1 applicationData:(id)a2 context:(id)a3 completion:(id /* block */)a4;
- (id)initInMemoryCacheWithQueue:(id)a0;
- (id)initOnDiskCacheWithContainerURL:(id)a0 Queue:(id)a1;
- (id)initWithType:(unsigned long long)a0 containerURL:(id)a1 queue:(id)a2;

@end
