@class UILabel, UIButton, UIView;

@interface PKApplyOfferCreditCardView : UIView {
    UIView *_dividerLeft;
    UIView *_dividerRight;
}

@property (retain, nonatomic) UILabel *creditLimitTitleLabel;
@property (retain, nonatomic) UILabel *aprForPurchaseTitleLabel;
@property (retain, nonatomic) UILabel *feeTitleLabel;
@property (retain, nonatomic) UILabel *creditLimitLabel;
@property (retain, nonatomic) UILabel *aprForPurchaseLabel;
@property (retain, nonatomic) UILabel *feeLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) UIButton *termsLinkButton;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithTermsLinkAction:(id)a0 actionTitle:(id)a1;
- (BOOL)showSchumerBox;

@end
