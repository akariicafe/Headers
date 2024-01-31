@interface ICSTrigger : ICSProperty

- (id)initWithDuration:(id)a0;
- (void)setDate:(id)a0;
- (id)initWithDuration:(id)a0 travelRelativeDuration:(id)a1;
- (id)travelRelativeDuration;
- (id)initWithDate:(id)a0;
- (void)fixAlarmTrigger;
- (BOOL)isDurationBased;
- (void)setDuration:(id)a0;

@end
