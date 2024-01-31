@class NSArray, NSString, AIDAAccountManager, ICQCloudStorageApps, UINavigationItem;
@protocol ICQUIManageStorageSpecifierProviderDelegate;

@interface ICQUIManageStorageListSpecifierProvider : NSObject <AAUISpecifierProvider>

@property (retain, nonatomic) AIDAAccountManager *accountManager;
@property (retain, nonatomic) ICQCloudStorageApps *storageApps;
@property (nonatomic) BOOL isFetching;
@property (nonatomic) BOOL failedToFetchAppList;
@property (weak, nonatomic) UINavigationItem *navigationItem;
@property (weak, nonatomic) id<ICQUIManageStorageSpecifierProviderDelegate> delegate;
@property (copy, nonatomic) NSArray *specifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)account;
- (void).cxx_destruct;
- (id)initWithAccountManager:(id)a0;
- (void)_refreshAppList;
- (void)_reloadSpecifiers;
- (void)addDecorationToSpecifier:(id)a0 usingAppInfo:(id)a1;
- (id)initWithAccountManager:(id)a0 navigationItem:(id)a1;
- (void)loadDrilldownFromSpecifier:(id)a0;
- (id)nativeSpecifierForAppInfo:(id)a0;
- (id)serverUISpecifierForAppInfo:(id)a0;

@end
