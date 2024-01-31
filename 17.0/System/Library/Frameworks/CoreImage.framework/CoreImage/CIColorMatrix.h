@class CIImage, CIVector;

@interface CIColorMatrix : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputRVector;
@property (retain, nonatomic) CIVector *inputGVector;
@property (retain, nonatomic) CIVector *inputBVector;
@property (retain, nonatomic) CIVector *inputAVector;
@property (retain, nonatomic) CIVector *inputBiasVector;

+ (id)customAttributes;

- (id)outputImage;

@end
