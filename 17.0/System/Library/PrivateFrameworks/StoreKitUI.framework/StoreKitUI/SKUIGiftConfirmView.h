@class UIView, SKUIGiftConfirmLabeledValue, UILabel, SKUIGiftConfiguration, UIButton;

@interface SKUIGiftConfirmView : UIView {
    SKUIGiftConfirmLabeledValue *_amountView;
    UILabel *_chargeDisclaimerLabel;
    UILabel *_confirmYourOrderLabel;
    SKUIGiftConfirmLabeledValue *_senderView;
    SKUIGiftConfiguration *_giftConfiguration;
    SKUIGiftConfirmLabeledValue *_itemView;
    SKUIGiftConfirmLabeledValue *_messageView;
    SKUIGiftConfirmLabeledValue *_recipientsView;
    UIView *_rule1;
    UIView *_rule2;
    UIView *_rule3;
    UIView *_rule4;
    UIView *_rule5;
    UIView *_rule6;
    SKUIGiftConfirmLabeledValue *_fromView;
    SKUIGiftConfirmLabeledValue *_sendOnView;
    UIButton *_termsButton;
    SKUIGiftConfirmLabeledValue *_themeNameView;
    UILabel *_totalLabel;
}

@property (readonly, nonatomic) UIButton *termsButton;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_newBoldLabelWithSize:(double)a0;
- (id)_newLightLabelWithSize:(double)a0 alpha:(double)a1;
- (id)_termsButton;
- (id)initWithGift:(id)a0 configuration:(id)a1;

@end
