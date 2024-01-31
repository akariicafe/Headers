@class TSDStrokePattern, TSUColor;

@interface TSDMutableManipulatedStroke : TSDManipulatedStroke <TSDMutableStroke>

@property (copy, nonatomic) TSUColor *color;
@property (nonatomic) double width;
@property (nonatomic) double actualWidth;
@property (nonatomic) int cap;
@property (nonatomic) int join;
@property (nonatomic) double miterLimit;
@property (copy, nonatomic) TSDStrokePattern *pattern;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setPatternPropertiesFromStroke:(id)a0;
- (void)setPropertiesFromStroke:(id)a0;

@end
