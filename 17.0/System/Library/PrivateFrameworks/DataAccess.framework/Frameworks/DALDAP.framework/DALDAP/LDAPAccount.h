@class NSMutableSet, NSMutableArray;

@interface LDAPAccount : DAAccount

@property (retain, nonatomic) NSMutableSet *searchTaskSet;
@property (retain, nonatomic) NSMutableArray *mutableSearchSettings;

- (id)searchSettings;
- (BOOL)isEqualToAccount:(id)a0;
- (void).cxx_destruct;
- (id)localizedInvalidPasswordMessage;
- (void)_reallyCancelAllSearchQueries;
- (void)_reallyCancelSearchQuery:(id)a0;
- (void)_reallyPerformSearchQuery:(id)a0;
- (void)discoverInitialPropertiesWithConsumer:(id)a0;
- (void)ingestBackingAccountInfoProperties;
- (id)initWithBackingAccountInfo:(id)a0;
- (BOOL)isLDAPAccount;
- (id)localizedIdenticalAccountFailureMessage;
- (id)onBehalfOfBundleIdentifier;
- (id)connectionURL;
- (void)addSearchSettings:(id)a0;
- (id)connectionURLWithSSL:(BOOL)a0;
- (void)ldapGetDefaultSearchBaseTask:(id)a0 completedWithStatus:(long long)a1 error:(id)a2 defaultSearchBase:(id)a3;
- (void)ldapSearchTask:(id)a0 finishedWithError:(id)a1 foundItems:(id)a2;
- (void)removeSearchSettings:(id)a0;

@end
