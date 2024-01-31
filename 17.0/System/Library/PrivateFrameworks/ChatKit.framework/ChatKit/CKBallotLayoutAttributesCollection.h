@class NSArray, UICollectionViewLayoutAttributes;

@interface CKBallotLayoutAttributesCollection : NSObject <NSCopying>

@property (retain, nonatomic) UICollectionViewLayoutAttributes *containerAttributes;
@property (retain, nonatomic) UICollectionViewLayoutAttributes *voteCountAttributes;
@property (retain, nonatomic) UICollectionViewLayoutAttributes *ackIconAttributes;
@property (retain, nonatomic) NSArray *avatarAttributesCollection;
@property (retain, nonatomic) NSArray *nameAttributesCollection;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_applyAlphaToAllAttributesAlpha:(double)a0;
- (void)_setContainerAttributes:(id)a0 forLayoutMode:(unsigned long long)a1;

@end
