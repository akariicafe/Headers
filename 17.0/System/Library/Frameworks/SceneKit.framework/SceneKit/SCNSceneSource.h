@class NSString, NSDictionary, NSURL, NSData;

@interface SCNSceneSource : NSObject <NSKeyedUnarchiverDelegate> {
    struct __C3DSceneSource { } *_sceneSource;
    struct __C3DScene { } *_lastLoadedScene;
    NSDictionary *_lastOptions;
    BOOL _sceneLoaded;
    NSDictionary *_sceneSourceOptions;
}

@property (readonly) NSURL *url;
@property (readonly) NSData *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sceneSourceWithURL:(id)a0 options:(id)a1;
+ (void)_cacheSceneSource:(id)a0 forURL:(id)a1 options:(id)a2;
+ (id)_cachedSceneSourceForURL:(id)a0 options:(id)a1;
+ (void)_removeCachedSceneSourceIfNeededForURL:(id)a0;
+ (BOOL)_shouldCacheWithOptions:(id)a0;
+ (id)sceneFileTypes;
+ (id)sceneSourceWithData:(id)a0 options:(id)a1;
+ (id)sceneTypes;

- (id)debugQuickLookObject;
- (void)dealloc;
- (struct __C3DLibrary { } *)library;
- (id)initWithURL:(id)a0 options:(id)a1;
- (id)initWithData:(id)a0 options:(id)a1;
- (Class)unarchiver:(id)a0 cannotDecodeObjectOfClassName:(id)a1 originalClasses:(id)a2;
- (id)propertyForKey:(id)a0;
- (id)sceneWithOptions:(id)a0 error:(id *)a1;
- (id)IDsOfEntriesWithClass:(Class)a0;
- (id)sceneWithOptions:(id)a0 statusHandler:(id /* block */)a1;
- (BOOL)_appendToEntries:(id)a0 entriesWithType:(unsigned long long)a1 passingTest:(id /* block */)a2 entryObjectConstructor:(id /* block */)a3;
- (struct __C3DScene { } *)_createSceneRefWithOptions:(id)a0 statusHandler:(id /* block */)a1;
- (id)_sceneWithClass:(Class)a0 options:(id)a1 statusHandler:(id /* block */)a2;
- (id)c3dDataRepresentation;
- (BOOL)canExportToColladaWithNoDataLoss;
- (id)copyPropertiesAtIndex:(long long)a0 options:(id)a1;
- (long long)countOfScenes;
- (id)debugQuickLookData;
- (id)entriesPassingTest:(id /* block */)a0;
- (id)entryWithID:(id)a0 withClass:(Class)a1;
- (id)entryWithIdentifier:(id)a0 withClass:(Class)a1;
- (id)identifiersOfEntriesWithClass:(Class)a0;
- (id)performConsistencyCheck;
- (id)sceneAtIndex:(unsigned long long)a0 options:(id)a1;
- (id)sceneAtIndex:(unsigned long long)a0 options:(id)a1 error:(id *)a2;
- (long long)sceneCount;
- (id)sceneSourceOptions;
- (struct __C3DSceneSource { } *)sceneSourceRef;
- (id)sceneWithClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (id)sceneWithClass:(Class)a0 options:(id)a1 statusHandler:(id /* block */)a2;
- (long long)sourceStatus;

@end
