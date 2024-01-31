@class NSDictionary, NSMutableDictionary, NSMutableArray;
@protocol UIDebuggingInformationHierarchyLayoutDelegate;

@interface UIDebuggingInformationHierarchyLayout : UICollectionViewLayout {
    NSMutableArray *_indexPathsToDelete;
}

@property (retain, nonatomic) NSDictionary *allAttributes;
@property (retain, nonatomic) NSMutableDictionary *allLineAttributes;
@property (weak, nonatomic) id<UIDebuggingInformationHierarchyLayoutDelegate> delegate;

+ (Class)layoutAttributesClass;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)a0;
- (void).cxx_destruct;
- (void)invalidateLayout;
- (void)_recomputeAttributes;
- (void)prepareForCollectionViewUpdates:(id)a0;

@end
