@class UIImage, UIImageView, UIView;

@interface SBHomeScreenMaterialView : UIView {
    UIView *_whiteTintView;
    UIImageView *_xColorBurnView;
    UIImageView *_xPlusDView;
    UIView *_highlightView;
    struct CGSize { double width; double height; } _imageSize;
}

@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) double brightness;
@property (readonly, nonatomic) UIView *backgroundView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } backgroundInsets;
@property (retain, nonatomic) UIImage *foregroundImage;

+ (id)colorBurnContentImageForImage:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundView:(id)a1 foregroundImage:(id)a2;
- (void)setImageSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_addHighlightViewIfNecessary;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setLegibilityStyle:(long long)a0;

@end
