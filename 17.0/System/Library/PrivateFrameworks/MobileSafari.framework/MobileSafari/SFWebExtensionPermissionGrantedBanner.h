@class SFThemeColorEffectView, NSArray, _SFDimmingButton, UIStackView, NSLayoutConstraint, UILabel, NSString;

@interface SFWebExtensionPermissionGrantedBanner : SFPinnableBanner {
    SFThemeColorEffectView *_backdrop;
    NSArray *_backdropConstraints;
    NSLayoutConstraint *_titleTopConstraint;
    NSLayoutConstraint *_buttonStackViewWidthConstraint;
    _SFDimmingButton *_resetExtensionPermissionsButton;
    _SFDimmingButton *_allowButton;
    UIStackView *_buttonStackView;
    UILabel *_titleLabel;
    NSArray *_extensions;
    NSString *_grantedHost;
}

@property (copy, nonatomic) id /* block */ resetExtensionPermissionsHandler;
@property (copy, nonatomic) id /* block */ allowButtonHandler;

- (void)setLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)_titleLabelFont;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_dismiss;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_setUpConstraints;
- (id)initWithExtensions:(id)a0 grantedHost:(id)a1;
- (void)_resetExtensionPermissions;
- (void)_setUpAllowButton;
- (void)_setUpBackdrop;
- (void)_setUpButtonStackView;
- (void)_setUpResetExtensionPermissionsButton;
- (void)_setUpTitleLabel;
- (void)invalidateBannerLayout;
- (void)themeDidChange;

@end
