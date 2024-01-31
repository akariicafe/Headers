@class NSString, SKUIClientContext, SKUILinkButton, SKUIRoundedRectButton, UILabel, UIButton;

@interface SKUIAccountButtonsView : UIView {
    UILabel *_accountCreditsLabel;
    SKUIClientContext *_clientContext;
    SKUIRoundedRectButton *_usernameButton;
    BOOL _ecommerceVisibilityHidden;
    BOOL _giftingVisibilityHidden;
}

@property (copy, nonatomic) NSString *accountCredits;
@property (readonly, nonatomic) SKUIRoundedRectButton *appleIDButton;
@property (readonly, nonatomic) SKUIRoundedRectButton *giftingButton;
@property (readonly, nonatomic) UIButton *redeemButton;
@property (readonly, nonatomic) UIButton *termsAndConditionsButton;
@property (readonly, nonatomic) SKUILinkButton *ECommerceButton;
@property (copy, nonatomic) NSString *ECommerceLinkTitle;
@property (nonatomic, getter=isGiftingHidden) BOOL giftingHidden;
@property (nonatomic, getter=isTermsAndConditionsHidden) BOOL termsAndConditionsHidden;

- (void)dealloc;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_layoutOneRow;
- (void)_layoutTwoRows;
- (id)_newLinkButtonWithTitle:(id)a0;
- (void)_reloadFonts;
- (id)initWithClientContext:(id)a0;
- (BOOL)isEcommerceHidden;
- (BOOL)isRedeemHidden;

@end
