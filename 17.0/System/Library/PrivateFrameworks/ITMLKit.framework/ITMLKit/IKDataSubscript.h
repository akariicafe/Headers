@interface IKDataSubscript : IKDataAccessor

@property (readonly, nonatomic) long long subscriptIndex;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSubscriptIndex:(long long)a0;

@end
