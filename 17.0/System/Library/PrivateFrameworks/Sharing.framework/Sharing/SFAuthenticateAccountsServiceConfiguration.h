@class NSSet;

@interface SFAuthenticateAccountsServiceConfiguration : NSObject <NSCopying>

@property (nonatomic) unsigned int serviceType;
@property (nonatomic) unsigned int targetedAccountTypes;
@property (copy, nonatomic) NSSet *existingAccountsIdentifiers;
@property (nonatomic) BOOL isHomeSharingSetupNeeded;
@property (nonatomic) BOOL isHomeKitSetupNeeded;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
