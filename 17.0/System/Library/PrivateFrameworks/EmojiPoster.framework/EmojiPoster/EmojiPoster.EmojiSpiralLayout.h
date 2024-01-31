@interface EmojiPoster.EmojiSpiralLayout : UICollectionViewLayout {
    void /* unknown type, empty encoding */ radius;
    void /* unknown type, empty encoding */ startingAngle;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;

- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)initWithCoder:(id)a0;

@end
