@interface TPSCallingLineIdRestrictionSetRequest : TPSCallingLineIdRestrictionRequest

@property (readonly, nonatomic) long long state;

+ (id)unarchivedObjectClasses;

- (BOOL)isEqualToRequest:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSubscriptionContext:(id)a0;
- (id)initWithSubscriptionContext:(id)a0 state:(long long)a1;

@end
