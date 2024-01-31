@class NSNumber;

@interface HDMCUnconfirmedDeviationNotificationStateMachineState : NSObject

@property (readonly, copy, nonatomic) NSNumber *fireDayIndex;

+ (id)stateFromDictionaryRepresentation:(id)a0;

- (long long)stateType;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)hk_redactedDescription;
- (id)computeFiredStateWithCurrentDayIndex:(long long)a0;
- (id)computeNewStateFromAnalysis:(id)a0 dismissalDayIndex:(id)a1 currentDate:(id)a2 unconfirmedDeviationNotificationTimeOfDay:(id)a3;
- (id)computeNewStateFromMaxEnd:(long long)a0 dismissalDayIndex:(id)a1 scheduledFireDayIndex:(long long)a2;
- (id)computeNewStateFromUnconfirmedDeviations:(id)a0 dismissalDayIndex:(id)a1 scheduledFireDayIndex:(long long)a2;
- (id)computeStateFromNoUnconfirmedDeviations;
- (id)initWithFireDayIndex:(id)a0;
- (id)scheduledNotificationFireDayIndex;

@end
