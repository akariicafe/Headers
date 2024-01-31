@class HKObserverSet, NSString, HDNotificationManager, HDNotificationSyncClient, HDProfile;

@interface HDHeadphoneExposureNotificationSyncManager : NSObject <HDNotificationSyncClientDelegate> {
    HDNotificationSyncClient *_notificationSyncClient;
    HDNotificationManager *_notificationManager;
    HDProfile *_profile;
    HKObserverSet *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserver:(id)a0 queue:(id)a1;
- (void)removeObserver:(id)a0;
- (id)initWithProfile:(id)a0;
- (void)notificationSyncClient:(id)a0 didReceiveInstructionWithAction:(long long)a1;
- (void).cxx_destruct;
- (id)_computeFireDateFromResetDosageCategoryIdentifier:(id)a0;
- (id)_extractLatestFireDateFromResetDosageEvents:(id)a0;
- (id)_generateResetDosageCategoryIdentifierWithDate:(id)a0;
- (void)_handleDismissNotification;
- (void)_handleResetDosageEventsWithIdentifiers:(id)a0;
- (void)_notifyObserversResetDosageForFireDate:(id)a0;
- (id)_resetDosageEventIdentifiersFromNotificationCategoryIdentifiers:(id)a0;
- (id)initWithProfile:(id)a0 notificationSyncClient:(id)a1 notificationManager:(id)a2;
- (BOOL)notifyHAENotificationAddedWithSample:(id)a0 error:(id *)a1;

@end
