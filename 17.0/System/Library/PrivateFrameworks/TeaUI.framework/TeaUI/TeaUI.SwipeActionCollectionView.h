@class UIPanGestureRecognizer;

@interface TeaUI.SwipeActionCollectionView : UICollectionView <TSSwipeActionCoordinating> {
    void /* unknown type, empty encoding */ swipeActionManager;
    void /* unknown type, empty encoding */ dependencyCleanupBlocks;
    void /* unknown type, empty encoding */ coordinatingResetBlocks;
    void /* unknown type, empty encoding */ coordinatingCancelBlocks;
    void /* unknown type, empty encoding */ updateGroup;
    void /* unknown type, empty encoding */ swipeActionRestoreState;
    void /* unknown type, empty encoding */ isBottomRubberBanding;
}

@property (nonatomic, readonly) UIPanGestureRecognizer *coordinatingSwipeActionPanGestureRecognizer;
@property (nonatomic, readonly) BOOL coordinatingSwipeActionShouldCancel;
@property (nonatomic) BOOL allowsSelection;
@property (nonatomic) struct CGPoint { double x0; double x1; } contentOffset;

- (void)reloadData;
- (void)performBatchUpdates:(id /* block */)a0 completion:(id /* block */)a1;
- (void)deleteSections:(id)a0;
- (void)insertSections:(id)a0;
- (void)reloadSections:(id)a0;
- (void)deleteItemsAtIndexPaths:(id)a0;
- (void)insertItemsAtIndexPaths:(id)a0;
- (void)moveItemAtIndexPath:(id)a0 toIndexPath:(id)a1;
- (void)moveSection:(long long)a0 toSection:(long long)a1;
- (void)reloadItemsAtIndexPaths:(id)a0;
- (void)coordinatingResetSwipeAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (void)handleFromCoordinatingGestureWithGestureRecognizer:(id)a0;
- (void)handlePanGestureWithGestureRecognizer:(id)a0;

@end
