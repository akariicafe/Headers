@class NSData, NSNumber, CIImage;

@interface _PIDynamicLocalLightMapPrepare : CIFilter {
    NSData *inputLightMap;
    NSNumber *inputLightMapWidth;
    NSNumber *inputLightMapHeight;
    CIImage *inputGuideImage;
    NSNumber *inputGuidedFilterEpsilon;
}

+ (id)customAttributes;

- (void).cxx_destruct;
- (id)outputImage;

@end
