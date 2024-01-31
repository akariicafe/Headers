@class APInMemoryTTLCache;

@interface APConfigurationCache : NSObject <APPurgeableCacheNotifierP>

@property (retain, nonatomic) APInMemoryTTLCache *purgeableCache;

+ (id)sharedInstance;

- (id)init;
- (void)setConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)recentlyAccessedObject:(id)a0;
- (id)configurationForPath:(id)a0;

@end
