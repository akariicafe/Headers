@class NSString, NSCollectionLayoutItem, NSCollectionLayoutAnchor, NSCollectionLayoutSize, NSCollectionLayoutSupplementaryItem, NSCollectionLayoutBoundarySupplementaryItem;

@interface NSCollectionLayoutDecorationItem : NSCollectionLayoutItem <_UICollectionLayoutAuxillaryItem, NSCopying>

@property (retain, nonatomic) NSString *elementKind;
@property (retain, nonatomic) NSCollectionLayoutAnchor *containerAnchor;
@property (retain, nonatomic) NSCollectionLayoutAnchor *itemAnchor;
@property (nonatomic) BOOL isBackgroundDecoration;
@property (retain, nonatomic, setter=_setRegistrationViewClass:) Class _registrationViewClass;
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

+ (id)decorationItemWithSize:(id)a0 elementKind:(id)a1 containerAnchor:(id)a2;
+ (id)itemWithLayoutSize:(id)a0;
+ (id)backgroundDecorationItemWithElementKind:(id)a0;
+ (id)itemWithLayoutSize:(id)a0 supplementaryItems:(id)a1;

- (id)_externalDescription;
- (id)initWithElementKind:(id)a0 size:(id)a1 contentInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a2 containerAnchor:(id)a3 itemAnchor:(id)a4 zIndex:(long long)a5 registrationViewClass:(Class)a6 isBackgroundDecoration:(BOOL)a7;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
