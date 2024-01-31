@class PSDataUsageStatisticsCache;
@protocol PSAppCellularUsageSpecifierDelegate;

@interface PSUIAppsAndCategoriesDataUsageSubgroup : NSObject

@property (weak, nonatomic) id<PSAppCellularUsageSpecifierDelegate> specifierDelegate;
@property (retain, nonatomic) PSDataUsageStatisticsCache *statisticsCache;

- (id)getLogger;
- (id)specifiers;
- (void).cxx_destruct;
- (void)addDataUsageCategorySpecifierToSpecifiers:(id)a0 appType:(unsigned long long)a1;
- (id)initWithPolicySpecifierDelegate:(id)a0 statisticsCache:(id)a1;
- (id)usageSpecifiersForAppType:(unsigned long long)a0 bundleIDs:(id)a1;

@end
