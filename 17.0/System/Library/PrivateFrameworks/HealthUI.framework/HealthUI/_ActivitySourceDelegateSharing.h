@class NSDictionary, NSCalendar;

@interface _ActivitySourceDelegateSharing : _ActivitySourceDelegate

@property (retain, nonatomic) NSDictionary *timescopeToSummariesTable;
@property (retain, nonatomic) NSCalendar *calendar;

- (void).cxx_destruct;
- (void)setUpdateDelegate:(id)a0;
- (id)_filterSummaries:(id)a0 dateRange:(id)a1;
- (id)activitySummariesForDateRange:(id)a0 timeScope:(long long)a1;
- (id)initWithTimescopeToSummariesTable:(id)a0 activityValue:(long long)a1 displayTypeController:(id)a2 unitPreferenceController:(id)a3 calendar:(id)a4;

@end
