@class PDFViewLayoutPrivate, PDFDocument;

@interface PDFViewLayout : NSObject {
    PDFViewLayoutPrivate *_private;
}

@property (weak, nonatomic) id delegate;
@property (weak, nonatomic) PDFDocument *document;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromPage:(id)a1;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toPage:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForPage:(id)a0;
- (struct CGSize { double x0; double x1; })contentSizeWithCurrentPage:(id)a0;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromPage:(id)a1 forScaleFactor:(double)a2;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toPage:(id)a1 forScaleFactor:(double)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromPage:(id)a1 forScaleFactor:(double)a2;
- (id)facingPageForPage:(id)a0;
- (long long)functionalDisplayMode;
- (void)generateInternalDocumentGeometry;
- (void)invalidateInternalDocumentGeometry;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedPageBounds:(id)a0;
- (id)pageNearestPoint:(struct CGPoint { double x0; double x1; })a0 currentPage:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })visiblePageRangeInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 currentPage:(id)a1;
- (id)visiblePagesInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 currentPage:(id)a1;

@end
