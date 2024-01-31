@interface IHKImageUtils : NSObject

+ (struct CGImage { } *)CopyCGImageTosRGB:(struct CGImage { } *)a0;
+ (struct CGImage { } *)convertCGImageToBGRA_sRGB:(struct CGImage { } *)a0;
+ (struct __CVBuffer { } *)convertCGImageToBGRA_sRGB_PixelBuffer:(struct CGImage { } *)a0;
+ (void)rescaleCVPixelBuffers:(struct __CVBuffer { } *)a0 dest:(struct __CVBuffer { } *)a1;

@end
