@class GKCancelSwipeToEditGestureRecognizer, NSString, GKCollectionViewDataSource, _UIDynamicAnimation, UIPanGestureRecognizer, UICollectionView, GKCollectionViewCell, NSIndexPath;

@interface GKSwipeToEditStateMachine : _GKStateMachine <UIGestureRecognizerDelegate> {
    int _debounce;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) GKCollectionViewDataSource *gkDataSource;
@property (retain, nonatomic) GKCancelSwipeToEditGestureRecognizer *editModeCancelRecognizer;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) GKCollectionViewCell *editingCell;
@property (nonatomic) double startTrackingX;
@property (retain, nonatomic) _UIDynamicAnimation *openAnimation;
@property (readonly, nonatomic) NSIndexPath *trackedIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handlePan:(id)a0;
- (void)didExitNothingState;
- (void)shutActionPaneForEditingCellAnimated:(BOOL)a0;
- (id)initWithCollectionView:(id)a0;
- (void)didExitEditingState;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)didEnterEditingState;
- (void).cxx_destruct;
- (void)didEnterAnimatingShutState;
- (void)didEnterAnimatingOpenState;
- (double)xPositionForTranslation:(struct CGPoint { double x0; double x1; })a0;
- (void)didExitAnimatingOpenState;
- (void)setDelegate:(id)a0;
- (void)didEnterNothingState;
- (void)viewDidDisappear:(BOOL)a0;
- (void)handleCancelTap:(id)a0;

@end
