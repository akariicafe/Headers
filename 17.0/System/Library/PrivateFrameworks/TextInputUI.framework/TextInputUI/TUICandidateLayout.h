@class TUICandidateLayoutAttributes, NSMutableDictionary, NSIndexPath, NSMutableArray;

@interface TUICandidateLayout : UICollectionViewLayout <NSCopying> {
    NSMutableArray *_candidateAttributes;
    NSMutableDictionary *_dummyCandidateAttributes;
    NSMutableArray *_lineAttributes;
    NSMutableArray *_slottedCellSeparatorAttributes;
    NSMutableArray *_groupHeaderAttributes;
    TUICandidateLayoutAttributes *_customHeaderAttributes;
    BOOL _dirty;
}

@property (nonatomic) long long rowType;
@property (nonatomic) long long transitionState;
@property (nonatomic) long long layoutOrientation;
@property (retain, nonatomic) NSIndexPath *oldFirstVisibleIndexPath;
@property (nonatomic) double oldFirstVisibleOffset;
@property (nonatomic) double customHeaderHeight;
@property (nonatomic) BOOL candidateNumberEnabled;
@property (nonatomic) unsigned long long columnsCount;
@property (nonatomic) double singleSlottedCellMargin;
@property (nonatomic) double minimumInterItemSpacing;
@property (nonatomic) BOOL shouldJustifyRow;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } gridPadding;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } gridLinePadding;
@property (nonatomic) struct CGPoint { double x; double y; } gridLineOffset;
@property (nonatomic) BOOL showExtraLineBeforeFirstRow;
@property (nonatomic) BOOL fillGridWithLines;
@property (nonatomic) BOOL showsIndex;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (void)invalidateLayout;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)flipsHorizontallyInOppositeLayoutDirection;
- (void)clearLayoutAttributes;
- (void)justify:(id)a0 rowStartX:(double)a1 maxWidth:(double)a2 remainingWidth:(double)a3 endOfSection:(BOOL)a4;
- (id)keyForDummyCandidateIndexPath:(id)a0;
- (void)layoutSlottedCandidates;
- (void)prepareLayoutForMultiRow;
- (void)prepareLayoutForSingleRow;
- (void)rotateAttributesBy90Degrees;

@end
