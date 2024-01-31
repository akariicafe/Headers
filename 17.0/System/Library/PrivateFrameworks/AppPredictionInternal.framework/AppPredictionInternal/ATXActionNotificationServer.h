@class UNUserNotificationCenter, NSString, WFSuggestionsWorkflowRunnerClient, PETScalarEventTracker, ATXEngagementRecordManager;

@interface ATXActionNotificationServer : NSObject <WFWorkflowRunnerClientDelegate, UNUserNotificationCenterDelegate> {
    UNUserNotificationCenter *_notificationCenter;
    WFSuggestionsWorkflowRunnerClient *_currentWorkflowRunnerClient;
    PETScalarEventTracker *_removeTracker;
    PETScalarEventTracker *_notifyInitTracker;
    PETScalarEventTracker *_notifyErrorTracker;
    PETScalarEventTracker *_notifySuccessTracker;
    ATXEngagementRecordManager *_engagementRecordManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_requestIdentifierForBundleId:(id)a0;
+ (id)localizedContentBodyStringWithString:(id)a0 forAction:(id)a1;
+ (id)bundleIdFromRequestIdentifier:(id)a0;

- (void)_postTestNotification;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)init;
- (void)postNotificationForProactiveSuggestion:(id)a0 blendingCacheUpdateUUID:(id)a1;
- (void)postNotificationForATXAction:(id)a0;
- (id)proactiveSuggestionsCurrentlyOnLockscreen;
- (void)_postNotificationForProactiveSuggestion:(id)a0 blendingCacheUpdateUUID:(id)a1;
- (id)_localizedStringForKey:(id)a0 defaultValue:(id)a1 languageCode:(id)a2;
- (void)_setupNotifications;
- (void)postDemoOrDebugNotificationForATXAction:(id)a0;
- (id)_blendingCacheUpdateUUIDFromNotification:(id)a0;
- (BOOL)hasLockscreenPrediction;
- (BOOL)_isRTL;
- (id)_unarchiveProactiveSuggestionFromNotification:(id)a0;
- (void)removeActionPredictionNotificationsMatchingAction:(id)a0;
- (void)_sendLockscreenEventToBiomeWithDate:(id)a0 eventType:(int)a1 blendingCacheId:(id)a2 suggestionIds:(id)a3;
- (void)removeAllActionPredictionNotificationsAndTrackEvent:(BOOL)a0 recordFeedback:(BOOL)a1;
- (void).cxx_destruct;
- (void)_removeNotificationWithIdentifier:(id)a0 trackEvent:(BOOL)a1;
- (unsigned long long)deliveredNotificationCount;
- (void)_postTestNotificationWithPredictionCount:(long long)a0;
- (void)workflowRunnerClient:(id)a0 didFinishRunningWorkflowWithOutput:(id)a1 error:(id)a2 cancelled:(BOOL)a3;
- (void)workflowRunnerClient:(id)a0 didStartRunningWorkflowWithProgress:(id)a1;
- (id)_actionKeyFromNotification:(id)a0;

@end
