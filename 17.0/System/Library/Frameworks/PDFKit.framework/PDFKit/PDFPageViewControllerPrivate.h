@class PDFTextInputView, PDFPageView, PDFView, PDFRenderingProperties, UIScrollView, PDFPage, UIImage;

@interface PDFPageViewControllerPrivate : NSObject {
    PDFRenderingProperties *renderingProperties;
    PDFView *pdfView;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } pageMargins;
    PDFPage *page;
    UIScrollView *scrollView;
    PDFTextInputView *pageViewContainerView;
    PDFPageView *pageView;
    double minScale;
    double maxScale;
    UIImage *backgroundImage;
    int backgroundQuality;
}

- (void).cxx_destruct;

@end
