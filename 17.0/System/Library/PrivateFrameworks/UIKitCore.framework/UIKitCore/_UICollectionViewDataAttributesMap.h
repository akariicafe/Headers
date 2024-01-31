@class _UICollectionViewRTree, NSMutableArray, UICollectionViewData;

@interface _UICollectionViewDataAttributesMap : NSObject {
    _UICollectionViewRTree *_rTree;
    NSMutableArray *_clonedCellAttributes;
    NSMutableArray *_clonedSupplementaryAttributes;
    NSMutableArray *_clonedDecorationAttributes;
    UICollectionViewData *_collectionViewData;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _validLayoutRect;
}

- (void).cxx_destruct;

@end
