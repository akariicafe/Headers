@class NSData, NSNumber, CIImage;

@interface PILocalLightMapPrepareHDR : CIFilter {
    NSData *inputLightMap;
    NSNumber *inputLightMapWidth;
    NSNumber *inputLightMapHeight;
    CIImage *inputGuideImage;
}

+ (id)customAttributes;

- (void).cxx_destruct;
- (id)outputImage;

@end
