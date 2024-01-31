@interface CRImage_PixelBuffer : CRImage

+ (struct __CVBuffer { } *)_convertPixelBuffer:(struct __CVBuffer { } *)a0 toFormat:(unsigned int)a1 iosurfaceBacking:(BOOL)a2;
+ (void)drawVerticalLineAtXOffset:(double)a0 image:(id)a1;

- (void)dealloc;
- (unsigned long long)height;
- (struct CGImage { } *)cgImage;
- (void)writeToFile:(id)a0;
- (unsigned long long)width;
- (struct __CVBuffer { } *)pixelBuffer;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)imageByDilating;
- (struct __CVBuffer { } *)_pixelBufferFromUrl:(id)a0;
- (struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })createFloatBuffer;
- (id)imageByApplyingBinaryMask:(id)a0;
- (id)imageByConvertingToColorSpace:(int)a0;
- (id)imageByConvertingToColorSpace:(int)a0 forceDataCopy:(BOOL)a1;
- (id)imageByCorrectingFromOrientation:(unsigned int)a0;
- (id)imageByCroppingRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)imageByInvertingIntensity;
- (id)imageByOverlayingRects:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 count:(long long)a1;
- (id)imageByOverlayingRects:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 count:(long long)a1 lineWidth:(double)a2 red:(double)a3 green:(double)a4 blue:(double)a5 alpha:(double)a6;
- (id)imageByPaddingToRatioAndScalingToWidth:(unsigned long long)a0 height:(unsigned long long)a1 paddingMode:(unsigned long long)a2;
- (id)imageByPaddingToRatioAndScalingToWidth:(unsigned long long)a0 height:(unsigned long long)a1 paddingMode:(unsigned long long)a2 alignCenter:(BOOL)a3;
- (id)imageByRotating180;
- (id)imageByRotating90CW;
- (id)imageByScalingToWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (id)initWithContentsOfURL:(id)a0 toColorSpace:(int)a1;
- (struct __CVBuffer { } *)pixelBufferWithScale:(double)a0 paddedToSize:(struct CGSize { double x0; double x1; })a1;
- (struct __CVBuffer { } *)pixelBufferWithScale:(double)a0 paddedToSize:(struct CGSize { double x0; double x1; })a1 adjustedToSize:(struct CGSize { double x0; double x1; } *)a2;
- (struct __CVBuffer { } *)pixelBufferWithScale:(double)a0 paddedToSize:(struct CGSize { double x0; double x1; })a1 adjustedToSize:(struct CGSize { double x0; double x1; } *)a2 paddingMode:(unsigned long long)a3;
- (struct __CVBuffer { } *)pixelBufferWithScale:(double)a0 paddedToSize:(struct CGSize { double x0; double x1; })a1 adjustedToSize:(struct CGSize { double x0; double x1; } *)a2 paddingMode:(unsigned long long)a3 format:(unsigned int)a4;
- (struct __CVBuffer { } *)pixelBufferWithScale:(double)a0 paddedToSize:(struct CGSize { double x0; double x1; })a1 adjustedToSize:(struct CGSize { double x0; double x1; } *)a2 paddingMode:(unsigned long long)a3 format:(unsigned int)a4 hardwareAcceleration:(BOOL)a5 iosurfaceBacking:(BOOL)a6;
- (struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })vImage;

@end
