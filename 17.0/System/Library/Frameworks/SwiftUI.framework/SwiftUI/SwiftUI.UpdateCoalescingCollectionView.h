@interface SwiftUI.UpdateCoalescingCollectionView : UICollectionView {
    void /* unknown type, empty encoding */ safeAreaTransitionState;
    void /* unknown type, empty encoding */ helper;
    void /* unknown type, empty encoding */ cachedIdealSize;
    void /* unknown type, empty encoding */ visibleCellsUpdate;
    void /* unknown type, empty encoding */ postUpdateInvalidations;
    void /* unknown type, empty encoding */ ignoreGraphUpdates;
    void /* unknown type, empty encoding */ pendingGraphUpdate;
    void /* unknown type, empty encoding */ pendingScrollTarget;
    void /* unknown type, empty encoding */ pendingDeselectedItem;
    void /* unknown type, empty encoding */ _lastUpdateSeed;
    void /* unknown type, empty encoding */ bridgedState;
    void /* unknown type, empty encoding */ eventState;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (nonatomic, readonly) BOOL canBecomeFirstResponder;
@property (nonatomic, readonly) BOOL _wantsConstraintBasedLayout;

+ (BOOL)_isFromSwiftUI;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void).cxx_destruct;
- (void)performBatchUpdates:(id /* block */)a0 completion:(id /* block */)a1;
- (void)safeAreaInsetsDidChange;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;

@end
