@interface HealthRecordsUI.SingleValueCurrentValueViewDataSource : HKCurrentValueViewDataSource <HKCurrentValueViewDataSourceDelegate> {
    void /* unknown type, empty encoding */ lastCachedNumberOfChartPoints;
}

- (id)init;
- (id)initWithDateCache:(id)a0 healthStore:(id)a1 selectedRangeFormatter:(id)a2;
- (id)titleFor:(id)a0;
- (void)updateDataSourceWithGraphView:(id)a0 displayType:(id)a1 timeScope:(long long)a2;

@end
