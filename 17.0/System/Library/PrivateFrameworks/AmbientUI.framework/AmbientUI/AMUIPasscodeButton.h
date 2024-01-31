@class UIFont, NSString, CABackdropLayer, UILabel, UIView;

@interface AMUIPasscodeButton : UIControl {
    UILabel *_titleLabel;
    UIView *_pillView;
    UIView *_backdropView;
    CABackdropLayer *_backdropLayer;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIFont *font;

- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;

@end
