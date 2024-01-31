@class VIAFeedbackSubmitter, NSString, NSMutableDictionary, VIAEventCache, NSObject;
@protocol OS_dispatch_queue;

@interface VIAEntryPointLogger : NSObject <VIAEventLogging> {
    NSObject<OS_dispatch_queue> *_queue;
    VIAFeedbackSubmitter *_feedbackSubmitter;
    NSMutableDictionary *_appToQueryIDMap;
    NSMutableDictionary *_appToViewAppearEventMap;
    VIAEventCache *_eventCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)feedbackNamesToLog;

- (void).cxx_destruct;
- (void)_logEvent:(id)a0;
- (void)logEvent:(id)a0;
- (void)_logStartEvent:(id)a0;
- (void)_logDependentEvent:(id)a0;
- (void)_logEndEvent:(id)a0;
- (void)_logFeedback:(id)a0 queryID:(unsigned long long)a1;
- (void)_logVisibleSuggestionsFeedback:(id)a0 forViewAppearEvent:(unsigned long long)a1 queryID:(unsigned long long)a2;
- (BOOL)_preconditionCheckEvent:(id)a0;
- (id)_visibleSuggestionsFeedbackFromPendingFeeedback:(id)a0 forViewAppearEvent:(unsigned long long)a1;
- (void)didObserveEvent:(id)a0;
- (id)initWithQueue:(id)a0 feedbackSubmitter:(id)a1 eventCache:(id)a2;

@end
