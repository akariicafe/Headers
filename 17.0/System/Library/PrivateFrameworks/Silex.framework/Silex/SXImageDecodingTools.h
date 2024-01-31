@interface SXImageDecodingTools : NSObject

+ (id)sharedInstance;

- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (BOOL)dataIsAnimatedImage:(id)a0;
- (id)imageFromData:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)loadAnimatedImageFromImageData:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (struct CGColorSpace { } *)RGBColorSpace;
- (struct CGColorSpace { } *)P3ColorSpace;
- (struct __CFString { } *)contentTypeForImageData:(id)a0;
- (id)decodeImage:(struct CGImage { } *)a0;
- (id)imageFromData:(id)a0;
- (struct CGImage { } *)newImageByDecodingImage:(struct CGImage { } *)a0 size:(struct CGSize { double x0; double x1; })a1;

@end
