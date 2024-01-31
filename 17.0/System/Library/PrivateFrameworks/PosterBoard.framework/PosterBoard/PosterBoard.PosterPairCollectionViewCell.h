@interface PosterBoard.PosterPairCollectionViewCell : PosterBoard.PosterCollectionViewCell <PosterBoard.PosterPairObserver> {
    void /* unknown type, empty encoding */ snapshotProvider;
    void /* unknown type, empty encoding */ posterPair;
    void /* unknown type, empty encoding */ lockPosterSnapshotView;
    void /* unknown type, empty encoding */ keyLineView;
    void /* unknown type, empty encoding */ isReloadingLockPosterSnapshot;
    void /* unknown type, empty encoding */ lockPosterSnapshotImage;
}

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)posterPairDidUpdateConfiguredProperties:(id)a0;
- (void)posterPairDidUpdateHomePosterAppearance:(id)a0;
- (void)posterPairDidUpdateLockPosterAppearance:(id)a0;
- (void)posterPairDidUpdateLockPosterSnapshots:(id)a0;

@end
