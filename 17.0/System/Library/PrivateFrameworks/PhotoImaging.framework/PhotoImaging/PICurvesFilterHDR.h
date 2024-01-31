@class CIImage;

@interface PICurvesFilterHDR : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputTableImage;

- (void).cxx_destruct;
- (id)outputImage;
- (id)curvesKernel;

@end
