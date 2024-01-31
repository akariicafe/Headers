@class UIImageView, UIImage;

@interface MUImageView : UIView {
    UIImageView *_fallbackImageView;
}

@property (readonly, nonatomic) UIImageView *contentImageView;
@property (nonatomic) UIImage *fallbackImage;
@property (nonatomic) UIImage *image;

- (void)setImage:(id)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_setupSubviews;
- (void)_updateAppearance;

@end
