@interface MRImageUtilities : NSObject

+ (struct CGSize { double x0; double x1; })imageDimensionsForImageData:(id)a0 error:(id *)a1;
+ (id)resizeImageData:(id)a0 forFittingSize:(struct CGSize { double x0; double x1; })a1 error:(id *)a2;
+ (struct CGSize { double x0; double x1; })sizeFromSource:(struct CGImageSource { } *)a0 error:(id *)a1;
+ (long long)subsampleFactorForMaxPixelSize:(long long)a0 imageSize:(struct CGSize { double x0; double x1; })a1;

@end
