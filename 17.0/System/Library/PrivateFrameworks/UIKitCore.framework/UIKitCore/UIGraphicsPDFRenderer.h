@interface UIGraphicsPDFRenderer : UIGraphicsRenderer

+ (Class)rendererContextClass;
+ (void)prepareCGContext:(struct CGContext { } *)a0 withRendererContext:(id)a1;
+ (struct CGContext { } *)contextWithFormat:(id)a0;

- (id)init;
- (BOOL)writePDFToURL:(id)a0 withActions:(id /* block */)a1 error:(id *)a2;
- (id)PDFDataWithActions:(id /* block */)a0;
- (void)popContext:(id)a0;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 format:(id)a1;
- (void)pushContext:(id)a0;

@end
