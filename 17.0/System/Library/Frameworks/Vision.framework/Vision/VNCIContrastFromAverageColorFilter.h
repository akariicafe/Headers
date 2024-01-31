@class NSNumber;

@interface VNCIContrastFromAverageColorFilter : VNCIFilter

@property (copy, nonatomic) NSNumber *inputContrast;

- (id)init;
- (void).cxx_destruct;
- (id)outputImage;
- (id)initWithInputParameters:(id)a0;

@end
