@interface KNPdfGridExporter : KNPdfPolyExporter

- (id)initWithDocumentRoot:(id)a0;
- (BOOL)drawCurrentPageInContext:(struct CGContext { } *)a0 viewScale:(double)a1 unscaledClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 createPage:(BOOL)a3;
- (void)drawPolyPageBodyInContext:(struct CGContext { } *)a0 scaledClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)incrementPage;

@end
