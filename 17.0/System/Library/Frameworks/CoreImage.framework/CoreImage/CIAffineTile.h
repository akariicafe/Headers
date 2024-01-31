@class CIImage, NSValue;

@interface CIAffineTile : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSValue *inputTransform;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
