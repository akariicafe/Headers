@class CIImage;

@interface PIFalseColorHDRDebug : CIFilter

@property double inputCutoff;
@property (retain) CIImage *inputImage;

+ (id)kernel;

- (void).cxx_destruct;
- (id)outputImage;

@end
