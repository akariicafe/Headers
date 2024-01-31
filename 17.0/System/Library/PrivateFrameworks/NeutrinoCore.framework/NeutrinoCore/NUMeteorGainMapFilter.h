@class CIImage, NSNumber;

@interface NUMeteorGainMapFilter : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) NSNumber *inputGain;

+ (id)gainMapKernel;

- (void).cxx_destruct;
- (id)outputImage;

@end
