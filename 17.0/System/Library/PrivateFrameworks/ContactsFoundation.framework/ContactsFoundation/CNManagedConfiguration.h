@class NSString;
@protocol CNManagedProfileConnection;

@interface CNManagedConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) id<CNManagedProfileConnection> profileConnection;
@property (readonly, copy, nonatomic) NSString *providerContainerIdentifier;

+ (id)os_log;

- (BOOL)deviceHasManagementRestrictions;
- (id)init;
- (BOOL)canWriteToAccountWithIdentifier:(id)a0 fromSourceAccountIdentifier:(id)a1;
- (id)initForContactsProvider;
- (BOOL)accountIsManaged:(id)a0;
- (id)writableAccountIdentifiersFromIdentifiers:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 managedProfileConnection:(id)a1;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 managedProfileConnection:(id)a1;
- (void)setProviderContainerIdentifier:(id)a0;
- (BOOL)canWriteToAccountWithIdentifier:(id)a0;
- (BOOL)canWriteToLocalAccount;
- (int)accountManagementForIdentifier:(id)a0;
- (BOOL)canReadFromLocalAccount;
- (BOOL)accountIsManagedForIdentifier:(id)a0;
- (BOOL)canReadFromAccountWithIdentifier:(id)a0;
- (BOOL)canAccessProviderContainerWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)accountForIdentifier:(id)a0;
- (id)writableAccountsFromAccounts:(id)a0;
- (id)readableAccountIdentifiersFromIdentifiers:(id)a0;
- (id)writableAccountsFromAccounts:(id)a0 sourceAccountManagement:(int)a1;
- (BOOL)hasContactsProviderRestrictions;
- (id)readableAccountsFromAccounts:(id)a0;

@end
