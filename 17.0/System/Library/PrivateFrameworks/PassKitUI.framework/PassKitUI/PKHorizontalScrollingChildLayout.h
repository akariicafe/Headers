@class NSMutableDictionary;
@protocol PKHorizontalScrollingChildLayoutDataSource;

@interface PKHorizontalScrollingChildLayout : UICollectionViewLayout {
    NSMutableDictionary *_attributesPerIndexPath;
    NSMutableDictionary *_headersPerIndexPath;
    NSMutableDictionary *_footersPerIndexPath;
    struct CGSize { double width; double height; } _currentSize;
    double _lastDrawnAlpha;
}

@property (weak, nonatomic) id<PKHorizontalScrollingChildLayoutDataSource> dataSource;
@property (nonatomic) BOOL isLowEndDevice;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic) double alphaTransition;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (void)_adjustItems:(id)a0 withLateralMove:(double)a1;

@end
