@interface ConversationKit.SharePlayDiscoverabilityMenuView : UIView <UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_moreButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_appCellRegistration;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionViewLayout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ presentationStyle;
    void /* unknown type, empty encoding */ foregroundApp;
}

- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)didTapMore;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
