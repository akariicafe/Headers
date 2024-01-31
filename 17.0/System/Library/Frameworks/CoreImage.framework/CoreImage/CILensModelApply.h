@class CIImage;

@interface CILensModelApply : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputLensModelParams;

- (id)outputImage;
- (id)kernel;

@end
