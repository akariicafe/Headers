@class UILabel, UIButton;

@interface PKPaymentPassDetailActivationFooterView : UITableViewHeaderFooterView {
    UILabel *_footerTextLabel;
    UIButton *_activationButton;
}

- (void)setFooterText:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 activationAction:(id)a1;
- (void)setActivationButtonText:(id)a0;
- (void)setupActivationButtonWithAction:(id)a0;
- (void)setupFooter;

@end
