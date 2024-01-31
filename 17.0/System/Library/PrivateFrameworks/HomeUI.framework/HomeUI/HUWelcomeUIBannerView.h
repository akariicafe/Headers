@class UIImageView, NSArray, UIView;

@interface HUWelcomeUIBannerView : HUBannerView

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIView *welcomeFooterView;
@property (retain, nonatomic) NSArray *layoutConstraints;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_subclass_updateConstraints;
- (void)layoutOptionsDidChange;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
