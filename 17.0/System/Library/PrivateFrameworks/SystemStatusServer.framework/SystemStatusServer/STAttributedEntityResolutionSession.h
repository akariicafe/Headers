@class NSArray, STReferenceCountedCache;
@protocol STAttributedEntityResolving, STExecutableIdentityBatchResolving;

@interface STAttributedEntityResolutionSession : NSObject <STAttributedEntityBatchResolving> {
    BOOL _invalidated;
    id<STAttributedEntityResolving> _entityResolver;
    id<STExecutableIdentityBatchResolving> _identityResolver;
    STReferenceCountedCache *_cache;
    NSArray *_cachedEntities;
}

- (void)dealloc;
- (void)invalidate;
- (void)resolveEntities:(id)a0;
- (void).cxx_destruct;
- (id)resolveEntity:(id)a0;
- (id)initWithEntityResolver:(id)a0 identityResolver:(id)a1 cache:(id)a2;

@end
