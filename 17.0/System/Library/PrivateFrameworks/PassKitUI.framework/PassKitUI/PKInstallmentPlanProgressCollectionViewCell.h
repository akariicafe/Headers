@class NSString, UIImageView, UILabel, PKCurrencyAmount, PKProgressBar;

@interface PKInstallmentPlanProgressCollectionViewCell : PKDashboardCollectionViewCell {
    UILabel *_leadingTitleLabel;
    UILabel *_leadingAmountLabel;
    UILabel *_trailingTitleLabel;
    UILabel *_trailingAmountLabel;
    PKProgressBar *_progressBar;
    UIImageView *_completeCheckmark;
    UILabel *_completeLabel;
    UILabel *_detailLabel;
}

@property (copy, nonatomic) NSString *leadingTitle;
@property (copy, nonatomic) NSString *trailingTitle;
@property (retain, nonatomic) PKCurrencyAmount *leadingAmount;
@property (retain, nonatomic) PKCurrencyAmount *trailingAmount;
@property (nonatomic) double progressAmount;
@property (copy, nonatomic) NSString *subtitleText;
@property (nonatomic, getter=isComplete) BOOL complete;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
