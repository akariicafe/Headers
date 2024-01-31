@class HKActivitySummaryDataProvider, NSString;
@protocol HKDateRangeDataUpdateDelegate;

@interface _ActivitySourceDelegateProvider : _ActivitySourceDelegate <HKActivitySummaryDataProviderObserver>

@property (readonly, nonatomic) HKActivitySummaryDataProvider *dataProvider;
@property (weak, nonatomic) id<HKDateRangeDataUpdateDelegate> dateRangeDataUpdateDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setUpdateDelegate:(id)a0;
- (id)activitySummariesForDateRange:(id)a0 timeScope:(long long)a1;
- (void)activitySummaryDataProviderDidUpdateActivitySummaries:(id)a0;
- (id)initWithDataProvider:(id)a0 activityValue:(long long)a1 displayTypeController:(id)a2 unitPreferenceController:(id)a3;

@end
