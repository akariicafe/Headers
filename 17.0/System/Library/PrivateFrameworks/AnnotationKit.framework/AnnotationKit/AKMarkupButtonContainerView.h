@class UIButton;

@interface AKMarkupButtonContainerView : UIView

@property (retain, nonatomic) UIButton *button;
@property (nonatomic) BOOL selected;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })_buttonSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateForMiniBarState:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
