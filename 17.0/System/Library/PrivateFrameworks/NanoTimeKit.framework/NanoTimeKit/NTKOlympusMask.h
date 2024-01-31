@interface NTKOlympusMask : NSObject

+ (double)normalizeAngle:(double)a0;
+ (double)angleForHour:(unsigned long long)a0 minutes:(unsigned long long)a1;
+ (double)angleForMinute:(unsigned long long)a0 seconds:(unsigned long long)a1;
+ (id)clippingPathFromCenterPoint:(struct CGPoint { double x0; double x1; })a0 startAngle:(double)a1 endAngle:(double)a2 radius:(double)a3;
+ (double)convertAngleForFirstQuadrant:(double)a0;
+ (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 translantedFromFirstToQuadrantIndex:(unsigned long long)a1;
+ (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 translantedQuadrantIndex:(unsigned long long)a1;
+ (struct CGPoint { double x0; double x1; })convertPointFromCartesianCoordiatesToViewCoordiates:(struct CGPoint { double x0; double x1; })a0 centerFromViewCoordinates:(struct CGPoint { double x0; double x1; })a1;
+ (struct CGPoint { double x0; double x1; })convertPointFromViewCoordinatesToCartesianCoordiates:(struct CGPoint { double x0; double x1; })a0 centerFromViewCoordinates:(struct CGPoint { double x0; double x1; })a1;
+ (double)hourHandAngleWithDate:(id)a0;
+ (double)minuteHandAngleWithDate:(id)a0;
+ (struct CGPoint { double x0; double x1; })nextPointFromStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1 radius:(double)a2;
+ (unsigned long long)nextQuadrantIndex:(unsigned long long)a0;
+ (struct CGPoint { double x0; double x1; })pointForAngle:(double)a0 radius:(double)a1 centerPoint:(struct CGPoint { double x0; double x1; })a2;
+ (unsigned long long)quadrantForAngle:(double)a0;
+ (unsigned long long)quadrantForPoint:(struct CGPoint { double x0; double x1; })a0;
+ (struct CGPoint { double x0; double x1; })roundPoint:(struct CGPoint { double x0; double x1; })a0;

@end
