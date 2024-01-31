@class SFFluidTabOverviewLinearLayout, NSString, NSTimer, SFCapsuleCollectionView, NSIndexPath;

@interface SFFluidTabOverviewCapsuleSelectionInteraction : SFFluidCollectionViewInteraction <SFCapsuleCollectionViewGestureObserving> {
    NSIndexPath *_interactingIndexPath;
    double _progressToItem;
    NSIndexPath *_nextIndexPath;
    double _progressToTopAction;
    unsigned long long _snapAxis;
    NSTimer *_linearLayoutTimer;
    BOOL _hideAdjacentItems;
}

@property (weak, nonatomic) SFCapsuleCollectionView *capsuleCollectionView;
@property (weak, nonatomic) SFFluidTabOverviewLinearLayout *linearLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)capsuleCollectionViewDidEndSelectionGesture:(id)a0;
- (void)cancelInteraction;
- (void)capsuleCollectionView:(id)a0 didUpdateProgress:(double)a1 toSelectItemAtIndex:(long long)a2 progressToTopAction:(double)a3 snapToAxis:(unsigned long long)a4;
- (void).cxx_destruct;
- (void)capsuleCollectionView:(id)a0 didBeginSelectionGestureOnAxis:(unsigned long long)a1;
- (id)transformLayoutAttributes:(id)a0;
- (void)_switchToLinearLayoutIfNeeded;
- (id)initWithCapsuleCollectionView:(id)a0;

@end
