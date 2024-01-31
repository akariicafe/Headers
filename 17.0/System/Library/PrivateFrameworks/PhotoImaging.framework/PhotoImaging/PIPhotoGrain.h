@class CIImage, NSNumber;

@interface PIPhotoGrain : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputLevel;
@property (retain, nonatomic) NSNumber *inputAmount;
@property (retain, nonatomic) NSNumber *inputPhase;

+ (id)customAttributes;

- (void).cxx_destruct;
- (id)outputImage;

@end
