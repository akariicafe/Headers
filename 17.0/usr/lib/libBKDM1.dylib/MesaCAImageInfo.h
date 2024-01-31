@class NSNumber, NSData;

@interface MesaCAImageInfo : NSObject

@property struct { unsigned int type; unsigned char uuid[16]; } source;
@property (retain) NSNumber *assessment;
@property (retain) NSNumber *feedback;
@property (retain) NSNumber *tidButtonState;
@property (retain) NSNumber *imageProblemClass;
@property (retain) NSNumber *wakeOnMenuPinUsed;
@property (retain) NSNumber *imagePixelOutlierCount;
@property (retain) NSNumber *imageContrast;
@property (retain) NSNumber *imageBrightness;
@property (retain) NSNumber *imageFeatureStrength;
@property (retain) NSNumber *imageContrastNorm;
@property (retain) NSNumber *imageBrightnessNorm;
@property (retain) NSNumber *imageFeatureStrengthNorm;
@property (retain) NSNumber *driveVoltage;
@property (retain) NSData *deblurringInfo;

+ (id)imageInfoFromImageProcessingResult:(id)a0;

- (void).cxx_destruct;

@end
