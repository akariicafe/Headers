@interface AKCurvePoint : NSObject

@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) struct CGPoint { double x; double y; } leftTangentPoint;
@property (nonatomic) struct CGPoint { double x; double y; } rightTangentPoint;
@property (nonatomic) double roundness;
@property (nonatomic) double smoothness;
@property (nonatomic) struct CGPoint { double x0; double x1; } CGPoint;

+ (id)pointWithCGPoint:(struct CGPoint { double x0; double x1; })a0;
+ (id)pointWithX:(double)a0 y:(double)a1;

- (id)initWithX:(double)a0 y:(double)a1;

@end
