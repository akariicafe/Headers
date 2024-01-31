@class NSString;
@protocol AVTImageCache;

@interface AVTTwoLevelsImageCache : NSObject <AVTImageCache>

@property (readonly, nonatomic) id<AVTImageCache> firstLevelCache;
@property (readonly, nonatomic) id<AVTImageCache> secondLevelCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)imageForItem:(id)a0 scope:(id)a1;
- (id)imageForItem:(id)a0 scope:(id)a1 cacheMissHandler:(id /* block */)a2;
- (id)initWithFirstLevelCache:(id)a0 secondLevelCache:(id)a1 environment:(id)a2;
- (BOOL)resourceExistsInCacheForItem:(id)a0 scope:(id)a1;
- (id)resourceForItem:(id)a0 scope:(id)a1;
- (id)resourceForItem:(id)a0 scope:(id)a1 cacheMissHandler:(id /* block */)a2;

@end
