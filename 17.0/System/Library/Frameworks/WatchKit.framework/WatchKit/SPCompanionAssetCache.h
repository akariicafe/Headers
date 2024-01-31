@class SPAssetCacheClientCache;

@interface SPCompanionAssetCache : NSObject

@property (retain, nonatomic) SPAssetCacheClientCache *permanentCache;
@property (retain, nonatomic) SPAssetCacheClientCache *transientCache;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)addImageReferenceToTransientCache:(id)a0 withName:(id)a1;
- (BOOL)addImageToPermanentCache:(id)a0 withName:(id)a1;
- (void)addedAsset:(id)a0;
- (id)cachedImages;
- (void)clearedCache:(id)a0;
- (id)dataForImageWithName:(id)a0;
- (void)deletedAsset:(id)a0;
- (void)handleCacheMessage:(id)a0;
- (BOOL)imageInPermanentCache:(id)a0;
- (BOOL)imageInTransientCache:(id)a0;
- (id)keyFromImageData:(id)a0;
- (void)removeAllImagesFromPermanentCache;
- (void)removeImageFromPermanentCacheWithName:(id)a0;
- (void)syncCache:(id)a0;

@end
