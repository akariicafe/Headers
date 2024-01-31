@class UIImageView, UILabel, PKPaymentTransaction, PKTransactionMapView;

@interface PKPaymentTransactionLocationTableViewCell : PKTableViewCell {
    UILabel *_titleLabel;
    PKTransactionMapView *_mapView;
    UIImageView *_disclosureView;
}

@property (retain, nonatomic) PKPaymentTransaction *transaction;
@property (nonatomic) BOOL usesDarkMapAppearance;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_disclosureView;
- (void)setTitleLabelColor:(id)a0;
- (BOOL)_shouldShowDisclosureIndicator;

@end
