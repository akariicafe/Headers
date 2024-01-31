@class PDFPage;

@interface PDFTextSelectionRect : UITextSelectionRect {
    PDFPage *_page;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rect;
    BOOL _isStartingRect;
    BOOL _isEndingRect;
}

- (BOOL)isVertical;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)description;
- (void).cxx_destruct;
- (BOOL)containsEnd;
- (BOOL)containsStart;
- (long long)writingDirection;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 onPage:(id)a1;
- (void)setIsEndingRect:(BOOL)a0;
- (void)setIsStartingRect:(BOOL)a0;

@end
