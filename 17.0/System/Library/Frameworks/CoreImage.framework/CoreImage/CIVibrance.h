@class CIImage, NSNumber;

@interface CIVibrance : CIFilter <_CIFilterProperties>

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputAmount;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (id)_initFromProperties:(id)a0;
- (id)_kernelPos;
- (id)_outputProperties;
- (id)_kernelNeg;
- (id)outputImage;

@end
