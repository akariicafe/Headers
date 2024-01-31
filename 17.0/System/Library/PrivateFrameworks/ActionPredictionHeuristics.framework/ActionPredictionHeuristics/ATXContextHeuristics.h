@class NSString, ATXContextHeuristicCache, ATXInformationHeuristicRefreshTimeTrigger, ATXLocationManager, NSMutableSet, NSObject, ATXHeuristicDevice, _PASSimpleCoalescingTimer;
@protocol ATXContextHeuristicsDelegate, OS_dispatch_queue;

@interface ATXContextHeuristics : NSObject <ATXInformationHeuristicRefreshTriggerDelegate, ATXContextHeuristicsEnvironment> {
    ATXLocationManager *_locationManager;
    NSMutableSet *_heuristicRefreshTriggers;
    NSMutableSet *_heuristicsPendingRefresh;
    NSObject<OS_dispatch_queue> *_queue;
    ATXContextHeuristicCache *_resultsCache;
    _PASSimpleCoalescingTimer *_coalescedRefreshOperation;
    ATXInformationHeuristicRefreshTimeTrigger *_earliestCacheRefreshTimeTrigger;
}

@property (weak, nonatomic) id<ATXContextHeuristicsDelegate> delegate;
@property (readonly, nonatomic) ATXHeuristicDevice *heuristicDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLocationManager:(id)a0;
- (void)_queue_updateHeuristicName:(id)a0 withRefreshTriggers:(id)a1;
- (void)donateSuggestions:(id)a0 forHeuristic:(id)a1;
- (void)refreshResultsForAllHeuristicsPendingRefreshWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)informationHeuristicRefreshTrigger:(id)a0 didTriggerRefreshForHeuristics:(id)a1;
- (id)_criteriaForRefreshJobOnDate:(id)a0;
- (void)_removeRefreshCTSJob;
- (void)_setRefreshCTSJobForCriteria:(id)a0 fireDate:(id)a1 forHeuristics:(id)a2;
- (void)_queue_refreshResultsForAllHeuristicsWithCompletionHandler:(id /* block */)a0;
- (BOOL)_queue_refreshResultsForHeuristics:(id)a0;
- (void)_queue_cleanupTimeTriggers;
- (void)_queue_sendRelevantSuggestionsToBlending;

@end
