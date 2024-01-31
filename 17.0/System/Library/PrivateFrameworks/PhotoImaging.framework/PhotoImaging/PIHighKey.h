@class CIImage, NSNumber;

@interface PIHighKey : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputStrength;

+ (id)kernel;

- (void).cxx_destruct;
- (id)outputImage;

@end
