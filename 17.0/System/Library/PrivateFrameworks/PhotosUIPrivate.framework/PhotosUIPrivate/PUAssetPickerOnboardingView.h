@class UIButtonConfiguration, PUAssetPickerBadgeIconView, UIFont, UILabel, UIVisualEffectView, UILayoutGuide, UIButton, UIView, NSLayoutConstraint, NSString, PUAssetPickerPrivacyBadge, NSAttributedString, UITextView, NSArray, UIImageView;
@protocol PUAssetPickerOnboardingViewDelegate;

@interface PUAssetPickerOnboardingView : UIView <UITextViewDelegate> {
    double _lastHeight;
    NSString *_lastContentSizeCategory;
}

@property (readonly, nonatomic) UIFont *titleFont;
@property (readonly, nonatomic) UIFont *bodyFont;
@property (readonly, nonatomic) NSString *clientDisplayName;
@property (readonly, nonatomic) UIView *overlayView;
@property (readonly, nonatomic) UIVisualEffectView *platter;
@property (readonly, nonatomic) NSArray *platterInsetConstraints;
@property (readonly, nonatomic) UILayoutGuide *contentLayoutGuide;
@property (readonly, nonatomic) NSArray *contentCenterConstraints;
@property (readonly, nonatomic) NSArray *contentInsetConstraints;
@property (readonly, nonatomic) UIImageView *largeIconView;
@property (readonly, nonatomic) NSArray *largeIconViewConstraints;
@property (readonly, nonatomic) UITextView *textView;
@property (readonly, nonatomic) NSLayoutConstraint *textViewWidthConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *textViewTopAnchorToLargeIconConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *textViewTopAnchorToPlatterConstraint;
@property (readonly, nonatomic) NSArray *textViewConstraints;
@property (readonly, nonatomic) UIButton *button;
@property (readonly, nonatomic) UIButtonConfiguration *filledButtonConfiguration;
@property (readonly, nonatomic) UIButtonConfiguration *plainButtonConfiguration;
@property (readonly, nonatomic) NSLayoutConstraint *buttonTopConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *buttonBottomConstraint;
@property (readonly, nonatomic) NSArray *buttonConstraints;
@property (readonly, nonatomic) double buttonBottomSpacing;
@property (readonly, nonatomic) UIImageView *attachmentIconView;
@property (readonly, nonatomic) UIImageView *attachmentAnchorView;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } attachmentIconSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } attachmentAnchorSize;
@property (readonly, nonatomic) NSAttributedString *attributedText;
@property (readonly, nonatomic) PUAssetPickerPrivacyBadge *badge;
@property (readonly, nonatomic) NSArray *badgeConstraints;
@property (readonly, nonatomic) PUAssetPickerBadgeIconView *badgeIconView;
@property (readonly, nonatomic) UILabel *badgeLabel;
@property (readonly, nonatomic) NSArray *contentMarginConstraints;
@property (nonatomic) unsigned long long compressionLevel;
@property (weak, nonatomic) id<PUAssetPickerOnboardingViewDelegate> delegate;
@property (weak, nonatomic) UIView *badgeContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMaximumContentSizeCategory:(id)a0;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)layoutSubviews;
- (void)updateTraitsIfNeeded;
- (void)_updateBadgeConstraints;
- (void)_updateTextView;
- (id)initWithClientDisplayName:(id)a0;
- (void)transitionToBadge:(id)a0;

@end
