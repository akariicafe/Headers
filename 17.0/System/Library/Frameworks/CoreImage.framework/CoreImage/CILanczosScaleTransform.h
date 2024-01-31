@class CIImage, NSNumber;

@interface CILanczosScaleTransform : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputScale;
@property (retain, nonatomic) NSNumber *inputAspectRatio;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (id)outputImage;
- (id)outputImageNewScaleX:(double)a0 scaleY:(double)a1;
- (id)outputImageOldScaleX:(double)a0 scaleY:(double)a1;

@end
