@class UIColor, NSTimeZone, PKAccountPayment, UILabel, UITableViewCellLayoutManager;

@interface PKAccountScheduledPaymentCell : UITableViewCell {
    UILabel *_frequencyLabel;
    UILabel *_statusLabel;
    UILabel *_amountLabel;
    UITableViewCellLayoutManager *_layoutManager;
    NSTimeZone *_timeZone;
    BOOL _hasPaymentDueDate;
    BOOL _sizing;
    BOOL _useStackedLayout;
}

@property (nonatomic) BOOL onHold;
@property (weak, nonatomic) PKAccountPayment *payment;
@property (copy, nonatomic) UIColor *titleColor;
@property (nonatomic) unsigned long long featureIdentifier;

- (void)prepareForReuse;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_effectiveLayoutMargins;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (id)_dateString;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_amountAttributedString;
- (id)_amountString;
- (id)_frequencyAttributedString;
- (id)_frequencyString;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_statusAttributedString;
- (BOOL)_useStackedLayoutForUsableWidth:(double)a0;
- (void)setPayment:(id)a0 forAccount:(id)a1;

@end
