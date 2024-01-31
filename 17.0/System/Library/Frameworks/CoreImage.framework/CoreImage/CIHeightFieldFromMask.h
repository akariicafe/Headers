@class CIImage, NSNumber;

@interface CIHeightFieldFromMask : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputRadius;

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIResetalpha;

@end
