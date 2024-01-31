@class NSArray;

@interface REMListsDataViewInvocation_dataAccessFetchByObjectID : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *objectIDs;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithObjectIDs:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
