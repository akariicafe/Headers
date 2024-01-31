@class NSDictionary;

@interface HKRemoteChartConfiguration : NSObject {
    NSDictionary *_statisticIntervalComponentsByTimeScope;
}

- (void).cxx_destruct;
- (id)initWithStatisticIntervalComponentsByTimeScope:(id)a0;
- (id)statisticIntervalComponentsForTimeScope:(long long)a0;

@end
