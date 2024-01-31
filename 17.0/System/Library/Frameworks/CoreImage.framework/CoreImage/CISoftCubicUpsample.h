@class CIImage, NSNumber;

@interface CISoftCubicUpsample : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputScale;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (struct vec2 { union { float x0; float x1; } x0; union { float x0; float x1; } x1; })_scale;
- (id)outputImage;

@end
