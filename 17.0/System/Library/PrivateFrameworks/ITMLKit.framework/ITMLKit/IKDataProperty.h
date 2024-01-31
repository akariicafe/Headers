@class NSString;

@interface IKDataProperty : IKDataAccessor

@property (readonly, nonatomic) NSString *property;

- (id)initWithProperty:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
