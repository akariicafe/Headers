@class NSString, NSArray, MUPunchoutViewModel, MUPlaceTilesViewConfiguration, UICollectionViewFlowLayout, UICollectionViewDiffableDataSource, NSLayoutConstraint, UICollectionView;
@protocol MUScrollAnalyticActionObserving, MUPlaceTilesViewDelegate;

@interface MUPlaceTilesView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, MUCollectionViewDiffableDataSourceCellProviding> {
    UICollectionView *_contentCollectionView;
    UICollectionViewDiffableDataSource *_diffableDataSource;
    MUPlaceTilesViewConfiguration *_configuration;
    NSLayoutConstraint *_heightConstraint;
    UICollectionViewFlowLayout *_flowLayout;
    struct CGPoint { double x; double y; } _beginAnalyticsScrollingPoint;
    struct CGSize { double width; double height; } _tileSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cachedBounds;
}

@property (readonly, nonatomic) BOOL shouldCalculateTileSizeAccordingToBounds;
@property (retain, nonatomic) MUPunchoutViewModel *accessoryViewModel;
@property (retain, nonatomic) NSArray *viewModels;
@property (weak, nonatomic) id<MUScrollAnalyticActionObserving> analyticsDelegate;
@property (weak, nonatomic) id<MUPlaceTilesViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)accessoryView;
- (id)initWithConfiguration:(id)a0;
- (void)_updateContent;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)_contentSizeDidChange;
- (void)_setupStackView;
- (double)_calculatedTileWidthFromBounds;
- (void)_updateTileMetrics;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1 itemIdentifier:(id)a2;
- (void)displayPlaceTiles;
- (void)enumerateImageViewsWithBlock:(id /* block */)a0;
- (double)heightForTileSize:(struct CGSize { double x0; double x1; })a0;
- (id)imageViewForIndex:(unsigned long long)a0;
- (void)scrollToViewAtIndex:(unsigned long long)a0;
- (void)updateViewsWithAlpha:(double)a0;

@end
