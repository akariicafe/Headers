@class CHSProactiveService, SBSWidgetMetricsService, _PASQueueLock;
@protocol ATXChronoServicesProviderDelegate;

@interface ATXChronoServicesProvider : NSObject {
    CHSProactiveService *_proactiveService;
    SBSWidgetMetricsService *_widgetMetricService;
    _PASQueueLock *_lock;
}

@property (weak, nonatomic) id<ATXChronoServicesProviderDelegate> delegate;

- (void)_removeOudatedFailureEntriesInGuardedData:(id)a0;
- (id)init;
- (void)resetToPrewarmWidgetsInSuggestions:(id)a0;
- (void)_requestChronoToLoadWidget:(id)a0 inGuardedData:(id)a1;
- (BOOL)_allReloadsAreCompletedInGuardedData:(id)a0;
- (id)_recordFromSuggestionLayout:(id)a0 guardedData:(id)a1;
- (void).cxx_destruct;
- (id)initWithProactiveService:(id)a0 widgetMetricsService:(id)a1;
- (void)_updateAndSendHomeScreenSuggestionsToDelegateWithGuardedData:(id)a0;
- (void)_chronoDidReplyHandle:(id)a0 timelineEntries:(id)a1 forWidget:(id)a2 withError:(id)a3;
- (id)_widgetFromSuggestionLayout:(id)a0;
- (void)_updateGuardedData:(id)a0 withNewCachedSuggestions:(id)a1;
- (BOOL)_shouldBlockSuggestionForWidget:(id)a0 entries:(id)a1;
- (BOOL)_isCurrentTimelineRelevanceScoreNonPositiveForEntries:(id)a0;

@end
