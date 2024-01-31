@interface TUICandidateLayoutAttributes : UICollectionViewLayoutAttributes

@property (nonatomic) unsigned long long candidateNumber;
@property (nonatomic) double contentAlpha;
@property (nonatomic) unsigned long long row;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
