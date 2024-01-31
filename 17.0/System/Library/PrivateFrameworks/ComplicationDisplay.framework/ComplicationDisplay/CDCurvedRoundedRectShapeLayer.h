@interface CDCurvedRoundedRectShapeLayer : CAShapeLayer

- (struct CGPoint { double x0; double x1; })_findCircleLineIntersectionWithOffset:(double)a0 cornerRadiusOffset:(double)a1 radius:(double)a2 slope:(double)a3;
- (struct CGPoint { double x0; double x1; })_findIntersectionOfCircle:(struct CGPoint { double x0; double x1; })a0 cornerRadius:(double)a1 offset:(double)a2;
- (double)_findNewOffsetOfParalelLineWithSlope:(double)a0 offset:(double)a1 distanceFrom:(double)a2;
- (double)_findPointOfIntersectionBetweenCircleOfRadius:(double)a0 slope:(double)a1 offset:(double)a2;
- (struct CGPoint { double x0; double x1; })_findPointThatIsDistance:(double)a0 fromPoint:(struct CGPoint { double x0; double x1; })a1 onSlope:(double)a2 offset:(double)a3;
- (struct CGPoint { double x0; double x1; })_getMirroredPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_midPointOfPoint1:(struct CGPoint { double x0; double x1; })a0 point2:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })_pointAtAngle:(double)a0 radius:(double)a1;
- (id)initWithAngularWidth:(double)a0 innerRadius:(double)a1 outerRadius:(double)a2 cornerRadius:(double)a3;
- (id)initWithAngularWidth:(double)a0 innerRadius:(double)a1 outerRadius:(double)a2 cornerRadius:(double)a3 style:(long long)a4;
- (id)initWithAngularWidth:(double)a0 innerRadius:(double)a1 outerRadius:(double)a2 cornerRadius:(double)a3 style:(long long)a4 gapAngle:(double)a5;

@end
