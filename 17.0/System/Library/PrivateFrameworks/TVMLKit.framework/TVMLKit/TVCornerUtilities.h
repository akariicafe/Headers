@interface TVCornerUtilities : NSObject

+ (struct CGPath { } *)createPathForRadii:(struct TVCornerRadii { double x0; double x1; double x2; double x3; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 isContinuous:(BOOL)a2;
+ (struct TVCornerRadii { double x0; double x1; double x2; double x3; })radiiFromRadius:(double)a0;
+ (BOOL)radiiIsZero:(struct TVCornerRadii { double x0; double x1; double x2; double x3; })a0;
+ (double)radiusFromCornerRadii:(struct TVCornerRadii { double x0; double x1; double x2; double x3; })a0;
+ (struct CGPath { } *)createPathForRadii:(struct TVCornerRadii { double x0; double x1; double x2; double x3; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct TVCornerRadii { double x0; double x1; double x2; double x3; })flipCGOriginRadii:(struct TVCornerRadii { double x0; double x1; double x2; double x3; })a0;

@end
