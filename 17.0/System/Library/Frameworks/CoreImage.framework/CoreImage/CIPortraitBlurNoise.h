@class CIImage, NSNumber, CIVector;

@interface CIPortraitBlurNoise : CIFilter

@property (retain) CIImage *inputImage;
@property (copy, nonatomic) NSNumber *inputLumaNoiseAmpl;
@property (copy, nonatomic) NSNumber *inputLumaNoiseModelCoeff;
@property (copy) CIVector *inputExtent;
@property (copy, nonatomic) NSNumber *inputUseMetal;

- (id)_kernel;
- (id)outputImage;
- (id)_kernelMetal;

@end
