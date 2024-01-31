@class CIImage, NSNumber;

@interface CIMattingSolverInternal : CIFilter {
    CIImage *inputImage;
    CIImage *inputMainImage;
    CIImage *inputPredicateImage;
    NSNumber *inputRadius;
    NSNumber *inputSubsampling;
    NSNumber *inputEPS;
    NSNumber *inputNumIterations;
    NSNumber *inputErosionKernelSize;
    NSNumber *inputUseDepthFilter;
    NSNumber *inputFGThresholdValue;
    NSNumber *inputBGThresholdValue;
}

+ (id)customAttributes;

- (id)outputImage;

@end
