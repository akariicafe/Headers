@class NSString, ATXSpotlightUIBiomeStream, ATXSuggestionSearchResult, PETGoalConversionEventTracker, NSMutableSet, ATXEngagementRecordManager, NSObject, ATXActionPredictionClient, NSMutableArray;
@protocol ATXPETEventTracker2Protocol, ATXSearchFeedbackListenerTarget;

@interface ATXSearchFeedbackListener : NSObject <SFFeedbackListener> {
    NSObject<ATXSearchFeedbackListenerTarget> *_target;
    ATXSpotlightUIBiomeStream *_spotlightUIBiomeStream;
    PETGoalConversionEventTracker *_apAppPredictionsShownTracker;
    struct { struct { unsigned long long lastEventTimestamp; } resultsDidBecomeVisible; struct { unsigned long long lastEventTimestamp; } didStartSearch; struct { unsigned long long lastEventTimestamp; } searchViewDidAppear; struct { unsigned long long lastEventTimestamp; } searchViewDidDisappear; struct { unsigned long long lastEventTimestamp; } didEngageResult; struct { unsigned long long lastEventTimestamp; } didEngageCardSection; } _debounce;
    ATXEngagementRecordManager *_engagementRecordManager;
    ATXActionPredictionClient *_actionPredictionClient;
    id<ATXPETEventTracker2Protocol> _tracker;
    NSString *_currentQuery;
    BOOL _didSearchDuringSession;
    NSMutableSet *_visibleActionUUIDs;
    NSMutableSet *_visibleAppUUIDs;
    NSMutableSet *_visibleAppBundleIds;
    NSMutableSet *_visibleActionContextIdentifiers;
    ATXSuggestionSearchResult *_currentResultCard;
    NSString *_appBlendingCacheId;
    NSString *_actionBlendingCacheId;
    BOOL _hasSeenSearchViewDidAppear;
    unsigned long long _viewAppearEvent;
    NSMutableArray *_queuedEvents;
    BOOL _currentSessionHasEngagement;
    BOOL _previousSessionHadEngagement;
}

@property (nonatomic) BOOL shouldDebounce;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resultsDidBecomeVisible:(id)a0;
- (id)initWithTarget:(id)a0 spotlightUIBiomeStream:(id)a1 engagementRecordManager:(id)a2 actionClient:(id)a3 tracker:(id)a4;
- (id)init;
- (void)didStartSearch:(id)a0;
- (void)didPerformCommand:(id)a0;
- (void)searchViewDidDisappear:(id)a0;
- (void)_logCAActionWithIdentifiers:(id)a0 eventType:(long long)a1;
- (void)didEngageCardSection:(id)a0;
- (void)cardViewDidDisappear:(id)a0;
- (void)didEngageResult:(id)a0;
- (void)logEngagedSpotlightActionSuggestion:(id)a0 contextActionIdentifier:(id)a1;
- (void)searchViewDidAppear:(id)a0;
- (void)_sendSpotlightUIEvent:(id)a0;
- (void)_resetState;
- (void)_logAppPredictionsShown;
- (BOOL)_isDuplicateEventWithState:(struct { unsigned long long x0; } *)a0 timestamp:(unsigned long long)a1 method:(SEL)a2;
- (void)writeSpotlightEvent:(id)a0 isViewAppearEvent:(BOOL)a1;
- (void).cxx_destruct;
- (void)_sendSpotlightUIStreamAppEngageWithFeedback:(id)a0;
- (void)_sendSpotlightUIStreamEventType:(long long)a0 searchResult:(id)a1;
- (id)_suggestionSubTypeStringWithResultType:(int)a0;
- (void)sendUpdateNotification;
- (void)_logCAActionWithIdentifier:(id)a0 suggestion:(id)a1 eventType:(long long)a2;
- (void)_tryRemoveLockscreenActionPredictionMatchingSuggestion:(id)a0;

@end
