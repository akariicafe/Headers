@class CIImage, NSString, NSArray;

@interface CIRedEyeCorrections : CIFilter <_CIFilterProperties>

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSString *inputCameraModel;
@property (copy, nonatomic) NSArray *inputCorrectionInfo;

- (BOOL)_isIdentity;
- (id)_initFromProperties:(id)a0;
- (void)setDefaults;
- (id)_outputProperties;
- (id)outputImage;

@end
