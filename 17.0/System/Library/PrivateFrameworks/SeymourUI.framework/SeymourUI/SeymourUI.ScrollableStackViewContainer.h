@interface SeymourUI.ScrollableStackViewContainer : UIView <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ displayStyle;
    void /* unknown type, empty encoding */ platform;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ stackView;
    void /* unknown type, empty encoding */ scrollViewInsets;
    void /* unknown type, empty encoding */ stackViewCenterYConstraint;
    void /* unknown type, empty encoding */ visualEffectView;
}

- (void)scrollViewDidScroll:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;

@end
