@class NSDateInterval;

@interface ATXContextAlarmSuggestionProducer : NSObject {
    NSDateInterval *_validDateInterval;
    double _score;
    long long _reasonCode;
}

- (void).cxx_destruct;
- (id)_alarmsWithEnvironment:(id)a0 startTimestamp:(double)a1 endTimestamp:(double)a2;
- (id)_criteriaWithAlarm:(id)a0;
- (id)_filterAlarmsEligible:(id)a0 proposedInterval:(id)a1;
- (BOOL)_isToggleContextualAction:(id)a0;
- (id)_morningAlarmsWithEnvironment:(id)a0;
- (id)_nextMorningAlarmsWithEnvironment:(id)a0;
- (id)editNextAlarmSuggestionsWithEnvironment:(id)a0;
- (id)initWithValidDateInterval:(id)a0 reasonCode:(long long)a1 score:(double)a2;
- (id)morningAlarmToggleSuggestionsWithEnvironment:(id)a0;

@end
