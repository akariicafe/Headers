@class UICollectionView;

@interface SKUISearchCollectionViewFlowLayout : SKUIItemGridCollectionViewLayout {
    UICollectionView *_collectionView;
    long long _numberOfRows;
    long long _numberOfColumns;
    struct CGSize { double width; double height; } _headerSize;
}

@property (nonatomic) double horizontalPadding;
@property (nonatomic) double verticalPadding;
@property (nonatomic) BOOL backfills;

- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void).cxx_destruct;

@end
