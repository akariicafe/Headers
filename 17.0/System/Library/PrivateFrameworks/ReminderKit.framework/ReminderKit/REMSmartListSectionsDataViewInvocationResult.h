@class NSArray;

@interface REMSmartListSectionsDataViewInvocationResult : REMStoreInvocationResult <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *accountStorages;
@property (readonly, nonatomic) NSArray *smartListStorages;
@property (readonly, nonatomic) NSArray *groupStorages;
@property (readonly, nonatomic) NSArray *smartListSectionStorages;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAccountStorages:(id)a0 smartListStorages:(id)a1 groupStorages:(id)a2 smartListSectionStorages:(id)a3;

@end
