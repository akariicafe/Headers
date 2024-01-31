@class PDFTextWidgetTextView, PDFView, PDFPageView, UIView, PDFAnnotation;

@interface PDFKitTextViewPrivate : NSObject {
    UIView *topLevelView;
    PDFTextWidgetTextView *textView;
    PDFView *pdfView;
    PDFPageView *pdfPageView;
    PDFAnnotation *annotation;
}

- (void).cxx_destruct;

@end
