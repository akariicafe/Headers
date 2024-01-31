@class NSArray;

@interface REMRemindersDataViewInvocationResult : REMStoreInvocationResult <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *accountStorages;
@property (readonly, nonatomic) NSArray *listStorages;
@property (readonly, nonatomic) NSArray *reminderStorages;
@property (readonly, nonatomic) NSArray *objectIDs;

- (unsigned long long)hash;
- (id)initWithAccountStorages:(id)a0 listStorages:(id)a1 reminderStorages:(id)a2 objectIDs:(id)a3;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
