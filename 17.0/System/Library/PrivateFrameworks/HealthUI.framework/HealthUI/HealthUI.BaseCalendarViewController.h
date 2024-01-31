@interface HealthUI.BaseCalendarViewController : UICollectionViewController {
    void /* unknown type, empty encoding */ collectionViewDataSource;
    void /* unknown type, empty encoding */ isYearOverlayVisible;
    void /* unknown type, empty encoding */ decelerationTargetContentOffset;
    void /* unknown type, empty encoding */ $__lazy_storage_$_yearOverlay;
}

- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCollectionViewLayout:(id)a0;
- (id)initWithCoder:(id)a0;

@end
