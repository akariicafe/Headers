@class NSArray, VUILabel, VUIProductUberBackgroundView, UIView, VUISeparatorView;

@interface VUIChannelBannerView : VUIBaseView

@property (retain, nonatomic) VUISeparatorView *separatorView;
@property (retain, nonatomic) UIView *bgColorView;
@property (retain, nonatomic) UIView *appleTVChannelLogoView;
@property (retain, nonatomic) UIView *subscribeButton;
@property (retain, nonatomic) VUILabel *disclaimerTextLabel;
@property (retain, nonatomic) UIView *descriptionTextView;
@property (retain, nonatomic) NSArray *textLabels;
@property (retain, nonatomic) VUIProductUberBackgroundView *bgImageView;
@property (readonly, nonatomic) double topThreshold;
@property (nonatomic) double logoHeight;
@property (nonatomic) BOOL isDescriptionPreferredOnPhoneSizeClass;
@property (nonatomic) double height;
@property (nonatomic) double subscribeButtonHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)_isSubscribed;
- (void)setVuiBackgroundColor:(id)a0;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)_layoutLabels:(id)a0 withOrigin:(struct CGPoint { double x0; double x1; })a1 maxWidth:(double)a2;
- (struct CGSize { double x0; double x1; })_layoutSubviewsWithSize:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (double)_subscribeButtonHeight;

@end
