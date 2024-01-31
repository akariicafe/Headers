@class CIImage, CIVector, NSNumber;

@interface CIDepthOfField : CIFilter {
    CIVector *inputPoint0;
    CIVector *inputPoint1;
    NSNumber *inputSaturation;
    NSNumber *inputUnsharpMaskRadius;
    NSNumber *inputUnsharpMaskIntensity;
    NSNumber *inputRadius;
}

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIAlphaNormalize;
- (id)_CITiltShift;
- (id)_DistanceColored;

@end
