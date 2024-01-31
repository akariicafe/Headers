@class UIImageView;

@interface HUAlbumIconContentView : HUIconContentView

@property (retain, nonatomic) UIImageView *imageView;

- (void)setIconSize:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateIconImage;
- (void)updateWithIconDescriptor:(id)a0 displayStyle:(unsigned long long)a1 animated:(BOOL)a2;

@end
