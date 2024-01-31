@class CIImage, NSNumber;

@interface NUToneTransferFilter : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputSourceImage;
@property (retain) CIImage *inputTargetImage;
@property (retain) NSNumber *inputStrength;

+ (id)toneTransferKernel;

- (void).cxx_destruct;
- (id)outputImage;

@end
