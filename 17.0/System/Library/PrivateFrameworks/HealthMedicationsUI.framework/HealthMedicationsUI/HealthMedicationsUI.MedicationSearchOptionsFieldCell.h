@interface HealthMedicationsUI.MedicationSearchOptionsFieldCell : UICollectionViewListCell {
    void /* unknown type, empty encoding */ item;
    void /* unknown type, empty encoding */ baseIdentifier;
    void /* unknown type, empty encoding */ $__lazy_storage_$_stackView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_searchButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scanButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fixedSpace;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)onScan;
- (void)onSearch;

@end
