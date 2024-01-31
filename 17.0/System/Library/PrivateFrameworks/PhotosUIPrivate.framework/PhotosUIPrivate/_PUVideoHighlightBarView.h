@class UIColor, UIView;

@interface _PUVideoHighlightBarView : UIView {
    UIView *_barView;
}

@property (retain, nonatomic) UIColor *highlightColor;
@property (nonatomic) BOOL expanded;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } expandedOutsets;

- (void)setExpanded:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
