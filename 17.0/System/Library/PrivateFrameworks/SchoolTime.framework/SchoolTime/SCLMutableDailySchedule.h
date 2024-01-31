@interface SCLMutableDailySchedule : SCLDailySchedule

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStartTime:(id)a0 endTime:(id)a1 forDay:(long long)a2;
- (void)removeScheduleForDay:(long long)a0;

@end
