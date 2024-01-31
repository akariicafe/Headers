@class CIImage, CIVector;

@interface CICrop : CIFilter <_CIFilterProperties>

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputRectangle;

+ (id)customAttributes;

- (id)_initFromProperties:(id)a0;
- (id)_outputProperties;
- (id)outputImage;

@end
