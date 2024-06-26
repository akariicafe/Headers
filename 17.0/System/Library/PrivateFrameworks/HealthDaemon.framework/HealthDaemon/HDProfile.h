@class HDPeriodicCountryMonitor, HDSharedSummaryManager, HDDataManager, HDCloudSyncManager, HDActivityCacheManager, HDFitnessMachineManager, HDCurrentActivitySummaryHelper, HDAppSubscriptionManager, HDDeviceManager, HDDeviceKeyValueStoreManager, HDFeatureSettingsManager, HDDaemon, NSObject, HKSynchronousObserverSet, HDAWDSubmissionManager, HDTinkerPrivacyAlertCoordinator, HDAttachmentManager, NSMutableArray, HDSummarySharingEntryIDSManager, HDSourceManager, HDNanoSyncManager, HDWorkoutManager, HDUserDomainConceptManager, HDRestorableAlarmScheduler, HDOntologyConceptManager, HDSharingAuthorizationManager, HDDeviceContextStoreManager, HDConceptIndexManager, HDOntologyDatabase, HDUnitPreferencesManager, HDServiceConnectionManager, HDHealthRecordsAccountExistenceNotifier, HDSourceOrderManager, HDSyncIdentityManager, HDKeyValueDomainManager, HDAuthorizationManager, HDNotificationManager, HDAgeGatingManager, HDDatabase, HDHealthServiceManager, HDAssertionManager, HDRapportMessenger, NSString, HDNotificationSyncManager, HDDaemonSyncEngine, HDMedicalIDDataManager, HKProfileIdentifier, HDMetadataManager, HDUserCharacteristicsManager, NSURL, HDWorkoutCondenser, NSDictionary, HKObserverSet, HDProtectedDataOperationScheduler, HDContributorManager, HDSummarySharingEntryManager, HDDataProvenanceManager, HDDataCollectionManager, HDBackgroundObservationServerExtensionManager, HDOnboardingCompletionManager;
@protocol OS_dispatch_group, HDHealthDaemon, HDSyncEngine;

@interface HDProfile : NSObject <HKFeatureAvailabilityHealthDataSource, HKAnalyticsHealthDataSource, HDHealthDaemonReadyObserver> {
    HDDatabase *_database;
    HDAuthorizationManager *_authorizationManager;
    HDOntologyDatabase *_ontologyDatabase;
    HDOntologyConceptManager *_ontologyManager;
    HDConceptIndexManager *_conceptIndexManager;
    HDBackgroundObservationServerExtensionManager *_extensionManager;
    NSString *_directoryPath;
    HDDaemonSyncEngine *_syncEngine;
    NSDictionary *_profileExtensionsByIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _profileLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _profileObserverLock;
    NSObject<OS_dispatch_group> *_profileObserverGroup;
    BOOL _hasNotifiedProfileInitializedObservers;
    BOOL _hasNotifiedProfileReadyObservers;
    HKSynchronousObserverSet *_profileInitializedObservers;
    HKObserverSet *_profileReadyObservers;
    NSMutableArray *_postProfileReadyBlocks;
}

