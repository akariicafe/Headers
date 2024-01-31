@class CIImage, NSNumber;

@interface CICheapBlur : CIFilter {
    CIImage *inputImage;
    NSNumber *inputPasses;
    NSNumber *inputSampling;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CILerp;
- (id)_CICheapBlur;

@end
