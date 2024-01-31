@class ATXInformationStore, ATXTimelineAbuseControlConfig, NSDate, NSUserDefaults;

@interface ATXTimelineRelevanceMetricHarvester : NSObject {
    ATXInformationStore *_informationStore;
    NSUserDefaults *_defaults;
    NSDate *_loggingStartDate;
    ATXTimelineAbuseControlConfig *_abuseControlConfig;
}

+ (int)PBTimelineEntrySuggestionMappingReasonFrom:(long long)a0;
+ (int)PBTimelineRelevanceEngagementFromATXStackRotationEngagementStatus:(unsigned long long)a0;
+ (int)PBWidgetFamilyFromCHSWidgetFamily:(long long)a0;
+ (int)PBClientModelFromString:(id)a0;
+ (int)PBTimelineRelevanceAbuseControlOutcomeTypeFrom:(long long)a0;
+ (int)PBTimelineRelevanceRotationEventTypeFromReason:(id)a0;
+ (double)roundNumber:(id)a0 toSignificantFigures:(unsigned long long)a1;

- (id)init;
- (id)_timeBasedMergePublisher:(id)a0 withOtherPublishers:(id)a1;
- (void).cxx_destruct;
- (void)_updateMetricsSubmissionDateTo:(id)a0;
- (void)_addAbuseControlOutcomesForSuggestionId:(id)a0 withPBTimelineRelevanceSuggestion:(id)a1 anonymizeTimestampsRelativeTo:(double)a2;
- (void)_addRotationHistoryForWidgetBundleId:(id)a0 appBundleId:(id)a1 widgetKind:(id)a2 widgetSize:(long long)a3 withPBTimelineRelevanceContainer:(id)a4 anonymizeTimestampsRelativeTo:(double)a5;
- (BOOL)_shouldLogHomeScreenEvent:(id)a0 widgetBundleId:(id)a1 appBundleId:(id)a2 widgetKind:(id)a3 widgetFamily:(long long)a4;
- (BOOL)_shouldProcessEvent:(id)a0;
- (void)_updateTimelineEntriesDictionaryWithEntries:(id)a0 withKey:(id)a1 withScoreEntry:(id)a2;
- (void)addFeatureVectorToTimelineRelevanceContainer:(id)a0;
- (void)addRotationsToContainer:(id)a0 withStackRotationSesssion:(id)a1 anonymizeTimestampsRelativeTo:(double)a2;
- (void)addStackConfigSummaryToTimelineRelevanceContainer:(id)a0 withStackConfigSummary:(id)a1;
- (BOOL)addTimelineRelevanceScoresToTimelineRelevanceContainer:(id)a0 forWidget:(id)a1 withDistributionsLogged:(unsigned long long)a2 updatingDictionary:(id)a3 anonymizeTimestampsRelativeTo:(double)a4;
- (void)addTimelineRelevanceSuggestionsToContainer:(id)a0 withTimelineEntries:(id)a1 anonymizeTimestampsRelativeTo:(double)a2;
- (id)fetchStackConfigSummaryForWidgetBundleId:(id)a0 appBundleId:(id)a1 widgetKind:(id)a2 widgetSize:(long long)a3 withPBTimelineRelevanceContainer:(id)a4 anonymizeTimestampsRelativeTo:(double)a5;
- (void)harvestWithActivity:(id)a0;
- (id)initWithInformationStore:(id)a0;
- (BOOL)isFirstParty:(id)a0;
- (id)timeOfLatestMetricsSubmission;
- (id)widgetsForDataCollection:(id)a0;

@end
