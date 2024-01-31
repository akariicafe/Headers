@interface ATXProactiveSuggestionGroupedUIFeedbackQuery : ATXProactiveSuggestionUIFeedbackQuery

- (id)uiPublisherForConsumerSubType:(unsigned char)a0 startTime:(double)a1;
- (void)enumerateGroupedUIFeedbackResultsWithBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (void)enumerateGroupedUIFeedbackResultsWithBlock:(id /* block */)a0 completionBlock:(id /* block */)a1 uiFeedbackPublisherChain:(id)a2;
- (id)initWithClientModelIds:(id)a0 consumerSubTypeToConsider:(unsigned char)a1 startDateForResults:(id)a2 bookmarkURLPath:(id)a3 hyperParameters:(id)a4;
- (id)uiFeedbackPublisherChainForShortcutsEditor;

@end
