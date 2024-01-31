@interface TSDConnectionLinePathSource : TSDBezierPathSource <TSDSmartPathSource>

@property (nonatomic) int type;
@property (nonatomic) double outsetFrom;
@property (nonatomic) double outsetTo;
@property (readonly) unsigned long long numberOfControlKnobs;

+ (id)pathSourceAtAngleOfSize:(struct CGSize { double x0; double x1; })a0 forType:(int)a1;
+ (id)pathSourceOfLength:(double)a0;

- (id)description;
- (BOOL)isCircular;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isRectangular;
- (id)bezierPath;
- (void)setControlKnobPosition:(unsigned long long)a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)bend;
- (struct CGPoint { double x0; double x1; })fixedPointForControlKnobChange;
- (struct CGPoint { double x0; double x1; })getControlKnobPosition:(unsigned long long)a0;
- (id)getFeedbackStringForKnob:(unsigned long long)a0;
- (id)initWithBezierPath:(id)a0;
- (BOOL)isLineSegment;
- (struct CGPath { } *)newFeedbackPathForKnob:(unsigned long long)a0;
- (void)p_setBezierPath:(id)a0;
- (long long)pathElementIndexForKnobTag:(unsigned long long)a0;
- (void)scaleToNaturalSize:(struct CGSize { double x0; double x1; })a0;

@end
