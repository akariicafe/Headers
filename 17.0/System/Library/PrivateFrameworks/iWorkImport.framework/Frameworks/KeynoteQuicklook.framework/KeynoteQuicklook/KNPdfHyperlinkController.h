@class NSArray;

@interface KNPdfHyperlinkController : TSAPdfHyperlinkController {
    NSArray *_slides;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _canvasRect;
}

@property (nonatomic) long long currentSlideNumber;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })canvasRect;
- (void)addHyperlinksForReps:(id)a0 targetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 context:(struct CGContext { } *)a2;
- (id)currentSlideName;
- (id)destinationFromUrl:(id)a0;
- (long long)getFirstNonHiddenIndex:(unsigned long long)a0 delta:(long long)a1;
- (BOOL)ignoreUrl:(id)a0;
- (id)initWithShow:(id)a0;
- (BOOL)isDestination:(id)a0;
- (id)nameForSlide:(id)a0;
- (id)nameFromIndex:(unsigned long long)a0;

@end
