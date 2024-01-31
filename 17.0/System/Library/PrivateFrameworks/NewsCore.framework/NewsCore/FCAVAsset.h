@class NSString, NSDictionary, AVURLAsset, NSURL, FCContentArchive, NFUnfairLock;
@protocol FCAVAssetResourceLoaderType, FCAVAssetKeyManagerType, FCAVAssetKeyCacheType, FCAVAssetCacheType;

@interface FCAVAsset : NSObject <NSCopying, FCContentArchivable> {
    NSDictionary *_assetOptions;
    NFUnfairLock *_assetLock;
    id<FCAVAssetCacheType> _assetCache;
    id<FCAVAssetKeyCacheType> _assetKeyCache;
    id<FCAVAssetResourceLoaderType> _assetResourceLoader;
    id<FCAVAssetKeyManagerType> _assetKeyManager;
    NSURL *_remoteURL;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) AVURLAsset *asset;
@property (readonly, nonatomic) FCContentArchive *contentArchive;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_resetUnderlyingAsset;

@end
