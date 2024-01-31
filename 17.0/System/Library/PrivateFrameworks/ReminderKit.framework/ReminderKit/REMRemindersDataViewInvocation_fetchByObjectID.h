@class NSArray, REMReminderFetchOptions;

@interface REMRemindersDataViewInvocation_fetchByObjectID : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *objectIDs;
@property (readonly, nonatomic) REMReminderFetchOptions *fetchOptions;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObjectIDs:(id)a0 fetchOptions:(id)a1;

@end
