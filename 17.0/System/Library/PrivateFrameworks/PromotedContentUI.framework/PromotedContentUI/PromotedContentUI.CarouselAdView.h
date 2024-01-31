@interface PromotedContentUI.CarouselAdView : APPCPromotedContentView <UICollectionViewDelegate, UICollectionViewDataSourcePrefetching, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundCollectionController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundCollectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_blurView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_headlineLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_advertiserContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_advertiserLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_logoImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_actionButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$__adSize;
    void /* unknown type, empty encoding */ $__lazy_storage_$_adSizeWidth;
    void /* unknown type, empty encoding */ elements;
    void /* unknown type, empty encoding */ dataRepresentation;
    void /* unknown type, empty encoding */ prefetchingIndexPaths;
    void /* unknown type, empty encoding */ topMargin;
    void /* unknown type, empty encoding */ advertiserViewHorizontalMargin;
    void /* unknown type, empty encoding */ headlineHorizontalMargin;
    void /* unknown type, empty encoding */ logoImageViewHeight;
    void /* unknown type, empty encoding */ logoImageViewMaxWidth;
    void /* unknown type, empty encoding */ logoImageViewLeadingMargin;
    void /* unknown type, empty encoding */ collectionViewTopMargin;
    void /* unknown type, empty encoding */ actionButtonHeight;
    void /* unknown type, empty encoding */ actionButtonHorizontalMargin;
    void /* unknown type, empty encoding */ actionButtonMinimumWidth;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 prefetchItemsAtIndexPaths:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 cancelPrefetchingForItemsAtIndexPaths:(id)a1;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)didSelectActionButtonWithSender:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)didMoveToWindow;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;

@end
