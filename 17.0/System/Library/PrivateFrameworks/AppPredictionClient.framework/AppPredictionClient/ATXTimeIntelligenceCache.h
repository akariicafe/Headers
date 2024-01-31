@class ATXGenericFileBasedCache;

@interface ATXTimeIntelligenceCache : NSObject

@property (retain, nonatomic) ATXGenericFileBasedCache *cache;

- (id)init;
- (void).cxx_destruct;
- (id)cachedEvents;
- (void)cacheEvents:(id)a0;
- (void)evictCachedEvents;

@end
