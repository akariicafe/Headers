@interface ATXUIFeedbackBiomeCorrelateHandler : BPSCorrelateHandler

+ (id)uiFeedbackCorrelateHandler;

- (id)correlateWithCurrentEvent:(id)a0;
- (void)receivePriorEvent:(id)a0;
- (void)receiveCurrentEvent:(id)a0;
- (id)boxedExecutableHashForProactiveSuggestion:(id)a0;
- (void)updateMostRecentlySeenBlendingUICacheUpdateUUID:(id)a0;
- (BOOL)_proactiveSuggestionsContainEqualExecutablesWithSuggestion1:(id)a0 suggestion2:(id)a1;

@end
