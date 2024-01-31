@interface VNImageRegistration : NSObject

+ (BOOL)computeTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a0 forRegisteringImageSignature:(id)a1 withSignature:(id)a2 minimumOverlap:(float)a3 error:(id *)a4;

@end
