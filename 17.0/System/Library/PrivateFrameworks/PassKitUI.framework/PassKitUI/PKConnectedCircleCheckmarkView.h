@class UIColor, UIImageView;

@interface PKConnectedCircleCheckmarkView : UIView {
    UIImageView *_imageView;
}

@property (readonly, nonatomic) UIColor *checkmarkTintColor;
@property (readonly, nonatomic) UIColor *checkmarkBackgroundColor;

- (void)setBackgroundColor:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (id)initWithCheckmarkTintColor:(id)a0 checkmarkBackgroundColor:(id)a1;

@end
