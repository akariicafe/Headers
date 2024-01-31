@class NSArray, UITextRange, NSTextContainer;

@interface _UIBoundingTextRectsSolver : NSObject {
    UITextRange *_range;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _firstRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _middleRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _totalRect;
    BOOL _calculated;
    BOOL _unifyRects;
    NSTextContainer *_textContainer;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } firstLineRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bodyRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } lastLineRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingRect;
@property (readonly, nonatomic) NSArray *rects;

- (void)_calculate;
- (id)description;
- (void).cxx_destruct;
- (void)_calculateRectsUsingLayoutManager:(id)a0;
- (void)_calculateRectsUsingTextLayoutManager:(id)a0;
- (void)_calculateTotalRect;
- (void)_coalesceRectsForRects:(id)a0;
- (id)initWithTextContainer:(id)a0 range:(id)a1 unifyRects:(BOOL)a2;

@end
