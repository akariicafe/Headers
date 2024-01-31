@class NSMutableArray, UICollectionViewLayout, NSMutableDictionary;

@interface UICollectionViewTransitionLayout : UICollectionViewLayout {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _fromVisibleBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _toVisibleBounds;
    struct CGSize { double width; double height; } _contentSize;
    BOOL _haveValidInfos;
    NSMutableDictionary *_transitionInformationsDict;
    NSMutableDictionary *_currentLayoutInfos;
    BOOL _layoutIsValid;
    NSMutableArray *_disappearingLayoutAttributes;
    NSMutableArray *_appearingLayoutAttributes;
    double _accuracy;
}

@property (nonatomic) double transitionProgress;
@property (readonly, nonatomic) UICollectionViewLayout *currentLayout;
@property (readonly, nonatomic) UICollectionViewLayout *nextLayout;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)_prepareForTransitionToLayout:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)_setCollectionView:(id)a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)invalidateLayout;
- (id)initWithCoder:(id)a0;
- (void)_finalizeLayoutTransition;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_newVisibleBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_oldVisibleBounds;
- (void)_prepareForTransitionFromLayout:(id)a0;
- (BOOL)_supportsAdvancedTransitionAnimations;
- (id)initWithCurrentLayout:(id)a0 nextLayout:(id)a1;
- (id)interpolatedLayoutAttributesFromLayoutAttributes:(id)a0 toLayoutAttributes:(id)a1 progress:(double)a2;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)updateValue:(double)a0 forAnimatedKey:(id)a1;
- (double)valueForAnimatedKey:(id)a0;

@end
