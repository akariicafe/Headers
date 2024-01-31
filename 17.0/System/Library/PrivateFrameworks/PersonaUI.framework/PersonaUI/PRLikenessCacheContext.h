@interface PRLikenessCacheContext : NSObject

@property (nonatomic) unsigned long long cacheSize;
@property (nonatomic) BOOL circular;
@property (nonatomic) double scale;
@property (nonatomic) BOOL forceDecode;

+ (id)contextWithCacheSize:(unsigned long long)a0;

- (id)init;

@end
