@class NSArray, ATXNotificationAndSuggestionDatastore, NSDate, ATXNotificationManagementMAConstants;

@interface ATXNotificationSmartPauseManager : NSObject {
    NSArray *_currentSuggestions;
    NSDate *_lastUpdatedDate;
    ATXNotificationAndSuggestionDatastore *_dataStore;
    ATXNotificationManagementMAConstants *_notificationManagementMAConstants;
}

- (id)init;
- (BOOL)needRefresh;
- (void)refreshSuggestions;
- (id)_queryResultIdentifierForBundleId:(id)a0 threadId:(id)a1;
- (void).cxx_destruct;
- (id)smartPauseForNotification:(id)a0;
- (id)activeSuggestions;
- (id)currentSuggestionsGivenCandiateNotifications:(id)a0;
- (id)_dictionaryForQueryResults:(id)a0;
- (id)_proposeSmartPauseForNotification:(id)a0 threadData:(id)a1 bundleData:(id)a2;
- (id)initWithNotificationAndSuggestionDataStore:(id)a0;

@end
