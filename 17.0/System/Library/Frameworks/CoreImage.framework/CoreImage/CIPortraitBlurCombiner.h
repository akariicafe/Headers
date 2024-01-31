@class CIImage, NSDictionary;

@interface CIPortraitBlurCombiner : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputBlurImage;
@property (retain) CIImage *inputMatteImage;
@property (retain) NSDictionary *inputTuningParameters;

- (id)outputImage;
- (id)_blendKernel:(BOOL)a0;
- (id)_ourBlendKernelMetal;
- (id)nonMetalKernel;
- (id)nonMetalKernelYCC;

@end
