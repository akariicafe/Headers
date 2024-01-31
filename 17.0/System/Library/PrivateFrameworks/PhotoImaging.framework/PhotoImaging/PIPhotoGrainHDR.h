@class CIImage, NSNumber;

@interface PIPhotoGrainHDR : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSNumber *inputISO;
@property (copy, nonatomic) NSNumber *inputAmount;
@property (copy, nonatomic) NSNumber *inputSeed;

+ (id)customAttributes;

- (id)_grainBlendAndMixKernel;
- (void).cxx_destruct;
- (id)_paddedTileKernel;
- (id)outputImage;
- (id)_interpolateGrainKernel;

@end
