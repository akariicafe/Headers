@class HKSPSleepStore;

@interface HKSPSleepStoreExportedObject : NSObject <HKSPSleepClient>

@property (weak, nonatomic) HKSPSleepStore *sleepStore;

- (void)sleepScheduleChanged:(id)a0 clientIdentifier:(id)a1;
- (void)sleepModeChanged:(id)a0;
- (id)_mergeExternalSleepEventRecordChange:(id)a0 clientIdentifier:(id)a1;
- (void)sleepScheduleStateChanged:(id)a0;
- (id)_mergeExternalSleepScheduleChange:(id)a0 clientIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)sleepSettingsChanged:(id)a0 clientIdentifier:(id)a1;
- (void)sleepEventRecordChanged:(id)a0 clientIdentifier:(id)a1;
- (id)_mergeExternalSleepSettingsChange:(id)a0 clientIdentifier:(id)a1;
- (void)sleepEventOccurred:(id)a0;
- (void)clientShouldCheckInWithCompletion:(id /* block */)a0;
- (void)getClientIdentifierWithCompletion:(id /* block */)a0;

@end
