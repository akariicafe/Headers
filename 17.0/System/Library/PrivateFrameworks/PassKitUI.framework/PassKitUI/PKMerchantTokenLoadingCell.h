@class NSLayoutConstraint, UIActivityIndicatorView;

@interface PKMerchantTokenLoadingCell : UICollectionViewListCell {
    UIActivityIndicatorView *_activityIndicator;
    NSLayoutConstraint *_heightConstraint;
    double _loadingCellHeight;
    double _loadingCellHeightWithIcon;
}

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_setUpConstraints;
- (void)_computeLoadingCellHeights;
- (void)_setUpViews;
- (void)useSmallHeight;

@end
