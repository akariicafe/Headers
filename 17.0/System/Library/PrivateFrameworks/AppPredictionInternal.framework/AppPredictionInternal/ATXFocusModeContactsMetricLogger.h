@class ATXStableContactRepresentationDatastore, NSMutableDictionary, ATXDNDModeConfigurationClient, ATXModeAffinityModelsConstants, ATXModeEntityTrialClientWrapper;

@interface ATXFocusModeContactsMetricLogger : NSObject {
    NSMutableDictionary *_cachedContactScores;
    NSMutableDictionary *_cachedContactScoresForDenyList;
    ATXDNDModeConfigurationClient *_modeConfigClient;
    ATXModeEntityTrialClientWrapper *_modeEntityTrialClientWrapper;
    ATXStableContactRepresentationDatastore *_stableContactRepresentationDatastore;
    ATXModeAffinityModelsConstants *_modeAffinityModelsConstants;
}

- (id)init;
- (void).cxx_destruct;
- (void)addContactEntitySpecificFeatures:(id)a0 toMetric:(id)a1;
- (id)contactScoresForDenyListForMode:(unsigned long long)a0;
- (id)contactScoresForMode:(unsigned long long)a0;
- (id)fetchRelevantContactIdsWithModeConfigurationUIFlowLoggingEvent:(id)a0 suggestedEntities:(id)a1 candidateEntities:(id)a2 currentEntities:(id)a3;
- (void)logFocusModeContactSignalsWithModeConfigurationUIFlowLoggingEvent:(id)a0 xpcActivity:(id)a1;
- (id)metricFieldsToFeatureNames;
- (void)populateContactModeAffinitySignalsForMode:(unsigned long long)a0 contactId:(id)a1 metric:(id)a2;
- (void)populateContactModeDenyListSignalsForMode:(unsigned long long)a0 contactId:(id)a1 metric:(id)a2;

@end
