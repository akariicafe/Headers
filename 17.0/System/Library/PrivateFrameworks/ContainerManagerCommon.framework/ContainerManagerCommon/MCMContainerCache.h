@class NSString, MCMUserIdentityCache, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, MCMChildParentMapCache;

@interface MCMContainerCache : NSObject <MCMUserIdentityCacheObserver, MCMContainerCache> {
    NSMutableDictionary *_queue_cache;
}

@property (readonly, nonatomic) id<MCMChildParentMapCache> childParentMapCache;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) Class cacheEntryClass;
@property (readonly, nonatomic) Class classCacheClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache;

- (BOOL)isWellKnownIdentifier:(id)a0;
- (BOOL)_sandboxSentinelExistsForContainerClass:(unsigned long long)a0;
- (void)_sandboxSetSentinelForContainerClass:(unsigned long long)a0;
- (id)initWithUserIdentityCache:(id)a0 childParentMapCache:(id)a1 classCacheClass:(Class)a2 cacheEntryClass:(Class)a3 queue:(id)a4;
- (id)_containerClassPathForUserIdentity:(id)a0 containerClass:(unsigned long long)a1 transient:(BOOL)a2;
- (void)_queue_flushCacheForContainerClassPath:(id)a0;
- (void)_queue_setContainerClassCache:(id)a0;
- (long long)countContainersForOtherUserIdentitiesWithIdentity:(id)a0 error:(id *)a1;
- (void)setContainerClassCache:(id)a0;
- (id)_queue_containerClassCacheForContainerClassPath:(id)a0;
- (id)entriesForUserIdentities:(id)a0 contentClass:(unsigned long long)a1 transient:(BOOL)a2 error:(id *)a3;
- (BOOL)_concurrent_setSandboxContainerMappingForUserIdentity:(id)a0 identifier:(id)a1 containerClass:(unsigned long long)a2 url:(id)a3;
- (id)entryForContainerIdentity:(id)a0 classCache:(id)a1 error:(id *)a2;
- (id)classCacheForContainerIdentity:(id)a0;
- (id)_queue_containerClassCacheForUserIdentity:(id)a0 containerClass:(unsigned long long)a1 transient:(BOOL)a2;
- (void).cxx_destruct;
- (void)invalidateUserIdentity:(id)a0;
- (id)entryForContainerIdentity:(id)a0 error:(id *)a1;
- (id)initWithUserIdentityCache:(id)a0 childParentMapCache:(id)a1 classCacheClass:(Class)a2 cacheEntryClass:(Class)a3 error:(id *)a4;
- (void)_queue_attachSandboxWriteThroughHandlerToContainerClassCache:(id)a0;
- (BOOL)_concurrent_shouldRegisterSandboxMappingWithUserIdentity:(id)a0 identifier:(id)a1 childParentMapCache:(id)a2 containerClass:(unsigned long long)a3;
- (id)addContainerMetadata:(id)a0 error:(id *)a1;
- (BOOL)removeContainerForUserIdentity:(id)a0 contentClass:(unsigned long long)a1 identifier:(id)a2 transient:(BOOL)a3 error:(id *)a4;
- (void)flushCacheForUserIdentity:(id)a0 containerClass:(unsigned long long)a1 transient:(BOOL)a2;
- (void)userIdentityCache:(id)a0 didInvalidateUserIdentity:(id)a1;
- (void)_queue_invalidateUserIdentity:(id)a0;
- (void)userIdentityCache:(id)a0 didAddUserIdentity:(id)a1;
- (id)_sandboxSentinelForContainerClass:(unsigned long long)a0;

@end
