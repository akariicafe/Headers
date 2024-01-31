@class NSCache, NSString, TSPComponent, TSPObjectContext, NSHashTable, NSObject, NSMapTable;
@protocol OS_dispatch_queue;

@interface TSPComponentManager : NSObject <TSPComponentDelegate, TSPObjectModifyDelegate> {
    _Atomic int _ignoreCachedObjectEvictionCount;
    BOOL _isTornDown;
    NSObject<OS_dispatch_queue> *_componentQueue;
    NSHashTable *_components;
    NSMapTable *_componentDictionary;
    NSCache *_componentCache;
    TSPComponent *_viewStateComponent;
    NSObject<OS_dispatch_queue> *_readFlushedComponentQueue;
}

@property (readonly, weak, nonatomic) TSPObjectContext *context;
@property (readonly, nonatomic) TSPComponent *packageMetadataComponent;
@property (readonly, nonatomic) TSPComponent *documentComponent;
@property (readonly, nonatomic) TSPComponent *documentObjectContainerComponent;
@property (readonly, nonatomic) TSPComponent *documentMetadataComponent;
@property (readonly, nonatomic) TSPComponent *supportComponent;
@property (readonly, nonatomic) TSPComponent *supportObjectContainerComponent;
@property (readonly, nonatomic) TSPComponent *supportMetadataComponent;
@property (retain) TSPComponent *viewStateComponent;
@property (readonly, nonatomic) unsigned long long componentCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentManagersPerformingCacheOperationOnCurrentThread;

- (id)init;
- (void)dealloc;
- (id)objectForIdentifier:(long long)a0;
- (void)tearDown;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)isActive;
- (void)endIgnoringCachedObjectEviction;
- (void)beginIgnoringCachedObjectEviction;
- (void)resumeLoadingModifiedFlushedComponents;
- (void)suspendLoadingModifiedFlushedComponentsAndWait;
- (void)cacheComponent:(id)a0 isDiscardingContent:(BOOL)a1;
- (id)componentForRootObjectIdentifier:(long long)a0;
- (void)componentForRootObjectIdentifier:(long long)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)componentForRootObjectOfLazyReference:(id)a0;
- (void)componentForRootObjectOfLazyReference:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)componentForRootObjectOfLazyReferenceImpl:(id)a0;
- (void)continueCacheOperationUsingBlock:(id /* block */)a0;
- (void)didModifyFlushedComponent:(id)a0 forObject:(id)a1;
- (void)dirtyAllComponentsForDocumentUpgradeInPackage:(unsigned char)a0;
- (void)dirtyComponents:(id)a0;
- (void)discardOrphanedComponents;
- (id)documentComponentImpl;
- (void)enumerateComponents:(id /* block */)a0;
- (void)evictAllCachedObjects;
- (void)flushComponent:(id)a0 isDiscardingContent:(BOOL)a1;
- (BOOL)isPerformingCacheOperation;
- (void)loadComponent:(const void *)a0 package:(id)a1;
- (void)loadFromPackage:(id)a0 metadata:(id)a1;
- (unsigned long long)objectTargetType;
- (void)performCacheOperationUsingBlock:(id /* block */)a0;
- (void)retrieveOrCreateComponentForRootObject:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)rootComponentForPackageIdentifier:(unsigned char)a0;
- (id)rootComponentWithIdentifierImpl:(long long)a0 locator:(id)a1 packageIdentifier:(unsigned char)a2;
- (BOOL)shouldKeepAllCachedObjectsInMemory;
- (id)supportComponentImpl;
- (void)traverseComponentTreeFromRoot:(id)a0 accessor:(id /* block */)a1;
- (void)willModifyObject:(id)a0 options:(unsigned long long)a1;

@end
