@class CIImage, NSData, NSNumber;

@interface PILocalLightFilterHDR : CIFilter {
    CIImage *inputImage;
    CIImage *inputGuideImage;
    NSData *inputLightMap;
    CIImage *inputLightMapImage;
    NSNumber *inputLightMapWidth;
    NSNumber *inputLightMapHeight;
    NSNumber *inputLocalLight;
    NSNumber *inputSmartShadows;
}

+ (id)customAttributes;

- (void).cxx_destruct;
- (id)outputImage;
- (id)_polyKernelHDR;
- (id)_shadowKernelHDR;

@end
