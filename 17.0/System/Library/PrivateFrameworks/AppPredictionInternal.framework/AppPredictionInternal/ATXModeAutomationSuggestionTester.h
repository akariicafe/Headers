@class NSString, UNUserNotificationCenter, ATXActivitySuggestionClient;

@interface ATXModeAutomationSuggestionTester : NSObject <UNUserNotificationCenterDelegate, ATXActivitySuggestionClientObserver> {
    UNUserNotificationCenter *_notificationCenter;
    ATXActivitySuggestionClient *_suggestionClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)activitySuggestionClient:(id)a0 didSuggestConfiguredActivity:(id)a1;
- (id)init;
- (void)dealloc;
- (void)activitySuggestionClient:(id)a0 didSuggestSettingUpActivity:(id)a1;
- (void)_sendNotificationWithContent:(id)a0;
- (void)activitySuggestionClient:(id)a0 didSuggestActivity:(id)a1;
- (id)_stringForActivityType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
