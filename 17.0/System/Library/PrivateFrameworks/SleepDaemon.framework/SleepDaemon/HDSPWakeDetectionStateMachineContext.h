@interface HDSPWakeDetectionStateMachineContext : HKSPStateMachineContext

@property (readonly, nonatomic) unsigned long long type;

+ (id)contextWithType:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
