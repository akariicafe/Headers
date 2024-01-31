@class PDFDocumentView, PDFView, NSDate, PDFDocument, PDFTimer;

@interface PDFScrollViewPrivate : NSObject {
    PDFView *pdfView;
    PDFDocument *document;
    PDFDocumentView *documentView;
    double oldMagnification;
    PDFTimer *boundsUpdateTimer;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } oldBounds;
    BOOL isZooming;
    BOOL scheduledPageSync;
    NSDate *pageSyncDate;
    BOOL forcesTopAlignment;
}

- (void).cxx_destruct;

@end
