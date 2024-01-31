@interface AKPDFDocumentWrapper : NSObject {
    struct CGPDFDocument { } *_pdfDocument;
}

- (id)init;
- (void)dealloc;
- (struct CGPDFDocument { } *)pdfDocument;
- (id)initWithPDF:(struct CGPDFDocument { } *)a0;

@end
