@interface TSDScalarPathSource : TSDPathSource <TSDMixing, TSDSmartPathSource>

@property (nonatomic) int type;
@property (nonatomic) double scalar;
@property (readonly, nonatomic) double maxScalar;
@property (nonatomic) struct CGSize { double width; double height; } naturalSize;
@property (readonly) unsigned long long numberOfControlKnobs;

+ (id)chevronWithScalar:(double)a0 naturalSize:(struct CGSize { double x0; double x1; })a1;
+ (id)pathSourceWithType:(int)a0 scalar:(double)a1 naturalSize:(struct CGSize { double x0; double x1; })a2;
+ (id)rectangleWithNaturalSize:(struct CGSize { double x0; double x1; })a0;
+ (id)regularPolygonWithScalar:(double)a0 naturalSize:(struct CGSize { double x0; double x1; })a1;
+ (id)roundedRectangleWithScalar:(double)a0 naturalSize:(struct CGSize { double x0; double x1; })a1;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isCircular;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isRectangular;
- (void)setScalarValue:(id)a0;
- (struct CGPoint { double x0; double x1; })p_getControlKnobPointForChevron;
- (void)setControlKnobPosition:(unsigned long long)a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)bezierPathWithoutFlips;
- (struct CGPoint { double x0; double x1; })getControlKnobPosition:(unsigned long long)a0;
- (id)getFeedbackStringForKnob:(unsigned long long)a0;
- (id)initWithType:(int)a0 scalar:(double)a1 naturalSize:(struct CGSize { double x0; double x1; })a2;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (long long)mixingTypeWithObject:(id)a0;
- (struct CGPath { } *)newFeedbackPathForKnob:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })p_getControlKnobPointForRegularPolygon;
- (struct CGPoint { double x0; double x1; })p_getControlKnobPointForRoundedRect;
- (struct CGPath { } *)p_newChevronPath;
- (struct CGPath { } *)p_newRegularPolygonPath;
- (struct CGPath { } *)p_newRoundedRectPath;
- (void)p_setControlKnobPointForChevron:(struct CGPoint { double x0; double x1; })a0;
- (void)p_setControlKnobPointForRegularPolygon:(struct CGPoint { double x0; double x1; })a0;
- (void)p_setControlKnobPointForRoundedRect:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })scaleFactorForInscribedRectangle;
- (void)scaleToNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (id)valueForSetSelector:(SEL)a0;

@end
