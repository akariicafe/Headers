@class NSString, REMObjectID;

@interface REMListsDataViewInvocation_userActivityFetchByExternalIdentifier : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *externalIdentifier;
@property (readonly, nonatomic) REMObjectID *accountObjectID;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithExternalIdentifier:(id)a0 accountObjectID:(id)a1;

@end
