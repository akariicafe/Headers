@interface WebApplicationCache : NSObject

+ (long long)maximumSize;
+ (void)setMaximumSize:(long long)a0;
+ (void)initializeWithBundleIdentifier:(id)a0;
+ (long long)defaultOriginQuota;
+ (void)deleteAllApplicationCaches;
+ (void)deleteCacheForOrigin:(id)a0;
+ (long long)diskUsageForOrigin:(id)a0;
+ (id)originsWithCache;
+ (void)setDefaultOriginQuota:(long long)a0;

@end
