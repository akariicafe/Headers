@class NSLock, PDFDocument;

@interface PDFViewLayoutPrivate : NSObject {
    id delegate;
    BOOL delegateKnowsMargins;
    BOOL delegateKnowsDisplayMode;
    BOOL delegateKnowsDisplayAsBook;
    BOOL delegateKnowsDisplayBox;
    BOOL delegateKnowsDisplayRTL;
    BOOL delegateKnowsDisplaysDirection;
    BOOL delegateKnowsDocumentMargins;
    BOOL delegateKnowsIsUsingPageViewController;
    PDFDocument *document;
    unsigned long long pageCount;
    NSLock *pageLayoutLock;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *pageLayoutBounds;
    struct CGSize { double width; double height; } singlePageContinuousSize;
    struct CGSize { double width; double height; } twoUpContinousSize;
    long long cachedContinuousSizeDisplayDirection;
}

- (void).cxx_destruct;

@end
