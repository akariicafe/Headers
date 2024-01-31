@interface AppleMediaServicesUIDynamic.PlayButton : UIControl {
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ glyphView;
    void /* unknown type, empty encoding */ tapActionBlock;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
}

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)didTap;

@end
