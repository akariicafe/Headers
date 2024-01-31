@class TLKProminenceView, SFColor, UIView, SearchUIGradientView;
@protocol SearchUIBackgroundColorViewProtocol;

@interface SearchUIBackgroundColorView : UICollectionReusableView

@property (retain) UIView *platterView;
@property (retain) TLKProminenceView *prominenceView;
@property (retain) SearchUIGradientView *gradientView;
@property (retain) SearchUIGradientView *gradientViewMaskView;
@property (retain) SearchUIGradientView *colorBlendView;
@property (retain) TLKProminenceView *highlightView;
@property (retain, nonatomic) SFColor *color;
@property (nonatomic) BOOL needsTintForReadability;
@property (nonatomic) BOOL showsPlaceholderPlatterView;
@property (nonatomic) BOOL highlighted;
@property (weak, nonatomic) id<SearchUIBackgroundColorViewProtocol> delegate;

+ (void)updateAppearance:(id)a0 forViews:(id)a1 withColors:(id)a2;

- (void)tlk_updateForAppearance:(id)a0;
- (void)_setContinuousCornerRadius:(double)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)tlks_setCornerRadius:(double)a0 withStyle:(id)a1;
- (id)viewsToOverrideAppearance;

@end
