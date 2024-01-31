@interface VNHeatMapUtilities : NSObject

+ (id)boundingBoxesFromFloat32ImageBuffer:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 thresholds:(id)a1 error:(id *)a2;
+ (id)boundingBoxesFromFloat32ImageBuffer:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 thresholds:(id)a1 relativeToMaximum:(BOOL)a2 applySmoothing:(BOOL)a3 originalImageSize:(struct CGSize { double x0; double x1; })a4 sigmaX:(float)a5 sigmaY:(float)a6 nStd:(float)a7 error:(id *)a8;
+ (id)boundingBoxesFromFloat32PixelBuffer:(struct __CVBuffer { } *)a0 thresholds:(id)a1 relativeToMaximum:(BOOL)a2 applySmoothing:(BOOL)a3 originalImageSize:(struct CGSize { double x0; double x1; })a4 sigmaX:(float)a5 sigmaY:(float)a6 nStd:(float)a7 error:(id *)a8;
+ (float)maximumValueFromFloat32ImageBuffer:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0;
+ (id)significantRegionsFromFloat32ImageBuffer:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 threshold:(float)a1;
+ (id)significantRegionsFromFloat32ImageBuffer:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 threshold:(float)a1 relativeToMaximum:(BOOL)a2;
+ (id)significantRegionsFromFloat32PixelBuffer:(struct __CVBuffer { } *)a0 threshold:(float)a1 relativeToMaximum:(BOOL)a2 error:(id *)a3;
+ (BOOL)smoothedFloat32ImageBuffer:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 fromImageBuffer:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a1 originalImageSize:(struct CGSize { double x0; double x1; })a2 sigmaX:(float)a3 sigmaY:(float)a4 nStd:(float)a5;

@end
