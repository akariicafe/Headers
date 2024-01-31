@class NSDate;

@interface TVPDateRange : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) double durationInSeconds;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)containsDate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithStartDate:(id)a0 duration:(double)a1;
- (id)dateRangeByIntersectingDateRange:(id)a0;

@end
