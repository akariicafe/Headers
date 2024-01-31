@interface IDSNegativeInfo : NSObject <NSCopying>

@property (readonly, nonatomic) double time;
@property (readonly, nonatomic) long long count;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTime:(double)a0 count:(long long)a1;

@end
