@protocol APPurgeableCacheObjectP;

@interface APPurgeableCacheEntry : NSObject

@property (retain, nonatomic) id<APPurgeableCacheObjectP> object;
@property (nonatomic) double timestamp;

- (id)initWithObject:(id)a0;
- (void).cxx_destruct;

@end
