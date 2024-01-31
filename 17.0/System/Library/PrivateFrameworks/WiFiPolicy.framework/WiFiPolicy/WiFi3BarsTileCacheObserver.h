@class TBDataSourceMediator;

@interface WiFi3BarsTileCacheObserver : NSObject

@property (retain, nonatomic) TBDataSourceMediator *dataSourceMediator;

- (void)_scheduleXPCActivity;
- (void).cxx_destruct;
- (void)_submitCacheAvailabilityMetric;
- (id)initWithDataSourceMediator:(id)a0;

@end
