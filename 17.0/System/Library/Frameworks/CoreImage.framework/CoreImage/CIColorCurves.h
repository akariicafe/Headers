@class CIImage, NSData, CIVector;

@interface CIColorCurves : CIFilter {
    CIImage *_curvesImage;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSData *inputCurvesData;
@property (retain, nonatomic) CIVector *inputCurvesDomain;
@property (retain, nonatomic) id inputColorSpace;

+ (id)customAttributes;

- (void)dealloc;
- (id)_kernel;
- (id)outputImage;
- (BOOL)_checkInputs;
- (id)curvesImage;

@end
