@class UIColor, NSString, UIImageView, UIImage, UIView, CAGradientLayer, UILabel;

@interface PKSplashImageHeaderView : UIView {
    UIView *_fallbackColorView;
    UIImageView *_backgroundImageView;
    CAGradientLayer *_gradientLayer;
    UIImageView *_iconImageView;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UILabel *_attributionLabel;
}

@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *secondaryText;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (nonatomic) BOOL showsGradientOverlay;
@property (retain, nonatomic) UIColor *fallbackColor;
@property (copy, nonatomic) NSString *attributionProviderName;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setBackgroundImage:(id)a0 animated:(BOOL)a1;

@end
