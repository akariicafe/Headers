@interface CACCorrectionsFlowLayout : UICollectionViewFlowLayout

+ (Class)layoutAttributesClass;

- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (double)_availableWidth;

@end
