@class CIImage, NSDictionary, NSNumber;

@interface CIDisparityRefinementAntialiasV3 : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputPreprocImage;
@property (retain) CIImage *inputDisparityWeightImage;
@property (retain) NSDictionary *inputTuningParameters;
@property (retain) NSNumber *inputScale;

- (id)outputImage;
- (id)antialiasKernel;

@end
