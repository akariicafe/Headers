@class NSMutableDictionary, NSMutableArray;

@interface UIKeyboardEmojiLayout : UICollectionViewFlowLayout {
    NSMutableDictionary *_attributes;
    NSMutableArray *_headerWidths;
}

+ (Class)invalidationContextClass;

- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateLayoutWithContext:(id)a0;
- (void)prepareLayout;
- (id)invalidationContextForPreferredLayoutAttributes:(id)a0 withOriginalAttributes:(id)a1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)a0 withOriginalAttributes:(id)a1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_setAttributes:(id)a0 forSection:(long long)a1;
- (BOOL)flipsHorizontallyInOppositeLayoutDirection;

@end
