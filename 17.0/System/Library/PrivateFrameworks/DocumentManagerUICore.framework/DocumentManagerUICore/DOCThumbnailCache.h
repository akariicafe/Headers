@class NSCache, NSMapTable;

@interface DOCThumbnailCache : NSObject

@property (readonly, nonatomic) NSMapTable *cachedThumbnailNodes;
@property (readonly, nonatomic) NSCache *recentlyUsedNodes;

- (void)clear;
- (id)init;
- (void).cxx_destruct;

@end
