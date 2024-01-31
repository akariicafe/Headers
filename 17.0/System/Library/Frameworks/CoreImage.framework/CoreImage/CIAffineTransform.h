@class CIImage, NSValue;

@interface CIAffineTransform : CIFilter <_CIFilterProperties>

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSValue *inputTransform;

+ (id)customAttributes;

- (id)_initFromProperties:(id)a0;
- (id)_outputProperties;
- (id)outputImage;

@end
