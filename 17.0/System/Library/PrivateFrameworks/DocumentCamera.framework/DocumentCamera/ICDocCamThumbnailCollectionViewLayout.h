@class NSDictionary, NSMutableArray;
@protocol ICDocCamThumbnailViewLayoutDelegate;

@interface ICDocCamThumbnailCollectionViewLayout : UICollectionViewLayout

@property (retain, nonatomic) NSDictionary *layoutInfo;
@property (retain, nonatomic) NSMutableArray *deleteIndexPaths;
@property (retain, nonatomic) NSMutableArray *insertIndexPaths;
@property (nonatomic) BOOL compactLayout;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (weak, nonatomic) id<ICDocCamThumbnailViewLayoutDelegate> delegate;
@property (nonatomic) BOOL transitioning;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)a0 atIndexPath:(id)a1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (id)init;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setup;
- (void)prepareForTransitionFromLayout:(id)a0;
- (void)prepareForAnimatedBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)finalizeAnimatedBoundsChange;
- (void)finalizeCollectionViewUpdates;
- (void)finalizeLayoutTransition;
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareForCollectionViewUpdates:(id)a0;
- (void)prepareForTransitionToLayout:(id)a0;
- (void)prepareLayout:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })compactFrameForThumbnailAtIndexPath:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForThumbnailAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })frameSizeForImageSize:(struct CGSize { double x0; double x1; })a0;

@end
