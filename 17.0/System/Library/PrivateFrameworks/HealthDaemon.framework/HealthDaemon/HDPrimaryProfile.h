@class HDHealthServiceManager, HDNotificationSyncManager, HDNanoSyncManager, HDFitnessMachineManager, HDRestorableAlarmScheduler, HDWorkoutCondenser, HDWorkoutManager, HDAWDSubmissionManager, HDProtectedDataOperationScheduler, HDTinkerPrivacyAlertCoordinator, HDNotificationManager, HDSummarySharingEntryManager, HDDemoDataManager, HDAssertionManager, HDDataCollectionManager, HDAppSubscriptionManager, HDCurrentActivitySummaryHelper, HDAgeGatingManager, HDServiceConnectionManager, HDPeriodicCountryMonitor, HDAttachmentManager, HDRapportMessenger, HDSummarySharingEntryIDSManager;

@interface HDPrimaryProfile : HDProfile {
    HDAgeGatingManager *_ageGatingManager;
    HDAppSubscriptionManager *_appSubscriptionManager;
    HDAWDSubmissionManager *_awdSubmissionManager;
    HDCurrentActivitySummaryHelper *_currentActivitySummaryHelper;
    HDDataCollectionManager *_dataCollectionManager;
    HDFitnessMachineManager *_fitnessMachineManager;
    HDNanoSyncManager *_nanoSyncManager;
    HDNotificationManager *_notificationManager;
    HDNotificationSyncManager *_notificationSyncManager;
    HDPeriodicCountryMonitor *_periodicCountryMonitor;
    HDProtectedDataOperationScheduler *_protectedDataOperationScheduler;
    HDRapportMessenger *_rapportMessenger;
    HDHealthServiceManager *_serviceManager;
    HDRestorableAlarmScheduler *_alarmScheduler;
    HDServiceConnectionManager *_serviceConnectionManager;
    HDAssertionManager *_sessionAssertionManager;
    HDWorkoutManager *_workoutManager;
    HDWorkoutCondenser *_workoutCondenser;
    HDDemoDataManager *_demoDataManager;
    HDTinkerPrivacyAlertCoordinator *_tinkerPrivacyAlertCoordinator;
    HDSummarySharingEntryManager *_summarySharingEntryManager;
    HDSummarySharingEntryIDSManager *_summarySharingEntryIDSManager;
    HDAttachmentManager *_attachmentManager;
}

- (id)periodicCountryMonitor;
- (id)_newNanoSyncManager;
- (id)_newRapportMessenger;
- (id)dataCollectionManager;
- (void)unitTest_setNanoSyncManager:(id)a0;
- (void)unitTest_setServiceManager:(id)a0;
- (id)serviceConnectionManager;
- (id)notificationManager;
- (id)tinkerPrivacyAlertCoordinator;
- (id)_newWorkoutManager;
- (id)awdSubmissionManager;
- (void)terminationCleanup;
- (id)activityCacheManager;
- (id)sessionAssertionManager;
- (id)alarmScheduler;
- (void).cxx_destruct;
- (id)summarySharingEntryIDSManager;
- (id)initWithDirectoryPath:(id)a0 medicalIDDirectoryPath:(id)a1 daemon:(id)a2;
- (id)appSubscriptionManager;
- (id)rapportMessenger;
- (id)attachmentManager;
- (id)_newPeriodicCountryMonitorWithNanoSyncManager:(id)a0;
- (id)ageGatingManager;
- (id)notificationSyncManager;
- (id)serviceManager;
- (id)protectedDataOperationScheduler;
- (id)_newAWDSubmissionManager;
- (id)currentActivitySummaryHelper;
- (id)workoutCondenser;
- (id)fitnessMachineManager;
- (id)workoutManager;
- (id)_initWithDirectoryPath:(id)a0 medicalIDDirectoryPath:(id)a1 daemon:(id)a2 profileIdentifier:(id)a3;
- (id)sharingEntryManager;
- (id)nanoSyncManager;

@end
