@class NSArray, NSString, ACAccount, AIDAAccountManager;
@protocol AAUISpecifierProviderDelegate;

@interface DMCSpecifierProvider : NSObject <AAUISpecifierProvider>

@property (copy, nonatomic) NSArray *specifiers;
@property (weak, nonatomic) id<AAUISpecifierProviderDelegate> delegate;
@property (readonly, nonatomic) AIDAAccountManager *accountManager;
@property (readonly, nonatomic) ACAccount *rmAccount;
@property (nonatomic) BOOL isReloading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)tableCellsForSpecifiersInTableView:(id)a0;
- (id)specifiersReloadedNotificationName;
- (void)registerSpecifierBridgeForTableView:(id)a0;
- (id)initWithAccountManager:(id)a0 reloadNotification:(id)a1 isLocalNotification:(BOOL)a2 reloadIfMissingRMAccount:(BOOL)a3;
- (void)_listenForNotification:(id)a0 isLocalNotification:(BOOL)a1;
- (id)initWithAccount:(id)a0 reloadNotification:(id)a1 isLocalNotification:(BOOL)a2 reloadIfMissingRMAccount:(BOOL)a3;
- (void).cxx_destruct;
- (id)cellForSpecifier:(id)a0 inTableView:(id)a1;
- (void)reloadSpecifiers;
- (void)reloadNotificationPosted:(id)a0;
- (id)initWithAccountManager:(id)a0;
- (id)cachedSpecifiers:(id)a0;

@end
