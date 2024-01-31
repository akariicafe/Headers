@class NSMutableDictionary;

@interface GKNetworkImageSource : GKImageSource

@property (retain, nonatomic) NSMutableDictionary *loadingGroups;

- (void).cxx_destruct;
- (void)loadAndCacheAvatarFromGamedForURLString:(id)a0 useUIImage:(BOOL)a1 cacheSubdirectory:(id)a2 reference:(id)a3 queue:(id)a4 handler:(id /* block */)a5;
- (void)loadImageForURLString:(id)a0 loader:(id /* block */)a1 reference:(id)a2 queue:(id)a3 handler:(id /* block */)a4;
- (void)loadImageForURLString:(id)a0 reference:(id)a1 queue:(id)a2 handler:(id /* block */)a3;
- (BOOL)imageNeedsRefresh:(id)a0;

@end
