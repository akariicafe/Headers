@class ATXNotificationAndSuggestionDatastore;

@interface ATXTurnOffNotificationsForAppSuggestionManager : NSObject {
    ATXNotificationAndSuggestionDatastore *_dataStore;
}

- (id)init;
- (id)initWithDataStore:(id)a0;
- (void).cxx_destruct;
- (id)activeSuggestions;

@end
