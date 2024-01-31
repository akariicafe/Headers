@class CIImage, NSNumber;

@interface CICannyEdgeDetector : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputGaussianSigma;
@property (retain, nonatomic) NSNumber *inputPerceptual;
@property (retain, nonatomic) NSNumber *inputThresholdHigh;
@property (retain, nonatomic) NSNumber *inputThresholdLow;
@property (retain, nonatomic) NSNumber *inputHysteresisPasses;

+ (id)customAttributes;

- (id)outputImage;

@end
