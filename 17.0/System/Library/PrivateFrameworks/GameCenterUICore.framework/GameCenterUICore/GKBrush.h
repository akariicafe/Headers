@interface GKBrush : NSObject <NSCopying>

+ (id)brush;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGSize { double x0; double x1; })sizeForInput:(id)a0;
- (id)drawnImageForSize:(struct CGSize { double x0; double x1; })a0 opaque:(BOOL)a1 input:(id)a2;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withContext:(struct CGContext { } *)a1 input:(id)a2;
- (double)scaleForInput:(id)a0;

@end
