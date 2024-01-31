@class NSString, WBSSiteMetadataImageCache;
@protocol WBSSiteMetadataProviderDelegate;

@interface WBSLinkPresentationIconCache : NSObject <WBSSiteMetadataProvider> {
    WBSSiteMetadataImageCache *_imageCache;
}

@property (weak) id<WBSSiteMetadataProviderDelegate> providerDelegate;
@property (readonly, nonatomic) BOOL providesFavicons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)canHandleRequest:(id)a0;
- (void).cxx_destruct;
- (void)savePendingChangesBeforeTermination;
- (void)_historyItemsWereRemoved:(id)a0;
- (id)initWithImageDirectoryURL:(id)a0;
- (void)emptyCaches;
- (id)imageForHost:(id)a0;
- (void)prepareResponseForRequest:(id)a0 allowDelayedResponse:(BOOL)a1;
- (void)purgeUnneededCacheEntries;
- (id)responseForRequest:(id)a0 willProvideUpdates:(BOOL *)a1;
- (void)saveImage:(id)a0 forHost:(id)a1;

@end
