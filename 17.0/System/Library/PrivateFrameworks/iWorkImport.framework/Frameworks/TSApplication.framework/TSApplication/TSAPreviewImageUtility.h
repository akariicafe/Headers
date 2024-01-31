@interface TSAPreviewImageUtility : NSObject

+ (void)drawInContext:(struct CGContext { } *)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 image:(struct CGImage { } *)a2 imageSize:(struct CGSize { double x0; double x1; })a3 scaledSize:(struct CGSize { double x0; double x1; })a4 scale:(double)a5 flip:(BOOL)a6;
+ (BOOL)imageIsOpaque:(struct CGImage { } *)a0;
+ (struct CGImage { } *)newPrerenderedImageFromImage:(struct CGImage { } *)a0;
+ (struct CGImage { } *)newPrerenderedImageFromImage:(struct CGImage { } *)a0 preserveAlpha:(BOOL)a1;
+ (id)scaleImage:(struct CGImage { } *)a0 toSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;

@end
