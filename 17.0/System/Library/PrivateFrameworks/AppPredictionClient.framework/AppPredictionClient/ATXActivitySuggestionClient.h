@class BMInferredModeStream, BMBiomeScheduler, NSHashTable, _PASSimpleCoalescingTimer, NSObject, ATXActivitySuggestionFeedbackStream, BPSSink, RTRoutineManager, CLCircularRegion;
@protocol OS_dispatch_queue;

@interface ATXActivitySuggestionClient : NSObject {
    BMInferredModeStream *_inferredModeStream;
    ATXActivitySuggestionFeedbackStream *_feedbackStream;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    BMBiomeScheduler *_scheduler;
    BPSSink *_sink;
    _PASSimpleCoalescingTimer *_coalescingTimer;
    RTRoutineManager *_routineManager;
}

@property (retain) CLCircularRegion *workRegion;
@property (retain) CLCircularRegion *homeRegion;

+ (id)sharedInstance;
+ (Class)ATXTriggerClassFromDNDModeConfigurationTrigger:(id)a0;
+ (Class)DNDModeConfigurationTriggerClassFromATXTrigger:(id)a0;

- (id)init;
- (id)triggersToDNDModeConfigurationTriggers:(id)a0;
- (void)_logFeedbackEventForSuggestionUUID:(id)a0 suggestionType:(unsigned long long)a1 eventType:(unsigned long long)a2 acceptedTriggers:(id)a3 location:(unsigned long long)a4;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)userDidSeeTriggerSuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;
- (void)didShowConfiguredActivitySuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;
- (void)didShowTriggerSuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;
- (void)userDidAcceptActivitySetUpSuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;
- (void)_modeDidChange;
- (id)currentSuggestion;
- (BOOL)_shouldSendAutomationSuggestionForMode:(unsigned long long)a0;
- (void)userDidRejectTriggerSuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;
- (void)_setUpPublisherIfNecessary;
- (void)userDidSeeActivitySetUpSuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;
- (id)localizedSuggestionReasonForBMInferredModeEvent:(id)a0;
- (void)didShowActivitySuggestion:(id)a0;
- (void)_fetchAndCacheLOIs;
- (void)registerObserver:(id)a0 sendingInitialChangeNotification:(BOOL)a1;
- (id)DNDModeConfigurationTriggersToATXTriggers:(id)a0;
- (void)addObserver:(id)a0 sendingInitialChangeNotification:(BOOL)a1;
- (void)userDidStartActivity:(id)a0 location:(unsigned long long)a1;
- (id)_activityForEvent:(id)a0;
- (void)didShowActivitySetUpSuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;
- (void)currentSuggestionWithCompletionHandler:(id /* block */)a0;
- (id)_suggestionWithActivity:(id)a0 modeGlobals:(id)a1;
- (void)_logFeedbackEventForActivitySetUpSuggestionWithSuggestionUUID:(id)a0 eventType:(unsigned long long)a1 acceptedTriggers:(id)a2 location:(unsigned long long)a3;
- (void)userDidStopActivity:(id)a0 location:(unsigned long long)a1;
- (void)userDidRejectActivitySetUpSuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;
- (void)_logFeedbackEventForTriggerSuggestionWithSuggestionUUID:(id)a0 eventType:(unsigned long long)a1 acceptedTriggers:(id)a2 location:(unsigned long long)a3;
- (void).cxx_destruct;
- (void)_logFeedbackEventForConfiguredActivitySuggestionWithSuggestionUUID:(id)a0 eventType:(unsigned long long)a1 location:(unsigned long long)a2;
- (void)userDidFinishActivitySetUpWithSuggestionUUID:(id)a0 acceptedTriggers:(id)a1 location:(unsigned long long)a2;
- (id)previousSuggestion;
- (void)userDidRejectActivitySuggestion:(id)a0;
- (BOOL)_activityIsEligibleForTriggerSuggestion:(id)a0 modeGlobals:(id)a1;
- (void)userDidRejectConfiguredActivitySuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;
- (id)initWithRoutineManager:(id)a0;
- (BOOL)_activityIsEligibleForSetUpSuggestion:(id)a0 modeGlobals:(id)a1;
- (BOOL)_shouldSendModeTriggerSuggestionAtEndOfModeToLockScreen:(id)a0 modeGlobals:(id)a1;
- (id)suggestionWithUUID:(id)a0;
- (void)userDidSeeConfiguredActivitySuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;
- (void)userDidAcceptTriggerSuggestionWithSuggestionUUID:(id)a0 acceptedTriggers:(id)a1 location:(unsigned long long)a2;
- (BOOL)_shouldSendModeSetUpSuggestionAtEndOfModeToLockScreen:(id)a0 modeGlobals:(id)a1;
- (void)userDidAcceptActivitySuggestion:(id)a0 acceptedTriggers:(id)a1;
- (void)userDidAcceptConfiguredActivitySuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;

@end
