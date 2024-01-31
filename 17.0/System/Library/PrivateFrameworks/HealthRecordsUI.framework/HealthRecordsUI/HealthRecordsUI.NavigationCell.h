@interface HealthRecordsUI.NavigationCell : UICollectionViewListCell {
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_disclosureImageView;
    void /* unknown type, empty encoding */ margin;
    void /* unknown type, empty encoding */ topAndBottomDistance;
    void /* unknown type, empty encoding */ item;
}

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)showDetailViewController:(id)a0 viewController:(id)a1;

@end
