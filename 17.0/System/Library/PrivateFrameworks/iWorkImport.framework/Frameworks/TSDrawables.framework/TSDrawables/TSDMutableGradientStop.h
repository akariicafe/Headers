@class TSUColor;

@interface TSDMutableGradientStop : TSDGradientStop

@property (copy, nonatomic) TSUColor *color;
@property (nonatomic) double fraction;
@property (nonatomic) double inflection;

- (void)setColor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setFraction:(double)a0;
- (void)setInflection:(double)a0;

@end
