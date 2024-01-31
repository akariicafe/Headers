@protocol PUHorizontalAlbumListGadgetLayoutDelegate;

@interface PUHorizontalAlbumListGadgetLayout : PXGadgetCollectionViewLayout

@property (weak, nonatomic) id<PUHorizontalAlbumListGadgetLayoutDelegate> horizontalLayoutDelegate;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } albumCellSize;
@property (readonly, nonatomic) BOOL showsHorizontalScrollIndicator;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)initWithHorizontalLayoutDelegate:(id)a0 showsHorizontalScrollIndicator:(BOOL)a1;
- (void).cxx_destruct;
- (unsigned long long)_numberOfAlbums;
- (double)_horizontalScrollIndicatorSpacing;

@end
