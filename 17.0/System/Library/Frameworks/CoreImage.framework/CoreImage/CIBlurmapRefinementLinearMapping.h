@class CIImage, NSNumber;

@interface CIBlurmapRefinementLinearMapping : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputSecondaryImage;
@property (retain) NSNumber *inputScalingFactor;

- (id)outputImage;
- (id)kernel;
- (id)kernelNoSecondaryImage;

@end
