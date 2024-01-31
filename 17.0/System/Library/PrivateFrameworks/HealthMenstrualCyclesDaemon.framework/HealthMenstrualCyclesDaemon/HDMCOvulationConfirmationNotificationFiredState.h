@interface HDMCOvulationConfirmationNotificationFiredState : HDMCOvulationConfirmationNotificationStateMachineState

@property (readonly, nonatomic) long long fireDayIndex;

+ (id)notificationStateFromDictionaryRepresentation:(id)a0;

- (long long)stateType;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)computeNewStateFromCorrelatingPeriodStartDayIndex:(long long)a0 fertileWindowEndDayIndex:(long long)a1 fireDayIndex:(long long)a2 daysShiftedForFertileWindow:(long long)a3 daysWithWristTemp45DaysBeforeOvulationConfirmed:(long long)a4;
- (id)firedDayIndex;
- (id)initWithFireDayIndex:(long long)a0;

@end
