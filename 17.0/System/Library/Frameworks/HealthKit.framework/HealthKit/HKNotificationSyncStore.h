@class NSString, HKTaskServerProxyProvider;

@interface HKNotificationSyncStore : NSObject <_HKXPCExportable, HKNotificationSyncStoreClient> {
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)exportedInterface;
- (id)remoteInterface;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)fakeReceivedNotificationInstruction:(id)a0 sendingDeviceInfo:(id)a1 completion:(id /* block */)a2;
- (void)getNotificationHoldInstructionsWithCompletion:(id /* block */)a0;
- (id)initWithClientIdentifier:(id)a0 healthStore:(id)a1;
- (void)obliterateNotificationInstructionsWithCompletion:(id /* block */)a0;
- (void)sendNewDeviceNotificationWithMessageKind:(long long)a0 completion:(id /* block */)a1;
- (void)sendNotificationInstruction:(id)a0 completion:(id /* block */)a1;
- (void)sendNotificationInstruction:(id)a0 savingObjectAsExistsCriteria:(id)a1 completion:(id /* block */)a2;

@end
