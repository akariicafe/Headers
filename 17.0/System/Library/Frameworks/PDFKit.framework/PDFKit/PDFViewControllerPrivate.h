@class PDFView, UIEditMenuInteraction, CALayer, PDFAnnotation;

@interface PDFViewControllerPrivate : NSObject {
    PDFView *view;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewMarquee;
    CALayer *marqueeEffect;
    PDFAnnotation *activeAnnotation;
    UIEditMenuInteraction *editMenuInteraction;
    unsigned long long textSelectionMenu;
    double longPressGestureStartTime;
    BOOL didPostPDFExtensionViewAnnotationLongPress;
}

- (void).cxx_destruct;

@end
