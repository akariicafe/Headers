@class NSDateInterval, NSArray, NSDate;

@interface _HKSampleQueryResult : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy, nonatomic) NSArray *samples;

- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 samples:(id)a2;

@end
