@interface IntegerByBandObj : NSObject <NSCopying>

@property (nonatomic) struct { long long valueByBand[3]; BOOL valid[3]; } candidateSet;

+ (id)integerByBandWith:(struct { long long x0[3]; BOOL x1[3]; })a0;
+ (id)integerByBandWith:(struct { long long x0[3]; BOOL x1[3]; })a0 withCap:(BOOL)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
