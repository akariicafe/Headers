@class NSCalendar;

@interface HKMostRecentValueQuantityTypeDataSource : HKQuantityTypeDataSource

@property (retain, nonatomic) NSCalendar *currentCalendar;
@property (nonatomic) BOOL attenuated;

- (id)queryDescription;
- (void).cxx_destruct;
- (id)queriesForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithUnitController:(id)a0 displayType:(id)a1 healthStore:(id)a2 currentCalendar:(id)a3;
- (id)_dataSourceValueFromMostRecentQuantity:(id)a0 quantityDateInterval:(id)a1 statisticsInterval:(id)a2;
- (BOOL)_interval:(id)a0 isEqualToInterval:(id)a1;
- (id)_intervalFromZoomLevel:(long long)a0;
- (id)_intervalFromZoomLevel:(long long)a0 resolution:(long long)a1;
- (id)_middleDateFromInterval:(id)a0 endDate:(id)a1;
- (id)initWithUnitController:(id)a0 displayType:(id)a1 healthStore:(id)a2 currentCalendar:(id)a3 attenuated:(BOOL)a4;

@end
