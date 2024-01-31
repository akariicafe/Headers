@class NSString, NFUnfairLock, FCMapTable;
@protocol FCAVAssetResourceLoaderType, FCAVAssetKeyManagerType, FCAVAssetKeyCacheType, FCAVAssetCacheType;

@interface FCAVAssetFactory : NSObject <FCAVAssetFactoryType> {
    id<FCAVAssetCacheType> _assetCache;
    id<FCAVAssetKeyCacheType> _assetKeyCache;
    id<FCAVAssetKeyManagerType> _assetKeyManager;
    id<FCAVAssetResourceLoaderType> _assetResourceLoader;
    FCMapTable *_assets;
    NFUnfairLock *_assetsLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)assetWithIdentifier:(id)a0 remoteURL:(id)a1 overrideMIMEType:(id)a2;

@end
