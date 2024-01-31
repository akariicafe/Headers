@class CIImage, NSNumber;

@interface NUHDRApplyGainMapFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputGainMap;
@property (retain, nonatomic) NSNumber *inputHeadroom;

+ (id)gainMapLumaToneMappingKernel;

- (void).cxx_destruct;
- (id)outputImage;

@end
