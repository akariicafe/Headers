@interface VUIGraphicsImageRenderer : NSObject

+ (id)preferredFormat;
+ (void)SVGImagesWithDatas:(id)a0 format:(id)a1 completion:(id /* block */)a2;
+ (id)_imageWithSize:(struct CGSize { double x0; double x1; })a0 format:(id)a1 actions:(id /* block */)a2;
+ (id)decodedImage:(id)a0 opaque:(BOOL)a1;
+ (id)formatWithCGImage:(struct CGImage { } *)a0;
+ (id)formatWithCGImage:(struct CGImage { } *)a0 preferredFormat:(id)a1;
+ (id)formatWithUIImage:(id)a0;
+ (id)formatWithUIImage:(id)a0 preferredFormat:(id)a1;
+ (id)imageWithSize:(struct CGSize { double x0; double x1; })a0 format:(id)a1 actions:(id /* block */)a2;
+ (id)imageWithSize:(struct CGSize { double x0; double x1; })a0 format:(id)a1 cgContextActions:(id /* block */)a2;

@end
