@interface RTTimerManager : NSObject

- (id)xpcTimerAlarmWithIdentifier:(id)a0 queue:(id)a1 handler:(id /* block */)a2;
- (id)timerWithIdentifier:(id)a0 queue:(id)a1 handler:(id /* block */)a2;

@end
