@class NSString;

@interface HDMedicationSyncRequester : HDSyncRequester <HDMedicationScheduleObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfileExtension:(id)a0;
- (void)scheduleManager:(id)a0 didAddOrModifySchedules:(id)a1;
- (void)scheduleManager:(id)a0 didAddOrModifySchedulesBySyncIdentity:(id)a1;
- (void)scheduleManager:(id)a0 didPruneScheduleItems:(id)a1;
- (void)scheduleManagerDidRescheduleMedications:(id)a0;
- (void)unitTesting_triggerSyncForSchedulesBySyncIdentity:(id)a0;

@end
