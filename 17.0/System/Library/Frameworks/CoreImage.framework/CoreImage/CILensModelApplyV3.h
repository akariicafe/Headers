@class CIImage;

@interface CILensModelApplyV3 : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputLensModelImage;

- (id)outputImage;
- (id)kernel;

@end
