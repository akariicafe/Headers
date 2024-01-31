@class NSString, NSOperationQueue;

@interface JFXEffectPreviewDiskCache : NSObject

@property (readonly, nonatomic) NSString *directoryName;
@property (readonly, nonatomic) NSString *cacheDirectoryPath;
@property (readonly, nonatomic) NSOperationQueue *diskAccessQueue;

+ (id)cachedPathForEffect:(id)a0 version:(id)a1 directoryPath:(id)a2;
+ (id)createCacheAtDirectory:(id)a0;

- (void)dealloc;
- (id)initWithDirectory:(id)a0;
- (void).cxx_destruct;
- (id)cachedURLForEffect:(id)a0 version:(id)a1;
- (void)previewForEffectID:(id)a0 version:(id)a1 completion:(id /* block */)a2;
- (void)removePreviewForEffectID:(id)a0 excludingVersion:(id)a1 completion:(id /* block */)a2;
- (void)savePreviewForEffectID:(id)a0 image:(id)a1 version:(id)a2 completion:(id /* block */)a3;

@end
