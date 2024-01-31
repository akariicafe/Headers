@class ATXTurnOffNotificationsForAppSuggestionManager, ATXNotificationAndSuggestionDatastore, ATXNotificationSuggestionBiomeStream, ATXNotificationsSuggestion, ATXSendMessagesToDigestManager, ATXSendToDigestManager, ATXNotificationSmartPauseManager, ATXNotificationManagementMAConstants, ATXChinSuggestionThrottlingManager;

@interface ATXNotificationDeliverySuggestionManager : NSObject {
    ATXNotificationSmartPauseManager *_smartPauseManager;
    ATXSendMessagesToDigestManager *_sendMessagesToDigestManager;
    ATXSendToDigestManager *_sendToDigestManager;
    ATXTurnOffNotificationsForAppSuggestionManager *_turnOffNotificationsForAppManager;
    ATXNotificationAndSuggestionDatastore *_dataStore;
    ATXNotificationSuggestionBiomeStream *_biomeStream;
    ATXNotificationManagementMAConstants *_constants;
    ATXChinSuggestionThrottlingManager *_throttlingManager;
}

@property (readonly, nonatomic) ATXNotificationsSuggestion *quietingSuggester;
@property (readonly, nonatomic) ATXNotificationsSuggestion *promotingSuggester;
@property (readonly, nonatomic) ATXNotificationsSuggestion *rttOutcomeLogger;

- (id)init;
- (id)initWithDataStore:(id)a0 suggestionBiomeStream:(id)a1;
- (id)maxOneSuggestionFromSuggestions:(id)a0;
- (id)currentActiveSuggestions;
- (BOOL)shouldShowSuggestion:(id)a0 withFeedback:(id)a1;
- (void)logSuggestionsToBiome:(id)a0;
- (unsigned long long)currentMode;
- (void)activeSuggestionsWithReply:(id /* block */)a0;
- (void)_activeSuggestionsWithReply:(id /* block */)a0;
- (unsigned long long)getScoreForSuggestion:(id)a0;
- (void).cxx_destruct;
- (id)filteredSuggestionsBasedOnFeedback:(id)a0;
- (void)suggestionForNotification:(id)a0 reply:(id /* block */)a1;
- (BOOL)digestHasBeenShownEnoughTimes;
- (id)deduplicatedSuggestions:(id)a0;

@end
