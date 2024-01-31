@class CIImage, CIVector, NSNumber;

@interface CITriangleKaleidoscope : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputPoint;
@property (retain, nonatomic) NSNumber *inputSize;
@property (retain, nonatomic) NSNumber *inputRotation;
@property (retain, nonatomic) NSNumber *inputDecay;

+ (id)customAttributes;

- (id)outputImage;
- (id)_colorKernel;
- (id)_geomKernel;

@end
