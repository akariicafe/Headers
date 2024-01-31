@interface ICInclusionFilterTypeSelection : ICFilterTypeSelection <NSCopying>

@property (readonly, nonatomic) unsigned long long inclusionType;

- (long long)filterType;
- (unsigned long long)hash;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithInclusionType:(unsigned long long)a0;
- (BOOL)isEqualToInclusionFilterSelection:(id)a0;
- (id)rawFilterValue;

@end
