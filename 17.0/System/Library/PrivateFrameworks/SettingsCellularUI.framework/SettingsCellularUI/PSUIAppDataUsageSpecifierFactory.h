@class PSUICellularUsageContentSpecifiers, PSUIResetStatisticsGroup, PSUICoreTelephonyDataCache, PSBillingPeriodSelectorSpecifier, CHManager, NSString, PSUICarrierSpaceManager, PSUITotalCellularUsageSubgroup, PSDataUsageStatisticsCache, NSArray, PSListController, PSUICallTimeGroup, PSCellularManagementCache;
@protocol PSAppCellularUsageSpecifierDelegate, PSUIResetStatisticsGroupDelegate, PSBillingPeriodSelectorSpecifierDelegate;

@interface PSUIAppDataUsageSpecifierFactory : NSObject <Loggable>

@property (retain, nonatomic) PSCellularManagementCache *managementCache;
@property (retain, nonatomic) PSDataUsageStatisticsCache *statisticsCache;
@property (retain, nonatomic) PSUICoreTelephonyDataCache *dataCache;
@property (retain, nonatomic) CHManager *callHistoryManager;
@property (retain, nonatomic) PSUICarrierSpaceManager *carrierSpaceManager;
@property (weak, nonatomic) PSListController *hostController;
@property (weak, nonatomic) id<PSBillingPeriodSelectorSpecifierDelegate> billingCycleDelegate;
@property (weak, nonatomic) id<PSAppCellularUsageSpecifierDelegate> policySpecifierDelegate;
@property (weak, nonatomic) id<PSUIResetStatisticsGroupDelegate> resetStatisticsDelegate;
@property (retain, nonatomic) NSString *groupSpecifierTitle;
@property (retain) NSArray *savedHeaderSpecifiers;
@property (retain) PSUICellularUsageContentSpecifiers *savedContentSpecifiers;
@property (retain, nonatomic) PSUITotalCellularUsageSubgroup *totalUsageSubgroup;
@property (retain, nonatomic) PSUICallTimeGroup *callTimeGroup;
@property (retain, nonatomic) PSUIResetStatisticsGroup *resetStatisticsGroup;
@property (retain, nonatomic) PSBillingPeriodSelectorSpecifier *billingPeriodSelectorSpecifier;
@property (retain, nonatomic) NSArray *bundleIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getLogger;
- (void).cxx_destruct;
- (id)headerSpecifiers;
- (void)addAppUsageSpecifiersToContentSpecifiers:(id)a0;
- (void)addLeadingSpecifiersToContentSpecifiers:(id)a0;
- (void)addTrailingSpecifiersToContentSpecifiers:(id)a0;
- (id)contentSpecifiers;
- (id)initWithGroupSpecifierTitle:(id)a0 hostController:(id)a1 managementCache:(id)a2 statisticsCache:(id)a3 dataCache:(id)a4 callHistoryManager:(id)a5 carrierSpaceManager:(id)a6 billingCycleDelegate:(id)a7 policySpecifierDelegate:(id)a8 resetStatisticsDelegate:(id)a9;
- (void)refreshOrderingOfContentSpecifiers;

@end
