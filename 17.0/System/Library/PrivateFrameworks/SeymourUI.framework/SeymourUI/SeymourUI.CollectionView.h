@interface SeymourUI.CollectionView : UICollectionView {
    void /* unknown type, empty encoding */ contentInsetBehaviorProvider;
    void /* unknown type, empty encoding */ onLayoutUpdate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_smoothDecelerationAnimation;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (BOOL)_scrollToTopIfPossible:(BOOL)a0;

@end
