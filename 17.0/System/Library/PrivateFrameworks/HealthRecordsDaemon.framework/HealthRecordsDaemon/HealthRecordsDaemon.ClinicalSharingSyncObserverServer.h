@interface HealthRecordsDaemon.ClinicalSharingSyncObserverServer : NSObject <HKClinicalSharingSyncObserverServerInterface, _HKXPCExportable> {
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ syncStateSubject;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ syncStateCancellable;
}

- (id)exportedInterface;
- (id)remoteInterface;
- (void)connectionInvalidated;
- (void)remote_startObservingSyncStatusWithCompletion:(id /* block */)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
