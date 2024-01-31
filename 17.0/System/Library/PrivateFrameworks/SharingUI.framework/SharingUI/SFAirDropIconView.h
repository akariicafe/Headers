@class UIImageView;

@interface SFAirDropIconView : UIControl {
    UIImageView *_imageView;
}

- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)loadImageIfNeeded;

@end
