@class UIImage, UIImageView;

@interface _SBSUIOrientedImageView : SBFTouchPassThroughView {
    UIImageView *_imageView;
}

@property (retain, nonatomic) UIImage *portraitImage;
@property (retain, nonatomic) UIImage *landscapeImage;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
