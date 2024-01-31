@class PKPayLaterFinancingPlan, NSCalendar, PKIconTextLabel, UIImageView, UIButton, PKPayLaterPaymentIntentController, UIViewController, PKPayLaterInstallment, UILabel, UIActivityIndicatorView;

@interface PKPayLaterFinancingPlanInstallmentCellView : UIView {
    PKPayLaterFinancingPlan *_financingPlan;
    PKPayLaterInstallment *_installment;
    PKPayLaterPaymentIntentController *_paymentIntentController;
    UIViewController *_presentingViewController;
    NSCalendar *_calendar;
    long long _rowIndex;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    PKIconTextLabel *_tertiaryLabel;
    UIImageView *_disclosureView;
    UIActivityIndicatorView *_spinnerView;
    UIButton *_button;
}

+ (id)_numberFormatter;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_secondaryLabelText;
- (BOOL)_isInstallmentPaid;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (void)_tappedButton;
- (id)_tertiaryFont;
- (void)_updateTertiaryLabel;
- (id)initWithFinancingPlan:(id)a0 installment:(id)a1 rowIndex:(long long)a2 paymentIntentController:(id)a3 presentingViewController:(id)a4;

@end
