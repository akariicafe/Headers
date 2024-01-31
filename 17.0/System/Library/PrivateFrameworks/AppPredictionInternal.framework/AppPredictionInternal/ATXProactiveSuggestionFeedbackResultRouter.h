@class NSDictionary;

@interface ATXProactiveSuggestionFeedbackResultRouter : NSObject {
    NSDictionary *_feedbackListeners;
}

- (id)init;
- (void)_initializeFeedbackListenersDictWith:(id)a0;
- (id)initWithFeedbackListeners:(id)a0;
- (id)clientModelIdsWithFeedbackListeners;
- (void).cxx_destruct;
- (void)handleNewFeedbackResult:(id)a0;

@end
