@class UIColor, UIVisualEffectView, UIView;
@protocol MKHairlineViewStyleProvider;

@interface MKHairlineView : UIView {
    id<MKHairlineViewStyleProvider> _styleProvider;
    UIVisualEffectView *_vibrancyEffectView;
    UIView *_contentView;
}

@property (retain, nonatomic) UIColor *fillColor;

- (void)setBackgroundColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)_fetchVibrancyGroupNameIfNeeded;
- (id)_bestStyleProviderForTraitCollection:(id)a0;
- (void)_createVibrancyEffectViewIfNeeded;
- (void)_invalidateStyleProvider;
- (void)_updateAppearanceForVibrancyChange;
- (void)_updateViewPositioning;

@end
