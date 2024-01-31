@class CIImage, NSNumber;

@interface CIDissolveTransition : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputTargetImage;
@property (retain, nonatomic) NSNumber *inputTime;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;
- (id)_fadeKernel;

@end
