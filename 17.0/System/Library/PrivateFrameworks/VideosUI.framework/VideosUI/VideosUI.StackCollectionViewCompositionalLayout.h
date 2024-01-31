@interface VideosUI.StackCollectionViewCompositionalLayout : UICollectionViewCompositionalLayout

@property (class, nonatomic, readonly) Class layoutAttributesClass;

- (id)initWithSectionProvider:(id /* block */)a0;
- (id)initWithSectionProvider:(id /* block */)a0 configuration:(id)a1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithSection:(id)a0 configuration:(id)a1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)initWithSection:(id)a0;
- (id)initWithCoder:(id)a0;

@end
