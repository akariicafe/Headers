@class CIImage, NSNumber;

@interface CICheapBilateral : CIFilter {
    CIImage *inputImage;
}

@property (retain, nonatomic) CIImage *inputSource;
@property (retain, nonatomic) NSNumber *inputSigmaSpace;
@property (retain, nonatomic) NSNumber *inputSigmaRange;

+ (id)customAttributes;

- (id)outputImage;

@end
