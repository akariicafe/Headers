@class CIImage, NSNumber;

@interface CIPseudoMedian : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputWeights;

+ (id)customAttributes;

- (id)outputImage;

@end
