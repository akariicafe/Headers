@class PDFRevealManagerPrivate;

@interface PDFRevealManager : NSObject {
    PDFRevealManagerPrivate *_private;
}

- (void)reset;
- (void).cxx_destruct;
- (id)PDFRVPresenter;
- (id)PDFRVDocumentContextForPage:(id)a0;
- (id)PDFRVPresentingContextAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithPDFView:(id)a0;

@end
