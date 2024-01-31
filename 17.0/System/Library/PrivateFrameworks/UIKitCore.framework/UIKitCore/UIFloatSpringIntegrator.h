@interface UIFloatSpringIntegrator : NSObject

+ (double)displacementFromValue:(double)a0 toTarget:(double)a1 function:(long long)a2;
+ (struct { double x0; double x1; })integrateWithState:(struct { double x0; double x1; })a0 springParameters:(struct { double x0; double x1; double x2; long long x3; })a1 deltaTime:(double)a2;

@end
