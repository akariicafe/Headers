@class CIImage, CIVector, NSNumber;

@interface CIPageCurlWithShadowTransition : CIFilter {
    CIVector *inputExtent;
    NSNumber *inputTime;
    NSNumber *inputAngle;
    NSNumber *inputRadius;
    NSNumber *inputShadowSize;
    NSNumber *inputShadowAmount;
    CIVector *inputShadowExtent;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputTargetImage;
@property (retain, nonatomic) CIImage *inputBacksideImage;

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIPageCurlWithShadowTransition;
- (id)_CIPageCurlNoShadowTransition;

@end
