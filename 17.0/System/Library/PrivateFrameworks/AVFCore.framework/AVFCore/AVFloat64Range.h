@interface AVFloat64Range : NSObject <NSCopying>

@property (readonly, nonatomic) double minimum;
@property (readonly, nonatomic) double maximum;

+ (id)float64RangeWithAudioValueRange:(struct AudioValueRange { double x0; double x1; })a0;
+ (id)float64RangeWithMinimum:(double)a0 maximum:(double)a1;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAudioValueRange:(struct AudioValueRange { double x0; double x1; })a0;
- (id)initWithMinimum:(double)a0 maximum:(double)a1;

@end
