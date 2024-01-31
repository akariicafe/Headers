@class AVAssetCache;

@interface MTAVAssetCache : MTSingleton

@property (readonly, nonatomic) AVAssetCache *assetCache;

+ (void)_asyncPrewarm;

- (id)init;
- (void).cxx_destruct;

@end
