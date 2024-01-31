@interface TSTCheckboxRenderer : NSObject

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameWithViewScale:(double)a0 contentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameWithViewScale:(double)a0 contentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 checked:(BOOL)a2 outCheckboxImage:(out id *)a3 outCheckboxSize:(out struct CGSize { double x0; double x1; } *)a4;
+ (id)imageForScale:(double)a0 checked:(BOOL)a1 outDrawingScale:(out double *)a2;
+ (void)renderCheckbox:(BOOL)a0 viewScale:(double)a1 intoContext:(struct CGContext { } *)a2 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 color:(id)a4;

@end
