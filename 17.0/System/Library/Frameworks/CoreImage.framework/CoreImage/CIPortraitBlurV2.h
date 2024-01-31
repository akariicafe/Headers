@class NSString, NSDictionary, CIImage, NSNumber;

@interface CIPortraitBlurV2 : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputMatteImage;
@property (retain) CIImage *inputBlurmapImage;
@property (copy, nonatomic) NSNumber *inputLumaNoiseScale;
@property (copy, nonatomic) NSNumber *inputScale;
@property (copy, nonatomic) NSNumber *inputAperture;
@property (retain, nonatomic) NSDictionary *inputTuningParameters;
@property (retain, nonatomic) NSString *inputShape;
@property (retain, nonatomic) NSNumber *inputDraftMode;

+ (id)customAttributes;

- (id)outputImage;
- (double)effectiveScale;
- (id)sensorSize;

@end
