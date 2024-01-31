@interface SMGuidedWorkoutBackgroundView : UIView {
    void /* unknown type, empty encoding */ cornerRadius;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ currentBounds;
    void /* unknown type, empty encoding */ gradientLayer;
    void /* unknown type, empty encoding */ vignetteView;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (id)initWithCornerRadius:(double)a0;
- (void)setImage:(id)a0 WithMediaType:(id)a1;
- (void)updateWithActiveAppearance:(long long)a0;

@end
