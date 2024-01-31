@class CIImage, NSNumber;

@interface CIAreaRedRadialCentroid : CIAreaRedCentroid

@property (retain, nonatomic) CIImage *inputCenter;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputRadialMode;
@property (retain, nonatomic) NSNumber *inputMinWeight;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernelGaussian;
- (id)_kernelCenter;
- (id)_kernelDisk;

@end
