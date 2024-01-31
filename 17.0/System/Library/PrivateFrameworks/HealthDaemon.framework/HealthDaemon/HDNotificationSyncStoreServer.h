@class NSString, HDNotificationSyncClient, NSObject;
@protocol OS_dispatch_queue;

@interface HDNotificationSyncStoreServer : HDStandardTaskServer <HKNotificationSyncStoreServer> {
    NSObject<OS_dispatch_queue> *_queue;
    HDNotificationSyncClient *_syncClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (Class)configurationClass;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;

- (id)exportedInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (id)remoteInterface;
- (void).cxx_destruct;
- (void)remote_fakeReceivedNotificationInstruction:(id)a0 sendingDeviceInfo:(id)a1 completion:(id /* block */)a2;
- (void)remote_notificationHoldInstructionsWithCompletion:(id /* block */)a0;
- (void)remote_obliterateNotificationInstructionsWithCompletion:(id /* block */)a0;
- (void)remote_sendNewDeviceNotificationWithMessageKind:(long long)a0 completion:(id /* block */)a1;
- (void)remote_sendNotificationInstruction:(id)a0 completion:(id /* block */)a1;
- (void)remote_sendNotificationInstruction:(id)a0 savingObjectAsExistsCriteria:(id)a1 completion:(id /* block */)a2;

@end
