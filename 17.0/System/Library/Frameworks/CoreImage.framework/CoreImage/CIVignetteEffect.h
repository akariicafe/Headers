@class CIImage, CIVector, NSNumber;

@interface CIVignetteEffect : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputIntensity;
@property (retain, nonatomic) NSNumber *inputFalloff;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (id)outputImage;
- (id)_negkernel;
- (id)_poskernel;

@end
