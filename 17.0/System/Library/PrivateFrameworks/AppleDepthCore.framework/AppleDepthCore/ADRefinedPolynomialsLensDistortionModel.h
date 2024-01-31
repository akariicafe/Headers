@interface ADRefinedPolynomialsLensDistortionModel : ADDynamicPolynomialsLensDistortionModel

@property (nonatomic) float pixelSize;
@property (nonatomic) float focalLength;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)distortPixels:(unsigned long long)a0 undistortedPixels:(const struct CGPoint { double x0; double x1; } *)a1 withCameraCalibration:(id)a2 outDistortedPixels:(struct CGPoint { double x0; double x1; } *)a3;
- (id)initWithDistortionCenter:(struct CGPoint { double x0; double x1; })a0 pixelSize:(float)a1 focalLength:(float)a2 polynomialsBase:(const struct ADDistortionPolynomials { float x0[8]; float x1[8]; } *)a3 polynomialsDynamic:(const struct ADDistortionPolynomials { float x0[8]; float x1[8]; } *)a4;
- (void)setDynamicFactor:(float)a0;
- (void)undistortPixels:(unsigned long long)a0 distortedPixels:(const struct CGPoint { double x0; double x1; } *)a1 withCameraCalibration:(id)a2 outUndistortedPixels:(struct CGPoint { double x0; double x1; } *)a3;
- (void)updateDynamicFactor;

@end
