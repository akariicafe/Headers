@interface TelephonyUI.MessageIndicatorView : UIView {
    void /* unknown type, empty encoding */ padding;
    void /* unknown type, empty encoding */ cornerRadius;
    void /* unknown type, empty encoding */ textPadding;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ durationLabel;
    void /* unknown type, empty encoding */ recordImageView;
    void /* unknown type, empty encoding */ location;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundView;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ tapHandler;
}

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)handleTapGesture;

@end
