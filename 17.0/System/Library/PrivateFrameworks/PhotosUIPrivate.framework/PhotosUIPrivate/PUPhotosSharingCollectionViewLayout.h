@class NSIndexPath, NSMutableDictionary;
@protocol PUPhotosSharingCollectionViewLayoutDelegate;

@interface PUPhotosSharingCollectionViewLayout : PUHorizontalTiledCollectionViewLayout {
    NSMutableDictionary *_cachedItemSublayouts;
}

@property (nonatomic) struct UIOffset { double horizontal; double vertical; } sharingBadgesOffset;
@property (nonatomic) unsigned long long sharingBadgesCorner;
@property (retain, nonatomic) NSIndexPath *zoomingCellIndexPath;
@property (weak, nonatomic) id<PUPhotosSharingCollectionViewLayoutDelegate> delegate;

- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (void)_didFinishLayoutTransitionAnimations:(BOOL)a0;
- (BOOL)_supportsAdvancedTransitionAnimations;
- (void)invalidateCachedLayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_floatingBadgeContainerFrameForBadgeContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 itemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 visibleItemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct UIOffset { double x0; double x1; })_floatingBadgeOffsetForBadgesContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ItemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 visibleItemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)_sublayoutForItemLayoutAttributes:(id)a0;

@end
