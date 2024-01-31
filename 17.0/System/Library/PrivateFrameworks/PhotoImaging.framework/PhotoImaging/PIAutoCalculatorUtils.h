@interface PIAutoCalculatorUtils : NSObject

+ (struct CGPoint { double x0; double x1; })averageCGPoints:(const struct CGPoint { double x0; double x1; } *)a0 pointCount:(unsigned long long)a1;
+ (struct CGPoint { double x0; double x1; })averagePoints:(const struct CGPoint { double x0; double x1; } *)a0 pointCount:(unsigned long long)a1;
+ (struct CGPoint { double x0; double x1; })convertFacePoint:(struct CGPoint { double x0; double x1; })a0 toImagePointWithFaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 orientation:(long long)a2;

@end
