@interface HDSPTimeAsleepTrackerStateMachineContext : HKSPStateMachineContext

@property (readonly, nonatomic) unsigned long long startReason;
@property (readonly, nonatomic) unsigned long long endReason;

+ (id)contextWithEndReason:(unsigned long long)a0;
+ (id)contextWithStartReason:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
