@class CIVector, NSNumber, CIColor;

@interface CIBlurredRectangleGenerator : CIFilter

@property (retain, nonatomic) CIVector *inputExtent;
@property (retain, nonatomic) NSNumber *inputSigma;
@property (retain, nonatomic) CIColor *inputColor;

+ (id)customAttributes;

- (id)outputImage;

@end
