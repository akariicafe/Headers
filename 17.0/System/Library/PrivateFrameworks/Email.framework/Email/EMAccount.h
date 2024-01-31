@class NSString;

@interface EMAccount : EMObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSString *hostname;
@property (readonly, nonatomic, getter=isPrimaryiCloudAccount) BOOL primaryiCloudAccount;

+ (BOOL)supportsSecureCoding;
+ (id)sortDescriptorForNameAscending:(BOOL)a0;
+ (id)predicateForDeliveryAccounts;
+ (id)predicateForReceivingAccounts;

- (id)ef_publicDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
