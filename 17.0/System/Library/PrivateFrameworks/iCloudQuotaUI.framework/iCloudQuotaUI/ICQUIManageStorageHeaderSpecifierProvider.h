@class PSSpecifier, ICQCloudStorageSummary, NSArray, AIDAAccountManager, NSString;
@protocol ICQUIManageStorageSpecifierProviderDelegate;

@interface ICQUIManageStorageHeaderSpecifierProvider : NSObject <AAUISpecifierProvider>

@property (retain, nonatomic) AIDAAccountManager *accountManager;
@property (retain, nonatomic) ICQCloudStorageSummary *storageSummary;
@property (retain, nonatomic) PSSpecifier *storageSpecifier;
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
- (id)_valueForStorageGraphSpecifier:(id)a0;
- (void)_fetchStorageSummaryAndRefreshSpecifiers;
- (long long)cellTypeForAction:(long long)a0;
- (long long)cellTypeForSpecifierInfo:(id)a0;
- (id)initWithAccountManager:(id)a0 storageSummary:(id)a1;
- (void)launchActionFromSpecifier:(id)a0;
- (id)makeFamilyAndPlanManagementSpecifiers;
- (id)makeThermometerSpecifiers;
- (void)refreshHeaderSpecifiersWithSummary:(id)a0;

@end
