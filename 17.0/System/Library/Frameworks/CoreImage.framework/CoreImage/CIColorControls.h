@class CIImage, NSNumber;

@interface CIColorControls : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputSaturation;
@property (retain, nonatomic) NSNumber *inputBrightness;
@property (retain, nonatomic) NSNumber *inputContrast;

+ (id)customAttributes;

- (id)outputImage;

@end
