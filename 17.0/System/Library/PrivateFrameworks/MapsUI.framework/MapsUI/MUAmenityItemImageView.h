@class UIImageView, NSLayoutConstraint;

@interface MUAmenityItemImageView : MKViewWithHairline {
    UIImageView *_nfcImageView;
    UIImageView *_applePayImageView;
    NSLayoutConstraint *_leadingConstraint;
}

- (void)_setupImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_contentSizeDidChange;

@end
