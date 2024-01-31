@class NSString, PSDataUsageStatisticsCache;
@protocol PSBillingPeriodSource, PSAppCellularUsageSpecifierDelegate;

@interface PSAppCellularUsageSpecifier : PSSpecifier <PSSpecifierDataUsageReporter>

@property (retain, nonatomic) PSDataUsageStatisticsCache *statisticsCache;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL shouldShowUsage;
@property (weak, nonatomic) id<PSBillingPeriodSource> billingPeriodSource;
@property (weak, nonatomic) id<PSAppCellularUsageSpecifierDelegate> delegate;

+ (id)systemPolicySpecifierForAppName:(id)a0 bundleID:(id)a1 icon:(id)a2 enabled:(BOOL)a3;
+ (id)appSpecifierWithBundleID:(id)a0 name:(id)a1 statisticsCache:(id)a2;
+ (id)_specifierWithDisplayName:(id)a0 bundleID:(id)a1 shouldShowUsage:(BOOL)a2 icon:(id)a3 statisticsCache:(id)a4;
+ (void)setIconForSpecifier:(id)a0 bundleID:(id)a1;
+ (id)systemPolicySpecifierForAppName:(id)a0 bundleID:(id)a1 icon:(id)a2;

- (unsigned long long)dataUsage;
- (void).cxx_destruct;
- (BOOL)isRestricted;
- (id)dataUsageString;
- (id)cellularUsagePolicy;
- (void)setCellularUsagePolicy:(id)a0;

@end
