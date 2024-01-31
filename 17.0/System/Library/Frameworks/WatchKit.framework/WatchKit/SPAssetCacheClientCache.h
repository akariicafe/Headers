@class NSString, NSMutableDictionary, NSMutableArray;

@interface SPAssetCacheClientCache : NSObject

@property (retain, nonatomic) NSString *gizmoCacheIdentifier;
@property (retain, nonatomic) NSMutableDictionary *assets;
@property (retain, nonatomic) NSMutableArray *keys;
@property (nonatomic) long long size;
@property (nonatomic) unsigned long long cacheType;

- (id)cacheDirectory;
- (void).cxx_destruct;
- (void)deleteAllAssets;
- (BOOL)addAsset:(id)a0 withName:(id)a1 sendImage:(BOOL)a2;
- (void)addedAssetWithName:(id)a0;
- (id)cachedImages;
- (BOOL)checkAvailableSpaceForAssetWithName:(id)a0 length:(unsigned long long)a1;
- (void)clearSpaceForAsset:(unsigned long long)a0;
- (void)clearedCache;
- (id)dataForImageWithName:(id)a0;
- (void)deleteAsset:(id)a0;
- (void)deleteAssetWithName:(id)a0;
- (void)deleteDataForAsset:(id)a0;
- (void)deletedAssetWithName:(id)a0;
- (id)initWithIdentifier:(id)a0 cacheType:(unsigned long long)a1;
- (id)pathForAssetDataWithName:(id)a0;
- (BOOL)saveAssetData:(id)a0 forAsset:(id)a1;
- (void)syncAssets:(id)a0;

@end
