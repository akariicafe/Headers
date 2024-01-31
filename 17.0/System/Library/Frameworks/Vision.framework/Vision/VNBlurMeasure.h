@interface VNBlurMeasure : NSObject

+ (BOOL)computeBlurScore:(float *)a0 usingBlurSignature:(id)a1 insetFactor:(float)a2 imageROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 error:(id *)a4;
+ (BOOL)computeApproximateBlurScore:(float *)a0 onGrayscaleImage:(struct __CVBuffer { } *)a1 sampledPixelsCount:(int)a2 insetFactor:(float)a3 error:(id *)a4;
+ (BOOL)computeApproximateBlurScore:(float *)a0 onRGBAImage:(struct __CVBuffer { } *)a1 sampledPixelsCount:(int)a2 insetFactor:(float)a3 error:(id *)a4;
+ (BOOL)computeBlurScore:(float *)a0 onGrayscaleImage:(struct __CVBuffer { } *)a1 andWithRegionOfInterestInImageCoordinates:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 andRegionOfInterestInsetFactor:(float)a3 error:(id *)a4;
+ (BOOL)computeBlurScore:(float *)a0 onGrayscaleImage:(struct __CVBuffer { } *)a1 insetFactor:(float)a2 error:(id *)a3;
+ (BOOL)computeEdgeWidthBlurScore:(float *)a0 onGrayscaleImage:(struct __CVBuffer { } *)a1 error:(id *)a2;

@end
