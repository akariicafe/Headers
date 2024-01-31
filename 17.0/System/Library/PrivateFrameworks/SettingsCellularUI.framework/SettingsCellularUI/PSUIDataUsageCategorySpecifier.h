@class NSArray, PSDataUsageStatisticsCache;
@protocol PSBillingPeriodSource;

@interface PSUIDataUsageCategorySpecifier : PSSpecifier

@property (retain, nonatomic) PSDataUsageStatisticsCache *statisticsCache;
@property (nonatomic) unsigned long long type;
@property (weak, nonatomic) id<PSBillingPeriodSource> billingPeriodSource;
@property (retain, nonatomic) NSArray *subcategorySpecifiers;

- (unsigned long long)dataUsage;
- (id)getLogger;
- (void).cxx_destruct;
- (id)dataUsageString;
- (id)initWithType:(unsigned long long)a0 subSpecifiers:(id)a1;

@end
