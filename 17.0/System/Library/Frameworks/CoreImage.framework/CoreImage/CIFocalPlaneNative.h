@class CIImage, NSNumber;

@interface CIFocalPlaneNative : CIFilter {
    CIImage *inputImage;
    CIImage *inputMatteImage;
    CIImage *inputLensModelCalculatorImage;
    NSNumber *inputAlphaThreshold;
    NSNumber *inputAmplitude;
    NSNumber *inputExponent;
    NSNumber *inputGamma;
    NSNumber *inputMinFactor;
    NSNumber *inputMaxFactor;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_focalPlanePreProcessorKernel;
- (id)_focalPlanePreProcessorKernelPow2;

@end
