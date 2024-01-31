@class SFThemeColorEffectView, NSArray, _SFDimmingButton, UIStackView, UILabel, NSLayoutConstraint;

@interface SFPrivateBrowsingPrivacyProtectionsBanner : SFPinnableBanner {
    SFThemeColorEffectView *_backdrop;
    NSArray *_backdropConstraints;
    NSLayoutConstraint *_titleTopConstraint;
    _SFDimmingButton *_reducePrivacyProtectionsButton;
    _SFDimmingButton *_dismissButton;
    UIStackView *_buttonStackView;
    NSLayoutConstraint *_buttonStackViewWidthConstraint;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ reducePrivacyProtectionsActionHandler;
@property (copy, nonatomic) id /* block */ dismissButtonHandler;

- (void)setLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_dismiss;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_reducePrivacyProtections;
- (id)_titleLabelFont:(BOOL)a0;
- (void)_updateButtonStackViewAxisIfNeeded;
- (void)invalidateBannerLayout;
- (void)themeDidChange;

@end
