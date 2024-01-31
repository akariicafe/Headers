@class NSString, HDNanoSyncManager;

@interface HDNanoSyncControlServer : HDStandardTaskServer <HKNanoSyncControlServer> {
    HDNanoSyncManager *_nanoSyncManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;

- (id)exportedInterface;
- (id)remoteInterface;
- (void).cxx_destruct;
- (void)remote_fetchNanoSyncPairedDevicesWithCompletion:(id /* block */)a0;
- (void)remote_forceNanoSyncWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)remote_resetNanoSyncWithCompletion:(id /* block */)a0;
- (void)remote_waitForLastChanceSyncWithDevicePairingID:(id)a0 timeout:(double)a1 completion:(id /* block */)a2;

@end
