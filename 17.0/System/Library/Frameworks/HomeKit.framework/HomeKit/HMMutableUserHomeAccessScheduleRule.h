@class NSDateComponents, NSDate;

@interface HMMutableUserHomeAccessScheduleRule : HMUserHomeAccessScheduleRule

@property (copy) NSDateComponents *startTime;
@property (copy) NSDateComponents *endTime;
@property unsigned long long daysOfTheWeek;
@property (copy) NSDate *validFrom;
@property (copy) NSDate *validThrough;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
