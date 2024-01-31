@class NSString, MPMediaLibrary;

@interface MPCMediaLibraryPlaybackAssetCacheProvider : NSObject <MPCModelPlaybackAssetCacheProviding> {
    MPMediaLibrary *_mediaLibrary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_downloadedAssetDestinationDirectoryForMediaLibrary:(id)a0;
+ (id)_highQualityCachedAssetDestinationDirectoryForMediaLibrary:(id)a0;
+ (id)_lowQualityCachedAssetDestinationDirectoryForMediaLibrary:(id)a0;
+ (id)deviceLibraryProviderWithUserIdentity:(id)a0;

- (void).cxx_destruct;
- (id)_initWithMediaLibrary:(id)a0;
- (long long)_persistentIDForModelObject:(id)a0;
- (void)clearPlaybackAssetCacheFileAssetForGenericObject:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)didCacheNewAssetToDestinationURL:(id)a0;
- (void)getPlaybackAssetDestinationURL:(id *)a0 sharedCacheURL:(id *)a1 purgeable:(BOOL)a2 purchaseBundleDestinationURL:(id *)a3 assetQualityType:(long long)a4 fileName:(id)a5 pathExtension:(id)a6;
- (BOOL)isUnderDailyCacheAssetDownloadLimit;
- (void)setPlaybackAssetCacheFileAsset:(id)a0 forGenericObject:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
