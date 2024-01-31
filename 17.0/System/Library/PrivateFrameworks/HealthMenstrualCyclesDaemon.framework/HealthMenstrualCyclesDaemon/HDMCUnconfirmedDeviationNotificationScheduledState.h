@interface HDMCUnconfirmedDeviationNotificationScheduledState : HDMCUnconfirmedDeviationNotificationStateMachineState

+ (id)notificationStateFromDictionaryRepresentation:(id)a0;

- (long long)stateType;
- (id)computeFiredStateWithCurrentDayIndex:(long long)a0;
- (id)computeNewStateFromMaxEnd:(long long)a0 dismissalDayIndex:(id)a1 scheduledFireDayIndex:(long long)a2;
- (id)initWithFireDayIndex:(id)a0;
- (id)scheduledNotificationFireDayIndex;

@end
