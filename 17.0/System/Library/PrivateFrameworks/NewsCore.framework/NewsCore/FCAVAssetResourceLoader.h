@class FCAssetManager, NSString, FCThreadSafeMutableSet;

@interface FCAVAssetResourceLoader : NSObject <AVAssetResourceLoaderDelegate, FCAVAssetResourceLoaderType>

@property (readonly, nonatomic) FCAssetManager *assetManager;
@property (readonly, nonatomic) FCThreadSafeMutableSet *whitelistedMasterPlaylistURLs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)prefetchMasterPlaylistForAssetURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithCacheDirectory:(id)a0;
- (BOOL)resourceLoader:(id)a0 shouldWaitForLoadingOfRequestedResource:(id)a1;
- (BOOL)_isHLSURL:(id)a0;
- (void).cxx_destruct;
- (void)registerAVURLAssetForAutomaticResourceManagement:(id)a0;

@end
