@class UIView, NSString, ASCLockupView, UITextView, OBPrivacyLinkController, UIButton, PKPaymentSetupFooterView, UIColor;
@protocol PKLegacyButtonInterface;

@interface PKPaymentSetupDockView : UIView {
    UIButton<PKLegacyButtonInterface> *_primaryButton;
    UIColor *_primaryButtonTintColor;
    UITextView *_buttonExplanationTextView;
    PKPaymentSetupFooterView *_footerView;
    BOOL _useAdjacentLayout;
    BOOL _isBuddyiPad;
}

@property (nonatomic) BOOL requiresAdditionalPrimaryButtonPadding;
@property (readonly, nonatomic) long long context;
@property (retain, nonatomic) OBPrivacyLinkController *privacyLink;
@property (nonatomic) double additionalLinkBottomPadding;
@property (retain, nonatomic) UIView *additionalLinkView;
@property (retain, nonatomic) NSString *buttonExplanationText;
@property (readonly, nonatomic) UITextView *buttonExplanationTextView;
@property (retain, nonatomic) UIButton<PKLegacyButtonInterface> *primaryButton;
@property (retain, nonatomic) UIColor *primaryButtonTintColor;
@property (retain, nonatomic) PKPaymentSetupFooterView *footerView;
@property (retain, nonatomic) ASCLockupView *lockUpView;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(long long)a1;
- (struct CGSize { double x0; double x1; })_sizeForButton:(id)a0 constrainedToSize:(struct CGSize { double x0; double x1; })a1;
- (void)pk_applyAppearance:(id)a0;
- (void)setButtonsEnabled:(BOOL)a0;

@end
