@class CIImage, NSNumber;

@interface PILocalContrastHDR : CIFilter {
    CIImage *inputImage;
    NSNumber *inputStrength;
    NSNumber *inputScale;
}

+ (id)customAttributes;

- (void).cxx_destruct;
- (id)outputImage;
- (id)_kernelLocalContrast;

@end
