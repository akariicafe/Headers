@class NSString, ATXXPCActivity, ATXAnchorModelEventHarvester;
@protocol ATXAnchorModelDataStoreWrapperProtocol;

@interface ATXAnchorModelTrainingDatasetBuilder : NSObject <ATXAnchorModelTrainingDatasetBuilderProtocol> {
    id<ATXAnchorModelDataStoreWrapperProtocol> _dataStoreWrapper;
    ATXAnchorModelEventHarvester *_harvester;
    ATXXPCActivity *_xpcActivity;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchAnchorEvents:(id)a0 startDate:(id)a1 endDate:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)initWithActivity:(id)a0;
- (id)fetchPositiveActionEventsAfterAnchorDate:(id)a0 durationOfAnchorEvent:(double)a1;
- (long long)addNewTrainingSamplesToDatabase;
- (id)fetchNegativeAppEventsAfterAnchorDate:(id)a0 anchor:(id)a1 positiveAppEvents:(id)a2;
- (id)modeCandidateIdsToTargetForAnchor:(id)a0 excludeCandidateIdsFromModes:(id)a1;
- (id)actionCandidateIdsToTargetForAnchor:(id)a0 excludeCandidateIdsFromActions:(id)a1;
- (long long)addActionEventsToDatabaseAfterAnchorEvent:(id)a0 anchor:(id)a1;
- (void)addAnchorEventToDatabase:(id)a0 anchor:(id)a1;
- (long long)addAppEventsToDatabaseAfterAnchorEvent:(id)a0 anchor:(id)a1;
- (long long)addCandidateTrainingSamplesToDatabaseForAnchor:(id)a0 anchorEvents:(id)a1;
- (long long)addFeaturizedActionToDatabase:(id)a0 featurizedAction:(id)a1 actionOccurred:(BOOL)a2 actionEngaged:(BOOL)a3 anchorEvent:(id)a4 anchor:(id)a5;
- (long long)addFeaturizedAppToDatabase:(id)a0 featurizedApp:(id)a1 appWasLaunched:(BOOL)a2 appEngaged:(BOOL)a3 anchorEvent:(id)a4 anchor:(id)a5;
- (long long)addFeaturizedLinkActionToDatabase:(id)a0 featurizedAction:(id)a1 actionOccurred:(BOOL)a2 actionEngaged:(BOOL)a3 anchorEvent:(id)a4 anchor:(id)a5;
- (long long)addFeaturizedModeToDatabase:(id)a0 featurizedMode:(id)a1 modeOccurred:(BOOL)a2 modeEngaged:(BOOL)a3 anchorEvent:(id)a4 anchor:(id)a5;
- (long long)addLinkActionEventsToDatabaseAfterAnchorEvent:(id)a0 anchor:(id)a1;
- (long long)addModeEventsToDatabaseAfterAnchorEvent:(id)a0 anchor:(id)a1;
- (long long)addNewTrainingSamplesToDatabaseForAnchor:(id)a0;
- (long long)addNewTrainingSamplesToDatabaseForAnchorEvent:(id)a0 anchor:(id)a1;
- (BOOL)anchorOccurredLongEnoughAgo:(id)a0 anchor:(id)a1;
- (id)anchorsToIncludeInTrainingData;
- (id)appCandidateIdsToTargetForAnchor:(id)a0 excludeCandidateIdsFromAppLaunches:(id)a1;
- (id)appLaunchEventsFromNowPlayingStreamForAnchor:(id)a0 anchorOccurrenceDate:(id)a1;
- (id)candidateIdSetFromAppIntentEvents:(id)a0;
- (id)candidateIdSetFromAppLaunchDuetEvents:(id)a0;
- (id)candidateIdSetFromLinkActionEvents:(id)a0;
- (id)candidateIdSetFromModeEvents:(id)a0;
- (unsigned long long)cleanupDatasetForPrivacyPreservation;
- (id)featurizeActionEvent:(id)a0 anchorOccurrenceDate:(id)a1;
- (id)featurizeAppEvent:(id)a0 anchorOccurrenceDate:(id)a1 eventFeaturizer:(id)a2;
- (id)featurizeLinkActionEvent:(id)a0 anchorOccurrenceDate:(id)a1 eventFeaturizer:(id)a2;
- (id)featurizeModeEvent:(id)a0 anchorOccurrenceDate:(id)a1 eventFeaturizer:(id)a2;
- (id)fetchNegativeActionEventsAfterAnchorDate:(id)a0 anchor:(id)a1 positiveActionEvents:(id)a2;
- (id)fetchNegativeLinkActionEventsAfterAnchorDate:(id)a0 anchor:(id)a1 positiveLinkActionEvents:(id)a2;
- (id)fetchNegativeModeEventsAfterAnchorDate:(id)a0 anchor:(id)a1 positiveModeEvents:(id)a2;
- (id)fetchNewAnchorEventsForAnchor:(id)a0;
- (id)fetchPositiveAppEventsAfterAnchorDate:(id)a0 durationOfAnchorEvent:(double)a1 anchor:(id)a2;
- (id)fetchPositiveLinkActionEventsAfterAnchorDate:(id)a0 durationOfAnchorEvent:(double)a1 anchor:(id)a2;
- (id)fetchPositiveModeEventsAfterAnchorDate:(id)a0 durationOfAnchorEvent:(double)a1 anchor:(id)a2;
- (id)initWithXPCActivity:(id)a0 dataStoreWrapper:(id)a1 harvester:(id)a2;
- (id)linkActionCandidateIdsToTargetForAnchor:(id)a0 excludeCandidateIdsFromLinkActions:(id)a1;
- (id)queryStartDateForAnchor:(id)a0;
- (double)secondsAfterAnchorToCollectPositiveSamples:(id)a0;
- (BOOL)shouldCreateTrainingSamplesForAnchorEvent:(id)a0 anchor:(id)a1;
- (id)targetedNegativeActionSamplesForAnchor:(id)a0 anchorOccurrenceDate:(id)a1 eventsToExclude:(id)a2;
- (id)targetedNegativeAppSamplesForAnchor:(id)a0 anchorOccurrenceDate:(id)a1 eventsToExclude:(id)a2;
- (id)targetedNegativeLinkActionSamplesForAnchor:(id)a0 anchorOccurrenceDate:(id)a1 eventsToExclude:(id)a2;
- (id)targetedNegativeModeSamplesForAnchor:(id)a0 anchorOccurrenceDate:(id)a1 eventsToExclude:(id)a2;

@end
