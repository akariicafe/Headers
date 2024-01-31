@class NSString, SUUIGiftDashView, UILabel;

@interface SUUIGiftConfirmLabeledValue : UIView {
    SUUIGiftDashView *_dashView;
    UILabel *_labelLabel;
    UILabel *_valueLabel;
    UILabel *_subtitleLabel;
}

@property (readonly, nonatomic) long long giftConfirmLabelStyle;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *subtitleLabel;
@property (copy, nonatomic) NSString *value;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithGiftConfirmLabelStyle:(long long)a0;

@end
