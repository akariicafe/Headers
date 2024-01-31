@class UIColor, UIImageView, UIImage, UIView;

@interface PUPhotoEditButtonMaterialView : UIView {
    UIImageView *_imageView;
    UIView *_highlightView;
}

@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) double brightness;
@property (readonly, nonatomic) UIView *backgroundView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } backgroundInsets;
@property (retain, nonatomic) UIImage *foregroundImage;
@property (retain, nonatomic) UIColor *backgroundColor;

+ (id)colorBurnContentImageForImage:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundView:(id)a1 foregroundImage:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_addHighlightViewIfNecessary;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setBackgroundEnabled:(BOOL)a0;

@end
