@class NSDictionary;

@interface SHCacheValues : NSObject

@property (readonly, nonatomic) NSDictionary *cacheValues;
@property (readonly, nonatomic) long long lookupMaxAge;

- (void).cxx_destruct;
- (id)initWithValues:(id)a0;

@end
