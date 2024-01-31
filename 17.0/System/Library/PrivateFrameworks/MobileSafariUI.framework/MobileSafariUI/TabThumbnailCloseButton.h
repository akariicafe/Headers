@class UIColor, UIVisualEffectView, UIImage, UIImageView;

@interface TabThumbnailCloseButton : UIButton {
    UIVisualEffectView *_backdropEffectView;
    UIVisualEffectView *_vibrantEffectView;
    UIImageView *_imageView;
}

@property (class, readonly, nonatomic) UIColor *backgroundColor;
@property (class, readonly, nonatomic) double defaultButtonSize;

@property (retain, nonatomic) UIImage *image;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
