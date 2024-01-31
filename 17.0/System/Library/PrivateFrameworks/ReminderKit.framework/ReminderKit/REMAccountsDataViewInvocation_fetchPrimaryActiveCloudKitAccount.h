@interface REMAccountsDataViewInvocation_fetchPrimaryActiveCloudKitAccount : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL fetchREMObjectIDOnly;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)name;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFetchREMObjectIDOnly:(BOOL)a0;

@end
