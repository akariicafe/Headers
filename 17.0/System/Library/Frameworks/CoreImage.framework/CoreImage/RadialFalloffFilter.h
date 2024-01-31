@class CIVector, CIImage, NSNumber;

@interface RadialFalloffFilter : CIFilter

@property (retain, nonatomic) CIVector *inputExtent;
@property (retain, nonatomic) CIImage *inputCenter;
@property (retain, nonatomic) NSNumber *inputFalloff;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputAnisotropic;

- (id)outputImage;

@end
