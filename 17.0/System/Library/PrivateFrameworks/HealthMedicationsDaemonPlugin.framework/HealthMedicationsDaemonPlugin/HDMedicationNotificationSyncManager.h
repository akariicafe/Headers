@class HDSyncIdentityManager, NSString, HDNotificationManager, HDNotificationSyncClient, NSMutableDictionary, HDProfile;

@interface HDMedicationNotificationSyncManager : NSObject <HDMedicationScheduleSynchronousObserver, HDNotificationSyncClientDelegate> {
    NSMutableDictionary *_scheduleDict;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _scheduleDictLock;
    HDSyncIdentityManager *_syncIdentityManager;
    HDProfile *_profile;
}

@property (readonly, nonatomic) HDNotificationManager *notificationManager;
@property (readonly, nonatomic) HDNotificationSyncClient *notificationSyncClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)notificationSyncClient:(id)a0 didReceiveInstructionWithAction:(long long)a1;
- (void).cxx_destruct;
- (BOOL)_shouldSendHoldInstructionForNewDoseEvent:(id)a0;
- (BOOL)_shouldSendHoldInstructionForOldScheduleItem:(id)a0 compareWithNewScheduleItem:(id)a1;
- (void)doseEventsAdded:(id)a0;
- (id)initWithProfileExtension:(id)a0;
- (id)initWithProfileExtension:(id)a0 notificationSyncClient:(id)a1;
- (long long)isScheduleItemOnHold:(id)a0 errorOut:(id *)a1;
- (void)scheduleManager:(id)a0 transaction:(id)a1 didReschedule:(id)a2;
- (void)scheduleManager:(id)a0 transaction:(id)a1 willReschedule:(id)a2;

@end
