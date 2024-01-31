@class CIImage, NSNumber;

@interface PIHighKeyHDR : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputStrength;

+ (id)customAttributes;

- (void).cxx_destruct;
- (id)outputImage;
- (id)_highKeyHDR;

@end
