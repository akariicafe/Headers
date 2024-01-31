@interface WAGradientProvider : NSObject

- (id)gradientForConditionCode:(long long)a0 isDay:(BOOL)a1;
- (void)getTopColor:(id *)a0 middleColor:(id *)a1 bottomColor:(id *)a2 gradientStopPoint:(double *)a3 forCity:(id)a4 date:(id)a5;
- (struct { float x0; float x1; float x2; float x3; })mixedColorsForIndex:(long long)a0 solarHeight:(float)a1 condition:(long long)a2 latitude:(float)a3;
- (struct { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; struct { float x0; float x1; float x2; float x3; } x2; })mixedGradientForSunheight:(double)a0 hourAngle:(double)a1 condition:(long long)a2 latitude:(float)a3;

@end
