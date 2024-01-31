@class CIVector, CIColor, CIImage, NSNumber;

@interface CISpotLight : CIFilter {
    CIVector *inputLightPosition;
    CIVector *inputLightPointsAt;
    NSNumber *inputBrightness;
    NSNumber *inputConcentration;
    CIColor *inputColor;
}

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (id)outputImage;
- (id)_CISpotLight;

@end
