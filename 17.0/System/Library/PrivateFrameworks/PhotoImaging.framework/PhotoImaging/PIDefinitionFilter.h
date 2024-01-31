@class CIImage, NSNumber;

@interface PIDefinitionFilter : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputBlurImage;
@property (retain) NSNumber *inputIntensity;

+ (id)definitionKernel;

- (void).cxx_destruct;
- (id)outputImage;

@end
