@class ATXActionNotificationServer, NSString, ATXAppIntentMonitor, _ATXDataStore, NSArray, ATXBlendingLayerHyperParameters, PETDistributionEventTracker, PETScalarEventTracker, ATXUserMetricsLogger, ATXRecentActionEngagementCache, ATXActionFeedbackWeights, _ATXAppLaunchHistogramManager;
@protocol ATXPETEventTracker2Protocol, ATXPredictionContextBuilderProtocol;

@interface ATXActionFeedback : NSObject <ATXProactiveSuggestionFeedbackListenerProtocol> {
    id<ATXPredictionContextBuilderProtocol> _predictionContextBuilder;
    ATXActionFeedbackWeights *_actionFeedbackWeights;
    _ATXAppLaunchHistogramManager *_appLaunchHistogramManager;
    ATXActionNotificationServer *_notificationServer;
    ATXRecentActionEngagementCache *_recentEngagementCache;
    ATXAppIntentMonitor *_appIntentMonitor;
    _ATXDataStore *_dataStore;
    NSArray *_abGroupIdentifiers;
    ATXBlendingLayerHyperParameters *_blendingHyperParameters;
    PETDistributionEventTracker *_predictionsTracker;
    PETScalarEventTracker *_predictionItemsTracker;
    PETScalarEventTracker *_engagedInitTracker;
    PETScalarEventTracker *_engagementTracker;
    PETScalarEventTracker *_tvEngagementTracker;
    PETScalarEventTracker *_tvShownTracker;
    PETDistributionEventTracker *_predictedSlotTracker;
    PETDistributionEventTracker *_engagedSlotTracker;
    PETScalarEventTracker *_captureRateTracker;
    PETDistributionEventTracker *_durationTracker;
    ATXUserMetricsLogger *_userMetricsLogger;
    id<ATXPETEventTracker2Protocol> _petTracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (unsigned long long)_feedbackStageForUIFeedbackResult:(id)a0 engagedSuggestion:(id)a1;
- (void)logHeuristicFeedbackToPortraitForAction:(id)a0 withActionType:(unsigned short)a1;
- (void)decayCounts;
- (id)clientModelIds;
- (id)abGroupFromActionResponse:(id)a0;
- (id)_actionResponseFromUIFeedbackResult:(id)a0 shownActions:(id)a1 rejectedActions:(id)a2 engagedAction:(id)a3 engagedSuggestion:(id)a4;
- (void)resetData;
- (void)receiveLockscreenFeedbackWithAction:(id)a0 actionResponse:(id)a1 engagement:(BOOL)a2 triggeredByUserInteraction:(BOOL)a3 currentDate:(id)a4;
- (id)initWithPredictionContextBuilder:(id)a0 actionFeedbackWeights:(id)a1 appLaunchHistogramManager:(id)a2 actionNotificationServer:(id)a3 recentEngagmentCache:(id)a4 appIntentMonitor:(id)a5 dataStore:(id)a6 abGroupIdentifiers:(id)a7 blendingHyperParameters:(id)a8 userMetricsLogger:(id)a9 predictionsTracker:(id)a10 predictionItemsTracker:(id)a11 engagedInitTracker:(id)a12 engagementTracker:(id)a13 predictedSlotTracker:(id)a14 engagedSlotTracker:(id)a15 captureRateTracker:(id)a16 tvEngagementTracker:(id)a17 tvShownTracker:(id)a18 durationTracker:(id)a19 petTracker:(id)a20;
- (void)unloadCachedHistograms;
- (void)logHeuristicFeedback:(id)a0;
- (void)logHeuristicFeedbackToSuggestionsForAction:(id)a0 withActionType:(unsigned short)a1;
- (void).cxx_destruct;
- (void)_updateAppLaunchCategoricalHistogram:(long long)a0 bundleId:(id)a1 category:(id)a2 context:(id)a3 weight:(float)a4;
- (void)_assertHistogram:(id)a0 weight:(float)a1;
- (id)_scoredActionsFromProactiveSuggestions:(id)a0;
- (void)sessionLogWithActionResponse:(id)a0 engagementType:(unsigned long long)a1 context:(id)a2;
- (void)receiveUIFeedbackResult:(id)a0;
- (void)applyFinalFeedbackForActionResponse:(id)a0 engagementType:(unsigned long long)a1 context:(id)a2;
- (void)_updateAppLaunchHistogram:(long long)a0 bundleId:(id)a1 context:(id)a2 weight:(float)a3;
- (void)receiveFeedbackWithActionResponse:(id)a0 context:(id)a1;
- (void)receiveLockscreenFeedbackWithAction:(id)a0 actionResponse:(id)a1 engagement:(BOOL)a2 triggeredByUserInteraction:(BOOL)a3;

@end
