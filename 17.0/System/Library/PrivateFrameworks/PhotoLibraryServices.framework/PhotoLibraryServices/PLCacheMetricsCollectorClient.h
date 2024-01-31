@interface PLCacheMetricsCollectorClient : NSObject

- (void)incrementImageCacheMissCount;
- (void)incrementVideoComplementCacheHitCount;
- (void)incrementImageCacheHitCount;
- (void)incrementVideoComplementCacheMissCount;
- (id)initWithAssetsdClient:(id)a0;

@end
