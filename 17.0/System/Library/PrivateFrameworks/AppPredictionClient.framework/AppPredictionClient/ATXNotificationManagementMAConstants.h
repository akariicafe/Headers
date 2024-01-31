@class NSDictionary;

@interface ATXNotificationManagementMAConstants : NSObject {
    NSDictionary *_parameters;
}

@property (readonly, nonatomic) double interruptionManagerRecommendationThresholdForContacts;
@property (readonly, nonatomic) double interruptionManagerRecommendationThresholdForApps;
@property (readonly, nonatomic) double interruptionManagerRecommendationDenyListThresholdForApps;
@property (readonly, nonatomic) double interruptionManagerRecommendationDenyListThresholdForContacts;
@property (readonly, nonatomic) long long interruptionManagerMaxSuggestions;
@property (readonly, nonatomic) long long interruptionManagerMaxAppSuggestionsForDenyList;
@property (readonly, nonatomic) long long interruptionManagerMaxContactSuggestionsForDenyList;
@property (readonly, nonatomic) double interruptionManagerPromptAllowScoreThreshold;
@property (readonly, nonatomic) double interruptionManagerPromptBlockScoreThreshold;
@property (readonly, nonatomic) double thresholdForShowingDigestOnboardingSuggestion;
@property (readonly, nonatomic) long long numPreviousDaysToCheckForNotificationProblemForDigestOnboardingSuggestion;
@property (readonly, nonatomic) long long digestOnboardingSuggestionHour;
@property (readonly, nonatomic) long long digestOnboardingSuggestionMinute;
@property (readonly, nonatomic) double smartPauseManagerPauseDurationSeconds;
@property (readonly, nonatomic) double smartPauseManagerExpirationSeconds;
@property (readonly, nonatomic) double smartPauseManagerRefreshIntervalSeconds;
@property (readonly, nonatomic) long long urgencyTuningManagerMaxNumNonEngagementsAllowedForUrgentNotifications;
@property (readonly, nonatomic) long long sendMessagesToDigestManagerMaxNumNonEngagementsAllowedForMessageNotifications;
@property (readonly, nonatomic) double thresholdForShowingDigestOnboardingSuggestionToSeedUsers;
@property (readonly, nonatomic) long long smartPauseManagerThresholdForNumNotificationsReceivedInLastFiveMinutesForThread;
@property (readonly, nonatomic) long long smartPauseManagerThresholdForNumNotificationsReceivedInLastFiveMinutesForApp;
@property (readonly, nonatomic) double smartPauseManagerEngagementRateThresholdForThread;
@property (readonly, nonatomic) double smartPauseManagerEngagementRateThresholdForApp;
@property (readonly, nonatomic) double sendToDigestEngagementRateThreshold;
@property (readonly, nonatomic) long long sendToDigestThresholdForNumNonEngagements;
@property (readonly, nonatomic) double urgencyTuningStartTimeoutSeconds;
@property (readonly, nonatomic) double urgencyTuningTimeoutScaleFactor;
@property (readonly, nonatomic) double smartPauseStartTimeoutSeconds;
@property (readonly, nonatomic) double smartPauseTimeoutScaleFactor;
@property (readonly, nonatomic) double interruptionManagementStartTimeoutSeconds;
@property (readonly, nonatomic) double interruptionManagementTimeoutScaleFactor;
@property (readonly, nonatomic) double sendToDigestStartTimeoutSeconds;
@property (readonly, nonatomic) double sendToDigestTimeoutScaleFactor;
@property (readonly, nonatomic) double backupStartTimeoutSeconds;
@property (readonly, nonatomic) double backupTimeoutScaleFactor;
@property (readonly, nonatomic) long long numIgnoresToReject;
@property (readonly, nonatomic) long long chinSuggestionsAreDisabled;
@property (readonly, nonatomic) unsigned long long digestOnboardingSuggestionMinimumActiveNotifications;
@property (readonly, nonatomic) unsigned long long digestOnboardingSuggestionMinimumUniqueBundleIds;
@property (readonly, nonatomic) long long interruptionManagerMaxRecommendedAndCandidateContactSuggestionsForDenyList;
@property (readonly, nonatomic) long long interruptionManagerMaxRecommendedAndCandidateContactSuggestionsForAllowList;
@property (readonly, nonatomic) long long interruptionManagerMaxRecommendedAndCandidateAppSuggestionsForDenyList;
@property (readonly, nonatomic) long long interruptionManagerMaxRecommendedAndCandidateAppSuggestionsForAllowList;
@property (readonly, nonatomic) double interruptionManagerThresholdForRecommendedContactSuggestionForAllowList;
@property (readonly, nonatomic) double interruptionManagerThresholdForRecommendedContactSuggestionForDenyList;
@property (readonly, nonatomic) double interruptionManagerThresholdForCandidateContactSuggestionForAllowList;
@property (readonly, nonatomic) double interruptionManagerThresholdForCandidateContactSuggestionForDenyList;
@property (readonly, nonatomic) double interruptionManagerThresholdForRecommendedAppSuggestionForAllowList;
@property (readonly, nonatomic) double interruptionManagerThresholdForRecommendedAppSuggestionForDenyList;
@property (readonly, nonatomic) double interruptionManagerThresholdForCandidateAppSuggestionForAllowList;
@property (readonly, nonatomic) double interruptionManagerThresholdForCandidateAppSuggestionForDenyList;
@property (readonly, nonatomic) long long ATXUserEducationSuggestionExploreFacesServer_minHour;
@property (readonly, nonatomic) long long ATXUserEducationSuggestionExploreFacesServer_maxHour;
@property (readonly, nonatomic) long long ATXUserEducationSuggestionExploreFacesServer_tryAgainIntervalSeconds;
@property (readonly, nonatomic) long long ATXUserEducationSuggestionExploreFacesServer_gracePeriod;
@property (readonly, nonatomic) long long ATXUserEducationSuggestionExploreFacesServer_numBacklightOffEventsBeforeDismissSuggestion;
@property (readonly, nonatomic) long long ATXNotificationAndSuggestionDatabase_maxNumberOfNotificationsPerApp;
@property (readonly, nonatomic) long long ATXNotificationAndSuggestionDatabase_maxNumberOfNotifications;
@property (readonly, nonatomic) long long ATXNotificationAndSuggestionDatabase_maxNumberOfSuggestions;
@property (readonly, nonatomic) long long ATXNotificationAndSuggestionDatabase_pruningBatchSize;

+ (id)sharedInstance;

- (id)init;
- (id)numberForKey:(id)a0;
- (void).cxx_destruct;

@end
