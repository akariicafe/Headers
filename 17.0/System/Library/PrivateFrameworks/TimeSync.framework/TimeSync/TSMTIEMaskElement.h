@interface TSMTIEMaskElement : NSObject <NSCopying>

@property (readonly, nonatomic) double a;
@property (readonly, nonatomic) double b;
@property (readonly, nonatomic) double lowerLimit;
@property (readonly, nonatomic) double upperLimit;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoefficient:(double)a0 offset:(double)a1 lowerLimit:(double)a2 upperLimit:(double)a3;

@end