@property (readonly, nonatomic) HKProfileIdentifier *profileIdentifier;
@property (readonly, nonatomic) BOOL requiresWeakRetention;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL testModeEnabled;
@property (readonly, nonatomic) HDAgeGatingManager *ageGatingManager;
@property (readonly, nonatomic) HDAppSubscriptionManager *appSubscriptionManager;
@property (readonly, nonatomic) HDAWDSubmissionManager *awdSubmissionManager;
@property (readonly, nonatomic) HDProtectedDataOperationScheduler *protectedDataOperationScheduler;
@property (readonly, nonatomic) HDNotificationSyncManager *notificationSyncManager;
@property (readonly, nonatomic) HDServiceConnectionManager *serviceConnectionManager;
@property (readonly, nonatomic) HDKeyValueDomainManager *keyValueDomainManager;
@property (readonly, nonatomic) BOOL hasNotifiedProfileReadyObservers;
@property (readonly, weak, nonatomic) HDDaemon *daemon;
@property (readonly, weak, nonatomic) id<HDHealthDaemon> healthDaemon;
@property (readonly, nonatomic) HDActivityCacheManager *activityCacheManager;
@property (readonly, nonatomic) HDRestorableAlarmScheduler *alarmScheduler;
@property (readonly, nonatomic) HDAttachmentManager *attachmentManager;
@property (readonly, nonatomic) HDAuthorizationManager *authorizationManager;
@property (readonly, nonatomic) HDCloudSyncManager *cloudSyncManager;
@property (readonly, nonatomic) HDConceptIndexManager *conceptIndexManager;
@property (readonly, nonatomic) HDContributorManager *contributorManager;
@property (readonly, nonatomic) HDCurrentActivitySummaryHelper *currentActivitySummaryHelper;
@property (readonly, nonatomic) HDDataManager *dataManager;
@property (readonly, nonatomic) HDDataCollectionManager *dataCollectionManager;
@property (readonly, nonatomic) HDDataProvenanceManager *dataProvenanceManager;
@property (readonly, nonatomic) HDDeviceContextStoreManager *deviceContextManager;
@property (readonly, nonatomic) HDDeviceKeyValueStoreManager *deviceKeyValueStoreManager;
@property (readonly, nonatomic) HDDeviceManager *deviceManager;
@property (readonly, nonatomic) HDFeatureSettingsManager *featureSettingsManager;
@property (readonly, nonatomic) HDFitnessMachineManager *fitnessMachineManager;
@property (readonly, nonatomic) HDHealthRecordsAccountExistenceNotifier *healthRecordsAccountExistenceNotifier;
@property (readonly, nonatomic) HDMedicalIDDataManager *medicalIDDataManager;
@property (readonly, nonatomic) HDMetadataManager *metadataManager;
@property (readonly, nonatomic) HDNanoSyncManager *nanoSyncManager;
@property (readonly, nonatomic) HDNotificationManager *notificationManager;
@property (readonly, nonatomic) HDOnboardingCompletionManager *onboardingCompletionManager;
@property (readonly, nonatomic) HDOntologyConceptManager *ontologyConceptManager;
@property (readonly, nonatomic) HDOntologyDatabase *ontologyDatabase;
@property (readonly, nonatomic) HDPeriodicCountryMonitor *periodicCountryMonitor;
@property (readonly, nonatomic) HDRapportMessenger *rapportMessenger;
@property (readonly, nonatomic) HDHealthServiceManager *serviceManager;
@property (readonly, nonatomic) HDAssertionManager *sessionAssertionManager;
@property (readonly, nonatomic) HDSharedSummaryManager *sharedSummaryManager;
@property (readonly, nonatomic) HDSharingAuthorizationManager *sharingAuthorizationManager;
@property (readonly, nonatomic) HDSummarySharingEntryManager *sharingEntryManager;
@property (readonly, nonatomic) HDSummarySharingEntryIDSManager *summarySharingEntryIDSManager;
@property (readonly, nonatomic) HDSourceManager *sourceManager;
@property (readonly, nonatomic) HDSourceOrderManager *sourceOrderManager;
@property (readonly, nonatomic) id<HDSyncEngine> syncEngine;
@property (readonly, nonatomic) HDSyncIdentityManager *syncIdentityManager;
@property (readonly, nonatomic) HDTinkerPrivacyAlertCoordinator *tinkerPrivacyAlertCoordinator;
@property (readonly, nonatomic) HDUserCharacteristicsManager *userCharacteristicsManager;
@property (readonly, nonatomic) HDUserDomainConceptManager *userDomainConceptManager;
@property (readonly, nonatomic) HDWorkoutCondenser *workoutCondenser;
@property (readonly, nonatomic) HDWorkoutManager *workoutManager;
@property (readonly, nonatomic) HDDatabase *database;
@property (readonly, nonatomic) long long profileType;
@property (readonly, copy, nonatomic) HKProfileIdentifier *profileIdentifier;
@property (readonly, copy, nonatomic) NSString *directoryPath;
@property (readonly, copy, nonatomic) NSURL *directoryURL;
@property (readonly, nonatomic) long long currentSyncIdentityPersistentID;
@property (readonly, copy, nonatomic) NSString *medicalIDDirectoryPath;
@property (readonly, nonatomic) HDUnitPreferencesManager *unitPreferencesManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)_concurrentDatabaseReaderLimitForProfileType:(long long)a0;

- (void)daemonReady:(id)a0;
- (id)isImproveHealthRecordsAllowedWithError:(id *)a0;
- (id)featureStatusProviderForIdentifier:(id)a0;
- (id)requirementSatisfactionOverridesDataSource;
- (id)_newWorkoutManager;
- (id)ageWithCurrentDate:(id)a0 error:(id *)a1;
- (void)terminationCleanup;
- (id)wristDetectionSettingManager;
- (id)biologicalSexWithError:(id *)a0;
- (id)featureAvailabilityProviderForIdentifier:(id)a0;
- (void)invalidateAndWaitWithReason:(id)a0;
- (void).cxx_destruct;
- (id)watchLowPowerModeDataSource;
- (void)obliterateWithOptions:(unsigned long long)a0 reason:(id)a1;
- (id)_newAWDSubmissionManager;
- (id)featureAvailabilityProvidingForFeatureIdentifier:(id)a0;
- (id)fetchDisplayImageDataWithError:(id *)a0;
- (id)profileExtensionWithIdentifier:(id)a0;
- (void)triggerDeletion;
- (id)_newCloudSyncManager;
- (id)_newContributorManager;
- (id)_newDatabase;
- (id)_newUserCharacteristicsManager;
- (void)_notifyProfileReadyObservers;
- (void)_setOnboardingCompletionManager:(id)a0;
- (id)allProfileExtensions;
- (void)awakeFromDisk;
- (void)executeBlockAfterProfileReady:(id /* block */)a0;
- (BOOL)fetchDisplayFirstName:(id *)a0 lastName:(id *)a1 error:(id *)a2;
- (id)initWithDirectoryPath:(id)a0 medicalIDDirectoryPath:(id)a1 daemon:(id)a2 profileIdentifier:(id)a3;
- (void)notifyProfileInitializedObservers;
- (void)obliterateAndTerminateWithOptions:(unsigned long long)a0 reason:(id)a1 completion:(id /* block */)a2;
- (id)pairedGuardianParticipantWithError:(id *)a0;
- (id)pairedGuardianUserInfoWithError:(id *)a0;
- (void)prepareForObliterationWithReason:(id)a0;
- (id)profileExtensionsConformingToProtocol:(id)a0;
- (void)registerProfileInitializedObserver:(id)a0 queue:(id)a1;
- (void)registerProfileReadyObserver:(id)a0 queue:(id)a1;
- (BOOL)setDisplayFirstName:(id)a0 lastName:(id)a1 error:(id *)a2;
- (BOOL)setDisplayImageData:(id)a0 error:(id *)a1;
- (BOOL)setPairedGuardianParticipant:(id)a0 error:(id *)a1;
- (BOOL)setPairedGuardianUserInfo:(id)a0 error:(id *)a1;

@end
