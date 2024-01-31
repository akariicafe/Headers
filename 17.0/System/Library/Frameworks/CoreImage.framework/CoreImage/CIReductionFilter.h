@class CIImage, CIVector;

@interface CIReductionFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputExtent;

+ (id)customAttributes;

- (id)_reduceCrop;
- (id)outputImage;
- (id)offsetAndCrop;

@end
