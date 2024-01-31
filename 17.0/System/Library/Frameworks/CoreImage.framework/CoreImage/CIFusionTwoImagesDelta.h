@class CIImage, NSNumber, CIVector;

@interface CIFusionTwoImagesDelta : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputSecondaryImage;
@property (retain) NSNumber *inputProtectStrength;
@property (retain) NSNumber *inputApertureScaling;
@property (retain) CIVector *inputAdditive;
@property (retain) CIVector *inputSubtractive;
@property (retain) NSNumber *inputMaxBlur;

- (id)outputImage;
- (id)kernel;

@end
