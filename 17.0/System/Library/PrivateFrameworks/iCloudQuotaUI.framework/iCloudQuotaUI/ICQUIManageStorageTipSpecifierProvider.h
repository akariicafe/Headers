@class ICQCloudStorageSummary, NSArray, NSString;
@protocol AAUISpecifierProviderDelegate;

@interface ICQUIManageStorageTipSpecifierProvider : ICQUITipSpecifierProvider <AAUISpecifierProvider>

@property (weak, nonatomic) ICQCloudStorageSummary *storageSummary;
@property (weak, nonatomic) id<AAUISpecifierProviderDelegate> delegate;
@property (copy, nonatomic) NSArray *specifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)account;
- (void).cxx_destruct;
- (void)_fetchStorageSummaryAndRefreshSpecifiers;
- (void)_refreshTipsWithSummary:(id)a0;
- (void)_removeVisibleTip;
- (id)initWithAccountManager:(id)a0 presenter:(id)a1 summary:(id)a2;
- (id)manageStorageSpecifiersForSummary:(id)a0;

@end
