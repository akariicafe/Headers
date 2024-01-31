@class NSString;

@interface AVTPassThroughResourceCache : NSObject <AVTImageCache, AVTResourceCache>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearCache;
- (id)imageForItem:(id)a0 scope:(id)a1;
- (id)imageForItem:(id)a0 scope:(id)a1 cacheMissHandler:(id /* block */)a2;
- (BOOL)resourceExistsInCacheForItem:(id)a0 scope:(id)a1;
- (id)resourceForItem:(id)a0 scope:(id)a1;
- (id)resourceForItem:(id)a0 scope:(id)a1 cacheMissHandler:(id /* block */)a2;

@end
