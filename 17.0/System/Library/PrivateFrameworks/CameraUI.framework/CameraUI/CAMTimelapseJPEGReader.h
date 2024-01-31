@interface CAMTimelapseJPEGReader : NSObject

+ (id)_decodeOptionsWithMaxPixelSize:(long long)a0 applyTransform:(BOOL)a1 useBGRA:(BOOL)a2;
+ (BOOL)_hasExifRotation:(id)a0;
+ (struct CGImage { } *)createCGImageFromData:(id)a0 applyTransform:(BOOL)a1 maxPixelSize:(long long)a2 useBGRA:(BOOL)a3;
+ (struct __CVBuffer { } *)createPixelBufferFromData:(id)a0 applyTransform:(BOOL)a1 maxPixelSize:(long long)a2 useBGRA:(BOOL)a3;
+ (struct __CVBuffer { } *)createPixelBufferFromData:(id)a0 applyTransform:(BOOL)a1 maxPixelSize:(long long)a2 useBGRA:(BOOL)a3 cleanApertureSize:(struct CGSize { double x0; double x1; })a4;
+ (id)newDataFromFilePath:(id)a0;

@end
