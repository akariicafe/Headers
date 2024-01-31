@interface MCTouchInput : MCKeyboardInput

@property (readonly, nonatomic) struct CGPoint { double x; double y; } touchPoint;
@property (readonly, nonatomic) double radius;
@property (readonly, nonatomic) double timestamp;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)canComposeNew:(id)a0;
- (id)initWithTouchPoint:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1 timestamp:(double)a2;
- (id)shortDescriptionWithLeadingString:(id)a0;

@end
