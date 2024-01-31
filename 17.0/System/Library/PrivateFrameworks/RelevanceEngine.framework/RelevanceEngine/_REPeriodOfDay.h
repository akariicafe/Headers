@class NSDate, NSDateInterval;

@interface _REPeriodOfDay : NSObject <_REPeriodOfDayProperties>

@property (readonly, nonatomic) NSDateInterval *interval;
@property (readonly, nonatomic) unsigned long long periodOfDay;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithInterval:(id)a0 periodOfDay:(unsigned long long)a1;

@end
