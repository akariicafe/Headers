@interface HDSPSleepModeStateMachineContext : HKSPStateMachineContext

@property (readonly, nonatomic) unsigned long long reason;

+ (id)contextWithReason:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
