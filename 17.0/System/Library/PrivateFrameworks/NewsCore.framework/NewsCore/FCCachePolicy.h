@class NSDate;

@interface FCCachePolicy : NSObject <NSCopying>

@property (nonatomic) unsigned long long cachePolicy;
@property (nonatomic) double maximumCachedAge;
@property (readonly, nonatomic) NSDate *oldestAllowedDate;

+ (id)cachedOnlyCachePolicy;
+ (id)defaultCachePolicy;
+ (id)cachePolicyWithSoftMaxAge:(double)a0;
+ (id)ignoreCacheCachePolicy;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
