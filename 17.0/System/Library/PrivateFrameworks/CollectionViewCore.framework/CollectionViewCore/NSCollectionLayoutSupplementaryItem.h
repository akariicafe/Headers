@class NSCollectionLayoutDecorationItem, NSString, NSCollectionLayoutItem, NSCollectionLayoutAnchor, NSCollectionLayoutSize, NSCollectionLayoutBoundarySupplementaryItem;

@interface NSCollectionLayoutSupplementaryItem : NSCollectionLayoutItem <_UICollectionLayoutAuxillaryItem, NSCopying>

@property (retain, nonatomic) NSString *elementKind;
@property (retain, nonatomic) NSCollectionLayoutAnchor *containerAnchor;
@property (retain, nonatomic) NSCollectionLayoutAnchor *itemAnchor;
@property (nonatomic) BOOL canAdjustContentSize;
@property (nonatomic) long long zIndex;
@property (readonly, nonatomic) NSCollectionLayoutSize *size;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } contentInsets;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } _effectiveContentInsets;
@property (readonly, nonatomic) NSCollectionLayoutItem *item;
@property (readonly, nonatomic) NSCollectionLayoutSupplementaryItem *supplementaryItem;
@property (readonly, nonatomic) NSCollectionLayoutBoundarySupplementaryItem *boundarySupplementaryItem;
@property (readonly, nonatomic) NSCollectionLayoutDecorationItem *decorationItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemWithLayoutSize:(id)a0;
+ (id)supplementaryItemWithLayoutSize:(id)a0 elementKind:(id)a1 containerAnchor:(id)a2 itemAnchor:(id)a3;
+ (id)itemWithLayoutSize:(id)a0 supplementaryItems:(id)a1;
+ (id)supplementaryItemWithLayoutSize:(id)a0 elementKind:(id)a1 containerAnchor:(id)a2;

- (id)initWithSize:(id)a0 contentInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 elementKind:(id)a2 containerAnchor:(id)a3 itemAnchor:(id)a4 zIndex:(long long)a5;
- (id)_externalDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
