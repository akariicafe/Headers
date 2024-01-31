@class SUUIGiftConfiguration, UIView, UILabel, SUUIGiftConfirmLabeledValue, UIButton;

@interface SUUIGiftConfirmView : UIView {
    SUUIGiftConfirmLabeledValue *_amountView;
    UILabel *_chargeDisclaimerLabel;
    UILabel *_confirmYourOrderLabel;
    SUUIGiftConfirmLabeledValue *_senderView;
    SUUIGiftConfiguration *_giftConfiguration;
    SUUIGiftConfirmLabeledValue *_itemView;
    SUUIGiftConfirmLabeledValue *_messageView;
    SUUIGiftConfirmLabeledValue *_recipientsView;
    UIView *_rule1;
    UIView *_rule2;
    UIView *_rule3;
    UIView *_rule4;
    UIView *_rule5;
    UIView *_rule6;
    SUUIGiftConfirmLabeledValue *_fromView;
    SUUIGiftConfirmLabeledValue *_sendOnView;
    UIButton *_termsButton;
    SUUIGiftConfirmLabeledValue *_themeNameView;
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
