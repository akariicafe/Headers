@class CIImage, NSNumber;

@interface CIExposureAdjust : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputEV;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (id)outputImage;

@end
