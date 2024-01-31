@class UIImageView, PKDashboardTransactionMapItem, UILabel, PKTransactionMapView, UIActivityIndicatorView;

@interface PKPaymentTransactionMapCollectionViewCell : PKDashboardCollectionViewCell {
    UIImageView *_disclosureView;
    UIActivityIndicatorView *_spinner;
}

@property (retain, nonatomic) PKDashboardTransactionMapItem *item;
@property (readonly, nonatomic) PKTransactionMapView *mapView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL showDisclosureIndicator;
@property (nonatomic) BOOL showSpinner;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateSpinnerAndDisclosureIndicator;
- (double)maxWidthForTransactionCellInWidth:(double)a0;

@end
