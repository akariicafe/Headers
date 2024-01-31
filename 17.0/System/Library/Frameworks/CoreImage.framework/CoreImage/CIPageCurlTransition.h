@class CIImage, CIVector, NSNumber;

@interface CIPageCurlTransition : CIFilter {
    CIVector *inputExtent;
    NSNumber *inputTime;
    NSNumber *inputAngle;
    NSNumber *inputRadius;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputTargetImage;
@property (retain, nonatomic) CIImage *inputBacksideImage;
@property (retain, nonatomic) CIImage *inputShadingImage;

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIPageCurlTransNoEmap;
- (id)_CIPageCurlTransition;

@end
