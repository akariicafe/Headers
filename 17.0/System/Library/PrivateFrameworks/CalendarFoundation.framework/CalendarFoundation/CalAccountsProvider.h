@class NSArray, ACAccountStore, NSMutableArray;

@interface CalAccountsProvider : NSObject

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) NSMutableArray *accountsWhenRunningUnitTests;
@property (readonly, nonatomic) NSArray *allAccounts;
@property (readonly, nonatomic) NSArray *accountsEnabledForCalendar;
@property (readonly, nonatomic) NSArray *accountsEnabledForReminders;
@property (readonly, nonatomic) NSArray *enabledAccounts;
@property (nonatomic) BOOL runningUnitTests;

+ (id)_accountTypeWithIdentifier:(id)a0 inStore:(id)a1;
+ (id)defaultProvider;
+ (id)_accountsWithAccountType:(id)a0 inStore:(id)a1 error:(id *)a2;
+ (id)_existingAccountForAccount:(id)a0 inStore:(id)a1;
+ (id)_uniqueStringsForUsername:(id)a0;
+ (BOOL)accountIsDuplicate:(id)a0 inStore:(id)a1;
+ (id)uniqueStringsForHostname:(id)a0;
+ (id)uniqueStringsForPrincipalPath:(id)a0;
+ (id)verboseDescriptionForAccount:(id)a0;

- (id)init;
- (id)accountWithIdentifier:(id)a0;
- (id)accountTypeWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)primaryAppleAccount;
- (void)removeAccount:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)saveAccount:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_accountsEnabledForDataClasses:(id)a0;
- (id)oauthTokenForAccount:(id)a0 tokenType:(id)a1;
- (id)_accountsEnabledForDataClass:(id)a0;
- (BOOL)_bundleIDSupportsDataclassCalendars:(id)a0;
- (BOOL)_bundleIDSupportsDataclassReminders:(id)a0;
- (id)_mainBundleID;
- (id)_providerForCalDAVAccount:(id)a0;
- (id)_supportedDataclassesForBundleID:(id)a0;
- (id)_supportedDataclassesForMainBundleID;
- (BOOL)account:(id)a0 hasServerURL:(id)a1;
- (BOOL)accountIsDuplicate:(id)a0;
- (id)accountWithIdentifier:(id)a0 returnCachedVersion:(BOOL)a1;
- (id)accountsWithAccountTypeIdentifier:(id)a0 error:(id *)a1;
- (id)accountsWithServerURL:(id)a0;
- (id)accountsWithServerURL:(id)a0 username:(id)a1 returnCachedVersions:(BOOL)a2;
- (id)accountsWithUsername:(id)a0;
- (id)allAccountsWithError:(id *)a0;
- (id)clientTokenForAccountWithIdentifier:(id)a0;
- (id)delegatePrincipalUIDsForAccount:(id)a0;
- (id)existingAccountForAccount:(id)a0;
- (BOOL)removeAccount:(id)a0 withError:(id *)a1;
- (BOOL)renewCredentialsForAccount:(id)a0;
- (BOOL)renewCredentialsForAccount:(id)a0 forceRenewal:(BOOL)a1;
- (void)renewCredentialsForAccount:(id)a0 forceRenewal:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)saveAccount:(id)a0 verify:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (BOOL)saveAccount:(id)a0 verify:(BOOL)a1 withError:(id *)a2;
- (BOOL)saveAccount:(id)a0 withError:(id *)a1;

@end
