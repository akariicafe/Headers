@class PDFPage, PDFDocument;

@interface PDFDestinationPrivate : NSObject {
    PDFDocument *document;
    PDFPage *page;
    struct CGPDFArray { } *array;
    int type;
    double left;
    double top;
    double right;
    double bottom;
    double zoom;
}

- (void).cxx_destruct;

@end
