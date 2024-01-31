@class DNDScheduleTime;

@interface DNDMutableScheduleTimePeriod : DNDScheduleTimePeriod

@property (copy, nonatomic) DNDScheduleTime *startTime;
@property (copy, nonatomic) DNDScheduleTime *endTime;
@property (nonatomic) unsigned long long weekdays;

- (void)setStartTime:(id)a0;
- (void)setWeekdays:(unsigned long long)a0;
- (void)setEndTime:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
