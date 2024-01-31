@class NSDictionary;

@interface _VideosExtrasShelfCollectionViewLayout : UICollectionViewFlowLayout {
    NSDictionary *_rects;
}

@property (readonly, nonatomic) struct CGSize { double width; double height; } calculatedContentSize;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_calculateSizes;

@end
