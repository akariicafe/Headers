@class NSArray;

@interface TPSCellularNetworksResponse : TPSResponse

@property (readonly, copy, nonatomic) NSArray *cellularNetworks;

+ (id)unarchivedObjectFromData:(id)a0 error:(id *)a1;
+ (id)unarchivedObjectClasses;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToResponse:(id)a0;
- (id)archivedDataWithError:(id *)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSubscriptionContext:(id)a0 error:(id)a1;
- (id)initWithSubscriptionContext:(id)a0 error:(id)a1 cellularNetworks:(id)a2;

@end
