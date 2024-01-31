@class REMObjectID;

@interface REMListsDataViewInvocation_fetchDefaultListRequiringCloudKit : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) REMObjectID *accountObjectID;
@property (nonatomic) BOOL debug_useInMemoryPreferredDefaultListStorage;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAccountObjectID:(id)a0 debugUseInMemoryPreferredDefaultListStorage:(BOOL)a1;

@end
