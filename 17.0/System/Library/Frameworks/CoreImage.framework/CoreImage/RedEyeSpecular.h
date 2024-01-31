@class CIImage, NSNumber;

@interface RedEyeSpecular : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputSource;
@property (retain, nonatomic) CIImage *inputSpecularMask;
@property (retain, nonatomic) NSNumber *inputSpecularThreshold;
@property (retain, nonatomic) NSNumber *inputSpecIntensity;
@property (retain, nonatomic) NSNumber *inputDebugFlag;

- (id)outputImage;

@end
