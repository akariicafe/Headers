@class NSArray, CKAttributionViewModelObject, UICollectionViewLayoutAttributes;

@interface CKAttributionCollectionViewLayoutAttributesCollection : NSObject <NSCopying>

@property (retain, nonatomic) UICollectionViewLayoutAttributes *containerAttributes;
@property (retain, nonatomic) UICollectionViewLayoutAttributes *countViewAttributes;
@property (retain, nonatomic) UICollectionViewLayoutAttributes *iconViewAttributes;
@property (retain, nonatomic) NSArray *avatarAttributesCollection;
@property (retain, nonatomic) NSArray *nameAttributesCollection;
@property (retain, nonatomic) CKAttributionViewModelObject *modelObject;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyAlphaToAllAttributesAlpha:(double)a0;
- (void)_setCollapsedAttributes:(id)a0;
- (void)_setExpandedAttributes:(id)a0;
- (id)initWithModelObject:(id)a0 section:(long long)a1;
- (void)setContainerAttributes:(id)a0 layoutMode:(long long)a1;

@end
