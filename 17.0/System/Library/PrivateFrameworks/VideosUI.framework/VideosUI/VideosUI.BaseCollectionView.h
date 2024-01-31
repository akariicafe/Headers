@interface VideosUI.BaseCollectionView : UICollectionView <UICollectionViewDelegate, UICollectionViewDelegate_Private> {
    void /* unknown type, empty encoding */ vuiDelegate;
    void /* unknown type, empty encoding */ vuiScrollDelegate;
    void /* unknown type, empty encoding */ vuiContextMenuDelegate;
}

- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)_collectionView:(id)a0 orthogonalScrollViewDidScroll:(id)a1 section:(long long)a2;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (id)collectionView:(id)a0 contextMenuConfigurationForItemsAtIndexPaths:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 willEndContextMenuInteractionWithConfiguration:(id)a1 animator:(id)a2;
- (id)collectionView:(id)a0 contextMenuConfiguration:(id)a1 dismissalPreviewForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 contextMenuConfiguration:(id)a1 highlightPreviewForItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;

@end
