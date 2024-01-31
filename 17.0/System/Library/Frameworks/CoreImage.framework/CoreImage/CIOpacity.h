@class CIImage, NSNumber;

@interface CIOpacity : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputOpacity;

+ (id)customAttributes;

- (id)outputImage;

@end
