@class NSArray, UIColor;

@interface _UITextItemHighlightView : _UIShapeView

@property (copy, nonatomic) NSArray *textLineRects;
@property (retain, nonatomic) UIColor *fillColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double horizontalPadding;
@property (nonatomic) double verticalPadding;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_padding;
- (void)_updateShape;

@end
