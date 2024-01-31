@interface FCCacheCoordinatorFlushPolicy : NSObject

@property (readonly, nonatomic) BOOL alwaysFlushKeysWithZeroInterest;
@property (readonly, nonatomic) unsigned long long highWaterMark;
@property (readonly, nonatomic) unsigned long long lowWaterMark;

- (id)initWithLowWaterMark:(unsigned long long)a0 highWaterMark:(unsigned long long)a1 alwaysFlushKeysWithZeroInterest:(BOOL)a2;

@end
