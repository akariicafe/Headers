@class CIImage, NSNumber;

@interface PIIPTHueChromaColorFilter : PIIPTHueChromaFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputHueTarget;
@property (retain, nonatomic) NSNumber *inputHueRange;
@property (retain, nonatomic) NSNumber *inputChromaMin;
@property (retain, nonatomic) NSNumber *inputHueIsNormalized;

+ (id)filterHueKernel;

- (void).cxx_destruct;
- (id)outputImage;

@end
