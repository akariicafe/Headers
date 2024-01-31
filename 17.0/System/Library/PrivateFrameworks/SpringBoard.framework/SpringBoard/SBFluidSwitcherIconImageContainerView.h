@class UIImage, UIImageView;

@interface SBFluidSwitcherIconImageContainerView : UIView {
    UIImageView *_imageView;
}

@property (retain, nonatomic) UIImage *image;

- (void)_configureIconImageView:(id)a0;
- (void)setImage:(id)a0 animated:(BOOL)a1;
- (void)_crossfadeToImage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
