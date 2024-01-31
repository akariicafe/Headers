@class CIVector, NSString, AVCameraCalibrationData, CIImage, NSNumber;

@interface CIDepthBlurEffect : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputDisparityImage;
@property (retain) CIImage *inputMatteImage;
@property (retain) CIImage *inputHairImage;
@property (retain) CIImage *inputGlassesImage;
@property (retain) CIImage *inputGainMap;
@property (retain, nonatomic) NSNumber *inputAperture;
@property (retain, nonatomic) NSNumber *inputLumaNoiseScale;
@property (retain) CIVector *inputLeftEyePositions;
@property (retain) CIVector *inputRightEyePositions;
@property (retain) CIVector *inputChinPositions;
@property (retain) CIVector *inputNosePositions;
@property (retain, nonatomic) CIVector *inputFocusRect;
@property (retain, nonatomic) NSNumber *inputScaleFactor;
@property (retain, nonatomic) AVCameraCalibrationData *inputCalibrationData;
@property (retain, nonatomic) id inputAuxDataMetadata;
@property (retain, nonatomic) NSString *inputShape;

+ (id)customAttributes;
+ (struct CGImageMetadata { } *)augmentMetadataWithRenderingPropertiesForImage:(id)a0;
+ (int)getDraftMode:(id)a0;
+ (struct CGImageMetadata { } *)metadataFromDictionary:(id)a0 metadata:(struct CGImageMetadata { } *)a1;
+ (struct CGImageMetadata { } *)replaceRenderingParameters:(struct CGImageMetadata { } *)a0 tuningParameters:(id)a1;
+ (id)tuningParametersFromMetadata:(struct CGImageMetadata { } *)a0;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)prewarm:(id)a0;
- (id)outputImage;
- (id)_getFocusRect:(id)a0 focusRect:(id)a1;

@end
