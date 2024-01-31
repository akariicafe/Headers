@class MCProfileConnection;

@interface CADMCProfileConnectionManagedConfigurationHandler : NSObject <CADManagedConfigurationHandler>

@property (readonly, nonatomic) MCProfileConnection *connection;

- (BOOL)mayShowLocalAccountsForBundleID:(id)a0 sourceAccountManagement:(int)a1;
- (id)filteredOpenInOriginatingAccounts:(id)a0 targetAppBundleID:(id)a1 targetAccountManagement:(int)a2;
- (id)filteredOpenInAccounts:(id)a0 originatingAppBundleID:(id)a1 sourceAccountManagement:(int)a2;
- (BOOL)mayShowLocalAccountsForTargetBundleID:(id)a0 targetAccountManagement:(int)a1;
- (BOOL)isOpenInRestrictionInEffect;
- (void).cxx_destruct;
- (id)initWithMCProfileConnection:(id)a0;

@end
