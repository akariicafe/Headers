@class NSTimer, NSHashTable, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface ATXDigestOnboardingSuggestionClient : NSObject {
    NSHashTable *_observers;
    NSUserDefaults *_userDefaults;
    NSObject<OS_dispatch_queue> *_queue;
    NSTimer *_trigger;
    BOOL _hasRegisteredKVO;
}

+ (id)sharedInstance;
+ (void)changeNumPreviousDaysToCheckForNotificationProblemToNumDays:(unsigned long long)a0;
+ (void)removeRandomizedSelectionForDigestOnboardingSuggestion;
+ (void)resetRandomizedSelectionForDigestOnboardingSuggestion;
+ (void)resetDigestOnboardingSuggestionsAtHour:(id)a0 minute:(id)a1;

- (id)init;
- (void)_unregisterForKVOChangesOnMainQueue;
- (void)averageNumberOfNotifications:(id /* block */)a0;
- (void)dealloc;
- (void)registerObserver:(id)a0;
- (void)_invalidateTriggerOnMainQueue;
- (void)registerForOnboardingSuggestions;
- (void)unregisterForOnboardingSuggestions;
- (void)userAcceptedDigestOnboardingSuggestion:(id)a0;
- (void)clientDidRejectOnboardingSuggestion;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_registerForOnboardingSuggestionOnMainQueueWithThresholdForShowingDigestOnboardingSuggestionToSeedUsers:(double)a0 thresholdForShowingDigestOnboardingSuggestion:(double)a1;
- (void).cxx_destruct;
- (id)notificationStreamPublisherForStartDate:(id)a0;
- (void)_registerForTriggerOnMainQueueAtHour:(long long)a0 minute:(long long)a1;
- (id /* block */)_notificationStreamFilterBlock;
- (void)_handleLocaleChange;
- (void)_suggestDigestOnboardingIfApplicableOnMainQueueGivenNumberOfActiveNotifications:(unsigned long long)a0 numberOfUniqueBundleIds:(unsigned long long)a1 minActive:(unsigned long long)a2 minUnique:(unsigned long long)a3;
- (void)_suggestDigestOnboardingIfApplicableOnMainQueue;
- (BOOL)hasNotificationProblemForPreviousNumDays:(long long)a0;
- (void)_unregisterForLocaleChangeOnMainQueue;
- (void)_registerForKVOChangesOnMainQueue;
- (void)_registerForLocaleChangeOnMainQueue;
- (void)_setProbabilityOfShowingDigestOnboardingToUser;

@end
