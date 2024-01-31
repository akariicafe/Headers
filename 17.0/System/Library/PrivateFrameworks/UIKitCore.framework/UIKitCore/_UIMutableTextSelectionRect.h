@class UIBezierPath, NSValue, UITextSelectionRectCustomHandleInfo;

@interface _UIMutableTextSelectionRect : UITextSelectionRect {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rect;
}

@property (nonatomic) long long writingDirection;
@property (nonatomic) BOOL containsStart;
@property (nonatomic) BOOL containsEnd;
@property (nonatomic) BOOL isVertical;
@property (nonatomic, setter=_setDrawsOwnHighlight:) BOOL _drawsOwnHighlight;
@property (retain, nonatomic) UIBezierPath *_path;
@property (retain, nonatomic) UITextSelectionRectCustomHandleInfo *_customHandleInfo;
@property (retain, nonatomic) NSValue *_transform;

+ (id)selectionRectWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromView:(id)a1;

- (unsigned long long)hash;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)_ui_isKindOfTextSelectionRect;
- (void)setRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromView:(id)a1;

@end
