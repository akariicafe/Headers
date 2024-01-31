@class CIVector, CIColor;

@interface PIRadialGradient : CIFilter

@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) CIVector *inputPoint0;
@property (retain, nonatomic) CIVector *inputPoint1;
@property (retain, nonatomic) CIColor *inputColor0;
@property (retain, nonatomic) CIColor *inputColor1;

+ (id)customAttributes;

- (void).cxx_destruct;
- (id)outputImage;

@end
