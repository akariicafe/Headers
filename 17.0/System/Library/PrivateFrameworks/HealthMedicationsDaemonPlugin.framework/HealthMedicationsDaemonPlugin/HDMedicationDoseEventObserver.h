@class NSString, HDProfile, HDMedicationNotificationSyncManager;

@interface HDMedicationDoseEventObserver : NSObject <HDDataObserver> {
    HDProfile *_profile;
    HDMedicationNotificationSyncManager *_notificationSyncManager;
}

@property (copy, nonatomic) id /* block */ samplesAddedDidRecheduleHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (id)initWithProfile:(id)a0;
- (id)initWithProfile:(id)a0 notificationSyncManager:(id)a1;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (void)_logDoseEventSamplesAdded:(id)a0 anchor:(id)a1;
- (void).cxx_destruct;
- (BOOL)_rescheduleIfNecessaryWithDoseEvents:(id)a0;

@end
