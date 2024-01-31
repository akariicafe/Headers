@class CNContactFormatter, _CDInteractionStore, EKEventStore, REMStore;

@interface _PSSuggestionFromTextPredictor : NSObject {
    EKEventStore *_eventStore;
    _CDInteractionStore *_interactionStore;
    CNContactFormatter *_contactFormatter;
    REMStore *_remStore;
}

+ (BOOL)isEligibleUnstructuredEvent:(id)a0;

- (id)suggestionsFromUnstructuredCalendarEventsWithContext:(id)a0 startDate:(id)a1 endDate:(id)a2 priorScoreThreshold:(float)a3;
- (id)suggestionsFromIncompleteRemindersWithContext:(id)a0 startDate:(id)a1 endDate:(id)a2 priorScoreThreshold:(float)a3;
- (id)suggestionFromText:(id)a0 priorScoreThreshold:(float)a1 bundleID:(id)a2 reason:(id)a3;
- (void).cxx_destruct;
- (id)suggestionFromContactPriors:(id)a0 priorScoreThreshold:(float)a1 bundleID:(id)a2 reason:(id)a3;
- (id)suggestionsFromPortraitExtractionsWithContext:(id)a0 startDate:(id)a1 endDate:(id)a2 priorScoreThreshold:(float)a3 reason:(id)a4;
- (id)initWithEventStore:(id)a0 interactionStore:(id)a1;

@end
