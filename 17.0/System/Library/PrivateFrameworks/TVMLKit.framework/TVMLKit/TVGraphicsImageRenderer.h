@interface TVGraphicsImageRenderer : NSObject

+ (id)preferredFormat;
+ (id)decodedImage:(id)a0 opaque:(BOOL)a1;
+ (id)formatWithCGImage:(struct CGImage { } *)a0;
+ (id)formatWithUIImage:(id)a0;
+ (id)imageWithSize:(struct CGSize { double x0; double x1; })a0 format:(id)a1 actions:(id /* block */)a2;
+ (id)imageWithSize:(struct CGSize { double x0; double x1; })a0 format:(id)a1 cgContextActions:(id /* block */)a2;
+ (id)imageWithSize:(struct CGSize { double x0; double x1; })a0 alpha:(BOOL)a1 actions:(id /* block */)a2;
+ (id)imageWithSize:(struct CGSize { double x0; double x1; })a0 alpha:(BOOL)a1 cgContextActions:(id /* block */)a2;

@end
