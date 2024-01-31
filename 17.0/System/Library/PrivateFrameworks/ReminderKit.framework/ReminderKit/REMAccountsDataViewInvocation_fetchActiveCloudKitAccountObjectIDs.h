@interface REMAccountsDataViewInvocation_fetchActiveCloudKitAccountObjectIDs : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long fetchOption;

- (unsigned long long)hash;
- (id)initWithFetchOption:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)name;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
