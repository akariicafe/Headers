@interface HKCountrySetBitmaskPath : NSObject

@property (readonly, nonatomic) unsigned long long bitmask;
@property (readonly, nonatomic) long long index;

+ (id)pathWithBitmask:(unsigned long long)a0 index:(long long)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
