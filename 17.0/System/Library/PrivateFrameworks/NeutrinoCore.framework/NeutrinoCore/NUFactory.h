@class NSString, NURenderPipelineRegistry, NUPlatform, VNSession, NUPurgeableStoragePool, NURenderNodeCache, NUCacheNodeRegistry, NUScheduler, CIFilter, NURenderResultCache, NUSchemaRegistry;
@protocol NUStorageFactory;

@interface NUFactory : NSObject

@property (retain, nonatomic) NUSchemaRegistry *schemaRegistry;
@property (retain, nonatomic) NURenderPipelineRegistry *renderPipelineRegistry;
@property (copy, nonatomic) NSString *defaultNameSpace;
@property (retain, nonatomic) NUScheduler *scheduler;
@property (retain, nonatomic) NUPurgeableStoragePool *bufferStoragePool;
@property (retain, nonatomic) NUPurgeableStoragePool *surfaceStoragePool;
@property (retain, nonatomic) id<NUStorageFactory> bufferFactory;
@property (retain, nonatomic) id<NUStorageFactory> surfaceFactory;
@property (retain, nonatomic) NURenderNodeCache *renderNodeCache;
@property (retain, nonatomic) NURenderResultCache *renderResultCache;
@property (retain, nonatomic) NUPlatform *platform;
@property (retain, nonatomic) NUCacheNodeRegistry *cacheNodeRegistry;
@property (retain, nonatomic) CIFilter *repairMLFilter;
@property (retain, nonatomic) VNSession *visionSession;

+ (void)reset;
+ (void)reapAllStoragePools;
+ (BOOL)hasSharedFactory;
+ (void)setSharedFactory:(id)a0;
+ (void)shutdownSharedFactory;
+ (void)freeAllResources:(BOOL)a0;
+ (id)sharedFactory;

- (void)start;
- (void).cxx_destruct;

@end
