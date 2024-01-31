@class VideosExtrasCarouselCollectionView, UICollectionViewLayout, NSString;
@protocol VideosExtrasCarouselViewControllerDataSource, VideosExtrasCarouselCollectionViewLayout, VideosExtrasCarouselViewControllerDelegate;

@interface VideosExtrasCarouselViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, VideosExtrasCarouselCollectionViewDelegate, VideosExtrasZoomingImageTransitionParticipant>

@property (retain, nonatomic) VideosExtrasCarouselCollectionView *carouselCollectionView;
@property (retain, nonatomic) UICollectionViewLayout<VideosExtrasCarouselCollectionViewLayout> *carouselCollectionViewLayout;
@property (nonatomic, getter=isRevealingNavigationBarDuringTransition) BOOL revealingNavigationBarDuringTransition;
@property (weak, nonatomic) id<VideosExtrasCarouselViewControllerDataSource> dataSource;
@property (weak, nonatomic) id<VideosExtrasCarouselViewControllerDelegate> delegate;
@property (nonatomic) unsigned long long indexOfVisibleItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)didMoveToParentViewController:(id)a0;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (long long)_numberOfItems;
- (BOOL)_isPhone;
- (void)setIndexOfVisibleItem:(unsigned long long)a0 animated:(BOOL)a1;
- (void)_ensureScrollViewSnaps;
- (id)_findSnappingItemFromContentOffset:(inout struct CGPoint { double x0; double x1; } *)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1;
- (void)_loadCarouselCollectionViewInView:(id)a0 withContraintsAccumulator:(id)a1;
- (void)_snapTargetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a0 toItemIndexPath:(id)a1 atItemOffset:(struct CGPoint { double x0; double x1; })a2;
- (void)_updateOpacityOfTextInVisibleCells;
- (void)_updateWindowSizeForVisibleCells;
- (id)carouselCollectionViewCellForItemAtIndex:(unsigned long long)a0;
- (void)finalizeZoomingImageTransitionWithContext:(id)a0 transitionFinished:(BOOL)a1;
- (void)performZoomingImageTransitionWithContext:(id)a0;
- (void)prepareZoomingImageTransitionWithContext:(id)a0;
- (void)subviewsDidChangeForCarouselCollectionView:(id)a0;

@end
