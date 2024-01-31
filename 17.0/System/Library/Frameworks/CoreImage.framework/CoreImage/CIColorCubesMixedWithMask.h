@class CIImage, NSNumber, NSData;

@interface CIColorCubesMixedWithMask : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputMaskImage;
@property (retain, nonatomic) NSNumber *inputCubeDimension;
@property (copy, nonatomic) NSData *inputCube0Data;
@property (copy, nonatomic) NSData *inputCube1Data;
@property (retain, nonatomic) id inputColorSpace;
@property (copy, nonatomic) NSNumber *inputExtrapolate;

+ (id)customAttributes;

- (id)outputImage;
- (BOOL)_checkInputs;

@end
