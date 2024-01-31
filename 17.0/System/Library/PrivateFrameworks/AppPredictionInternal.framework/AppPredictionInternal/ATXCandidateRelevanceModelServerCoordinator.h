@class NSArray, ATXCoreDuetContextHelper, ATXTimeBucketedRateLimiter, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface ATXCandidateRelevanceModelServerCoordinator : NSObject {
    ATXCoreDuetContextHelper *_contextHelper;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSArray *_configs;
    NSUserDefaults *_defaults;
    ATXTimeBucketedRateLimiter *_rateLimiter;
}

+ (id)sharedInstance;
+ (id)userDefaultsKeyForLastCacheUpdateDateForConfig:(id)a0;

- (void)_syncForTests;
- (id)init;
- (void)dealloc;
- (id)currentDuetEventForAnchor:(id)a0;
- (void)start;
- (void)registerForSupportedAnchorNotificatons;
- (id)supportedAnchorsForNotifications;
- (void)sendSuggestionsToBlendingForConfig:(id)a0;
- (void)sendSuggestionsToBlendingForEachConfigImmediately;
- (id)exitNotificationIdentifierForAnchor:(id)a0;
- (void)handleLOIExitNotification;
- (id)lastCacheUpdateDateForConfig:(id)a0;
- (id)notificationIdentifierForAnchor:(id)a0;
- (void).cxx_destruct;
- (void)unregisterAnchorEventListenerForAnchor:(id)a0;
- (void)handleLOIEntranceNotification;
- (id /* block */)callbackForAnchor:(id)a0;
- (void)unregisterAnchorEventListeners;
- (id)initWithContextHelper:(id)a0 configs:(id)a1 defaults:(id)a2;
- (void)sendSuggestionsToBlendingForEachConfigIfCacheIsOlderThan:(double)a0;
- (void)setCacheUpdateDate:(id)a0 forConfig:(id)a1;
- (void)handleAnchorNotificationForAnchor:(id)a0;
- (void)handleMicrolocationVisitNotification;
- (void)registerAnchorEventNotificationsForAnchor:(id)a0;

@end
