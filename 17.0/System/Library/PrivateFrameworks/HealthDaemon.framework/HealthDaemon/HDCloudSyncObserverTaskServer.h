@class NSString, NSObservation, HKCloudSyncObserverStatus, NSObject;
@protocol OS_dispatch_queue;

@interface HDCloudSyncObserverTaskServer : HDStandardTaskServer <HKCloudSyncObserverServerInterface, HDCloudSyncManagerObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    HKCloudSyncObserverStatus *_status;
    NSObservation *_waitForSyncObservations;
    BOOL _observingSyncStatus;
    BOOL _hasRestoreCompleted;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (BOOL)validateClient:(id)a0 error:(id *)a1;

- (id)exportedInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (id)remoteInterface;
- (void)cloudSyncManager:(id)a0 didUpdateSyncEnabled:(BOOL)a1;
- (void)cloudSyncManager:(id)a0 didUpdateRestoreCompletionDate:(id)a1;
- (void)connectionInvalidated;
- (void)cloudSyncManager:(id)a0 didUpdateLastPullDate:(id)a1;
- (void)cloudSyncManager:(id)a0 didUpdateLastPushDate:(id)a1;
- (void).cxx_destruct;
- (void)cloudSyncManager:(id)a0 didUpdateDataUploadRequestStatus:(long long)a1 startDate:(id)a2 endDate:(id)a3;
- (void)cloudSyncManager:(id)a0 didUpdateLastLitePushDate:(id)a1;
- (void)cloudSyncManager:(id)a0 didUpdateErrorRequiringUserAction:(id)a1;
- (void)cloudSyncManager:(id)a0 didUpdateLastPulledUpdateDate:(id)a1;
- (void)remote_startObservingSyncStatusWithCompletion:(id /* block */)a0;
- (id)remote_startSyncIfRestoreNotCompletedWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)_cloudKitIdentityUpdated:(id)a0;

@end
