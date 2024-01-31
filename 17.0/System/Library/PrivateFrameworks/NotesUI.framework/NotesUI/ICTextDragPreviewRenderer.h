@class UIImage, NSLayoutManager, ICTTTextStorage;

@interface ICTextDragPreviewRenderer : NSObject {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _firstRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _middleRect;
    UIImage *_image;
    BOOL _calculated;
    BOOL _unifyRects;
}

@property (retain, nonatomic) ICTTTextStorage *textStorage;
@property (nonatomic) struct CGPoint { double x; double y; } originAdjustment;
@property (nonatomic) struct CGPoint { double x; double y; } origin;
@property (nonatomic) double renderOffset;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } renderedGlyphRange;
@property (nonatomic) BOOL isDraggingChecklistItem;
@property (readonly, nonatomic) NSLayoutManager *layoutManager;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } firstLineRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bodyRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } lastLineRect;

- (void)_calculate;
- (void).cxx_destruct;
- (void)_calculateRectsUsingLayoutManager:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_correctlyOffsetBoundingRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rawBoundingRect;
- (id)initWithLayoutManager:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 textStorage:(id)a2;

@end
