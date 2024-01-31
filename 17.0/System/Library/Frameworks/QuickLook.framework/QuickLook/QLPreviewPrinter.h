@protocol QLPrintingProtocol;

@interface QLPreviewPrinter : UIPrintPageRenderer

@property (readonly) id<QLPrintingProtocol> printer;

- (void).cxx_destruct;
- (long long)numberOfPages;
- (void)drawPageAtIndex:(long long)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithPreviewPrinter:(id)a0;

@end
