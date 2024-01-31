@class CIVector, CIColor, NSNumber;

@interface CIGaussianGradient : CIFilter

@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) CIColor *inputColor0;
@property (retain, nonatomic) CIColor *inputColor1;
@property (retain, nonatomic) NSNumber *inputRadius;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
