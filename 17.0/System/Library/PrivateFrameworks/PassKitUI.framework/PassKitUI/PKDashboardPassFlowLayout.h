@class NSString;

@interface PKDashboardPassFlowLayout : UICollectionViewCompositionalLayout <UIGestureRecognizerDelegate, PKDashboardLayout> {
    BOOL _needsCustomLocation;
    BOOL _userIsActivelyDragging;
    BOOL _currentDraggingWentBelowThreshold;
    BOOL _userIsHoldingCardInCurrentDrag;
    BOOL _userWasHoldingCard;
    BOOL _bouncing;
    BOOL _cellsPresented;
    BOOL _hideCellsDuringDismissal;
    struct CGSize { double width; double height; } _passCellSize;
    BOOL _preventLayoutComputation;
    double _horizontalInset;
    double _topMarginInFirstSection;
}

@property (class, readonly, nonatomic) double topMarginInFirstSection;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL fade;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateLayoutWithContext:(id)a0;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (BOOL)_indexPathIsPassGroupIndexPath:(id)a0;
- (void)passPanDidBegin;
- (void)_adjustItems:(id)a0 withLateralMove:(double)a1;
- (id)_indexPathForPassGroup;
- (id)_modifiedLayoutAttributes:(id)a0;
- (void)hideContent;
- (id)layoutSectionAtIndex:(long long)a0 layoutEnvironment:(id)a1;
- (void)passPanDidEnd;
- (void)revealContentAnimated:(BOOL)a0;

@end
