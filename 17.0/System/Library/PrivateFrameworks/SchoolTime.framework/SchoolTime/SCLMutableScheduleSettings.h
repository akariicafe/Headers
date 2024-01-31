@class SCLSchedule;

@interface SCLMutableScheduleSettings : SCLScheduleSettings

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) SCLSchedule *schedule;

- (void)setEnabled:(BOOL)a0;
- (void)setSchedule:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
