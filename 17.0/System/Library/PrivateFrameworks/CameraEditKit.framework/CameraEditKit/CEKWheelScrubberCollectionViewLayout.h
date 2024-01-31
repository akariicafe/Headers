@class NSArray;
@protocol CEKWheelScrubberCollectionViewLayoutDelegate;

@interface CEKWheelScrubberCollectionViewLayout : UICollectionViewLayout

@property (nonatomic, setter=_setCachedContentSize:) struct CGSize { double width; double height; } _cachedContentSize;
@property (retain, nonatomic, setter=_setCachedLayoutAttributesCells:) NSArray *_cachedLayoutAttributesCells;
@property (retain, nonatomic, setter=_setCachedLayoutAttributesDecorations:) NSArray *_cachedLayoutAttributesDecorations;
@property (weak, nonatomic) id<CEKWheelScrubberCollectionViewLayoutDelegate> wheelScrubberDelegate;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) BOOL useRoundedCorners;
@property (nonatomic) long long layoutDirection;
@property (nonatomic) long long layoutOrder;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void).cxx_destruct;
- (double)_circularlyWrapped:(double)a0 forCenter:(double)a1 radius:(double)a2 scale:(double)a3;

@end
