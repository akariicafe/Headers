@class NSNumber;

@interface HDMCOvulationConfirmationNotificationWaitingState : HDMCOvulationConfirmationNotificationStateMachineState

@property (readonly, copy, nonatomic) NSNumber *notificationPreviouslyFiredDayIndex;

+ (id)notificationStateFromDictionaryRepresentation:(id)a0;

- (long long)stateType;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)computeNewStateFromCorrelatingPeriodStartDayIndex:(long long)a0 fertileWindowEndDayIndex:(long long)a1 fireDayIndex:(long long)a2 daysShiftedForFertileWindow:(long long)a3 daysWithWristTemp45DaysBeforeOvulationConfirmed:(long long)a4;
- (id)firedDayIndex;
- (id)initWithFiredDayIndex:(id)a0;

@end
