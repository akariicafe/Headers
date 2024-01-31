@interface EmojiPoster.GradientColorSlider : UIView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ leftColor;
    void /* unknown type, empty encoding */ rightColor;
    void /* unknown type, empty encoding */ leftColorOffset;
    void /* unknown type, empty encoding */ rightColorOffset;
    void /* unknown type, empty encoding */ gradientLayer;
    void /* unknown type, empty encoding */ leftColorView;
    void /* unknown type, empty encoding */ rightColorView;
    void /* unknown type, empty encoding */ leftColorTapGesture;
    void /* unknown type, empty encoding */ rightColorTapGesture;
    void /* unknown type, empty encoding */ leftColorPanGesture;
    void /* unknown type, empty encoding */ rightColorPanGesture;
    void /* unknown type, empty encoding */ startLeftColorOffset;
    void /* unknown type, empty encoding */ startRightColorOffset;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)leftColorDidPanWithGr:(id)a0;
- (void)leftColorWasTappedWithGr:(id)a0;
- (void)rightColorDidPanWithGr:(id)a0;
- (void)rightColorWasTappedWithGr:(id)a0;

@end
