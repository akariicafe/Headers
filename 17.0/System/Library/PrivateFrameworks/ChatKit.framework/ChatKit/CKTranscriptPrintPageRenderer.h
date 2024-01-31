@class UIScrollView, CKPrintTranscriptCollectionViewController;

@interface CKTranscriptPrintPageRenderer : UIPrintPageRenderer

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) CKPrintTranscriptCollectionViewController *transcriptCollectionViewController;
@property long long numberOfPagesForCurrentConfiguration;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentPrintableRect;

+ (void)renderViewWithText:(id)a0 withOffsetVertical:(double)a1;

- (void).cxx_destruct;
- (long long)numberOfPages;
- (long long)__computedNumberOfPagesForPrintableRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_determineNumberOfPages;
- (void)drawPageAtIndex:(long long)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)drawScrollViewAtIndex:(long long)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithTranscriptCollectionViewController:(id)a0;

@end
