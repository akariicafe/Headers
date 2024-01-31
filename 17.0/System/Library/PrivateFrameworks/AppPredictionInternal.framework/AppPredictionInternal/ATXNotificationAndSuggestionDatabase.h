@class ATXNotificationManagementMAConstants;

@interface ATXNotificationAndSuggestionDatabase : ATXAbstractVersionedDatabase {
    ATXNotificationManagementMAConstants *_mobileAssetConstants;
}

- (BOOL)migrate;
- (BOOL)hasSuggestionBeenShownForEntityId:(id)a0 suggestionType:(long long)a1 scope:(long long)a2 sinceTimestamp:(double)a3;
- (id)engagementStatusOfActiveAndProminentNotificationsSinceTimestamp:(double)a0;
- (id)init;
- (void)updateSuggestionFromEvent:(id)a0;
- (long long)latestVersion;
- (void)_pruneNotificationsBasedOnHardLimitsForBundleId:(id)a0 XPCActivity:(id)a1;
- (id)engagementStatusOfActiveAndProminentNotificationsWithUrgency:(long long)a0 sinceTimestamp:(double)a1;
- (void)setBookmarkData:(id)a0 forName:(id)a1;
- (id)notificationsReceivedPerBundleIdSinceDate:(id)a0;
- (void)updateNotificationUIForNotifications:(id)a0 nextUI:(unsigned long long)a1;
- (id)deleteAllData;
- (void)prepAndRunQuery:(id)a0 batchSize:(long long)a1 XPCActivity:(id)a2 onPrep:(id /* block */)a3 onRow:(id /* block */)a4 onError:(id /* block */)a5;
- (id)getTopOfProminentStackNotificationsWithLimit:(unsigned long long)a0;
- (void)updateNotificationFromEvent:(id)a0;
- (id)currentActiveSuggestions;
- (id)appSortedByNumOfNotificationsSinceTimestamp:(double)a0;
- (id)allNotificationsBetweenStartTimestamp:(id)a0 endTimestamp:(id)a1 limit:(unsigned long long)a2;
- (void)setAllNotificationsToClearedExceptProminent;
- (id)metricsForSuggestionsSinceCompletionTimestamp:(double)a0;
- (void)insertNotificationFromEvent:(id)a0 deliveryMethod:(long long)a1 modeIdentifier:(id)a2 deliveryReason:(id)a3;
- (id)totalNotificationsPerAppFromStartTime:(double)a0 toEndTime:(double)a1;
- (id)_countNotificationsPerAppWithFilters:(id)a0 stmtBinder:(id /* block */)a1;
- (id)getBookmarkDataFromName:(id)a0;
- (void)pruneNotificationsBasedOnHardLimitsWithXPCActivity:(id)a0;
- (id)feedbackHistoriesForKeys:(id)a0;
- (id)allNotificationsFromBundleId:(id)a0 sinceTimestamp:(double)a1;
- (id)engagementStatusOfActiveAndProminentAndMessageNotificationsSinceTimestamp:(double)a0;
- (id)numProminentActiveNotificationsByGroupingColumn:(id)a0;
- (struct ATXNotificationAndSuggestionDatastorePerfMetrics { long long x0; long long x1; })notificationAndSuggestionDatastorePerfMetrics;
- (id)telemetryDataForNotificationsFromTimestamp:(double)a0 endTimestamp:(double)a1;
- (id)messageNotificationsPerAppFromStartTime:(double)a0 toEndTime:(double)a1;
- (id)timeSensitiveNonmessageNotificationsPerAppFromStartTime:(double)a0 toEndTime:(double)a1;
- (void)setAllNotificationsToModified;
- (void)insertSuggestion:(id)a0;
- (void).cxx_destruct;
- (id)vacuumDatabase;
- (id)mostRecentActiveNotifications;
- (id)getTopOfNonProminentStackNotificationsWithLimit:(unsigned long long)a0;
- (void)numberOfActiveNotificationsWithCompletionHandler:(id /* block */)a0;
- (id)getSmartPauseFeaturesForBundleIds:(id)a0 sinceTimestamp:(double)a1 positiveEngagementEnums:(id)a2;
- (id)pruneSuggestionsBeforeTimestamp:(double)a0;
- (void)pruneSuggestionsBasedOnHardLimitsWithXPCActivity:(id)a0;
- (void)analyze;
- (id)resolutionsForNotifications:(id)a0;
- (double)receiveTimeStampOfFirstNotification;
- (id)suggestionEventTypeShownForEntityId:(id)a0 suggestionType:(long long)a1 scope:(long long)a2 sinceTimestamp:(double)a3;
- (id)pruneNotificationsBeforeTimestamp:(double)a0;
- (BOOL)_runMigrationSteps:(id)a0;

@end
