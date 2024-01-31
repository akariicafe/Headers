@interface STSProgressArcLayer : CALayer

@property (nonatomic) double radius;
@property (nonatomic) double startAngle;
@property (nonatomic) double endAngle;
@property (nonatomic) double lineWidth;

- (id)init;
- (void)drawInContext:(struct CGContext { } *)a0;

@end
