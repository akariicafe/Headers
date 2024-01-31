@class UIImageView, UIImage, UIView, PREditingButtonMaterialView, MTMaterialView;

@interface PREditingButton : UIButton

@property (readonly, nonatomic) long long style;
@property (retain, nonatomic) MTMaterialView *backgroundView;
@property (readonly, nonatomic) PREditingButtonMaterialView *materialView;
@property (readonly, nonatomic) UIView *backgroundColorView;
@property (readonly, nonatomic) UIImageView *contentImageView;
@property (readonly, nonatomic) UIImage *defaultContentImage;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } backgroundInsets;

- (void)setHighlighted:(BOOL)a0;
- (void)setEnabled:(BOOL)a0;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_didInvalidateContentImageMetrics;
- (id)initWithStyle:(long long)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 primaryAction:(id)a2;

@end
