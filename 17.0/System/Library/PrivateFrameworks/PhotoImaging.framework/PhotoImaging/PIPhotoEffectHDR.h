@class CIImage;

@interface PIPhotoEffectHDR : CIFilter

@property (retain) CIImage *inputImage;

+ (id)kernel;

- (void).cxx_destruct;
- (id)outputImage;
- (id)photoEffectName;

@end
