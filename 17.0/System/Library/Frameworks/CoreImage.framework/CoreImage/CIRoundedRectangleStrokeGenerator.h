@class CIVector, NSNumber, CIColor;

@interface CIRoundedRectangleStrokeGenerator : CIFilter

@property (retain, nonatomic) CIVector *inputExtent;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) CIColor *inputColor;
@property (retain, nonatomic) NSNumber *inputWidth;

+ (id)customAttributes;

- (id)outputImage;

@end
