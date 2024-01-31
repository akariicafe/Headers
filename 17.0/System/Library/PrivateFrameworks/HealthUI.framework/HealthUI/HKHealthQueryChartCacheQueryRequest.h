@class NSDateComponents, NSDate;

@interface HKHealthQueryChartCacheQueryRequest : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSDateComponents *statisticsInterval;
@property (readonly, nonatomic) unsigned long long audience;

- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 audience:(unsigned long long)a3;

@end
