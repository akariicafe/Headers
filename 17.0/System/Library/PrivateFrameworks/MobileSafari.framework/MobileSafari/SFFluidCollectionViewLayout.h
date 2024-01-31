@class SFFluidCollectionView;
@protocol SFFluidCollectionLayoutContainer;

@interface SFFluidCollectionViewLayout : NSObject

@property (class, readonly, nonatomic) Class layoutAttributesClass;

@property (weak, nonatomic) id<SFFluidCollectionLayoutContainer> container;
@property (weak, nonatomic) SFFluidCollectionView *fluidCollectionView;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly, nonatomic) BOOL shouldAllowScrollGesture;

- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateLayoutWithContext:(id)a0;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void)finalizeLayout;
- (void).cxx_destruct;
- (void)invalidateLayout;
- (void)prepareForAnimatedBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)finalizeAnimatedBoundsChange;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (id)finalLayoutAttributesForItemAtIndexPath:(id)a0;
- (void)finalizeFluidCollectionUpdate;
- (id)initialLayoutAttributesForItemAtIndexPath:(id)a0;
- (id)invalidationContextForTraitCollectionChange:(id)a0;
- (void)prepareForFluidCollectionUpdate:(id)a0;
- (BOOL)shouldInvalidateLayoutForTraitCollectionChange:(id)a0;

@end
