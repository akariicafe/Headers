@class CIImage;

@interface CISRGBToneCurveToLinear : CIFilter

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (id)outputImage;

@end
