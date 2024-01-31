@class NSString, _SFDimmingButton, UIImageView, SFThemeColorEffectView, UIButton, NSLayoutConstraint, UILabel, UIColor;

@interface SFLinkBanner : SFPinnableBanner {
    SFThemeColorEffectView *_backdrop;
    NSLayoutConstraint *_titleTopConstraint;
    NSLayoutConstraint *_titleLeadingConstraint;
    NSLayoutConstraint *_messageTopConstraint;
    NSLayoutConstraint *_messageBottomConstraint;
    UIButton *_dismissButton;
    NSLayoutConstraint *_iconLeadingConstraintToSuperview;
    NSLayoutConstraint *_backdropTopConstraint;
}

@property (class, readonly, nonatomic) double iconHeight;

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) NSString *messageLabelText;
@property (retain, nonatomic) _SFDimmingButton *openButton;
@property (copy, nonatomic) id /* block */ openActionHandler;
@property (nonatomic) BOOL shouldHideIcon;
@property (readonly, nonatomic) UIColor *preferredButtonBackgroundColor;
@property (readonly, nonatomic) UIColor *preferredButtonTintColor;
@property (copy, nonatomic) id /* block */ dismissButtonHandler;
@property (nonatomic) double backdropTopExtension;

- (void)setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)_open;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)init;
- (id)_titleLabelFont;
- (void)contentSizeCategoryDidChange;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_dismiss;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_messageLabelFont;
- (void)_setShowsDismissButton:(BOOL)a0;
- (void)invalidateBannerLayout;
- (void)themeDidChange;

@end
