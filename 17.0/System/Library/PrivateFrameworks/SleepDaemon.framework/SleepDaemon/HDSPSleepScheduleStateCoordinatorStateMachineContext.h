@interface HDSPSleepScheduleStateCoordinatorStateMachineContext : HKSPStateMachineContext

@property (readonly, nonatomic) unsigned long long reason;
@property (readonly, nonatomic) BOOL isForAlarmTurnedOffWhileFiring;

+ (id)contextWithReason:(unsigned long long)a0;
+ (id)contextForAlarmTurnedOffWhileFiring;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
