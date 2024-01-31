@class CIImage, NSNumber;

@interface RedEyeMinMorphology : CIFilter {
    CIImage *inputImage;
    NSNumber *inputRadius;
}

- (id)outputImage;

@end
