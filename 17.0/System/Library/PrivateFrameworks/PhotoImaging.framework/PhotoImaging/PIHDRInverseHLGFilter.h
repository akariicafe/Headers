@class CIImage;

@interface PIHDRInverseHLGFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;

+ (id)inverseHLGLumaBlendingKernel;

- (void).cxx_destruct;
- (id)outputImage;

@end
