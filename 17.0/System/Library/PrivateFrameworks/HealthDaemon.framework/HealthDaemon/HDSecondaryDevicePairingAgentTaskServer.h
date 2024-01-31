@class HDSecondaryDevicePairingRequest, NSObject;
@protocol OS_dispatch_source;

@interface HDSecondaryDevicePairingAgentTaskServer : HDStandardTaskServer <HKSecondaryDevicePairingAgentServerInterface> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_source> *_timeoutSource;
    BOOL _taskDidTimeout;
    HDSecondaryDevicePairingRequest *_currentRequest;
}

@property (nonatomic) double tinkerSharingSetupTimeout;
@property (copy) id /* block */ unitTest_timeoutTriggered;

+ (id)taskIdentifier;

- (id)exportedInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)connectionInterrupted;
- (id)remoteInterface;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)remote_fetchSharingStatusForCurrentAppleIDWithOwnerEmailAddress:(id)a0 completion:(id /* block */)a1;
- (void)remote_fetchSharingStatusWithPairedGuardianWithCompletion:(id /* block */)a0;
- (void)remote_performEndToEndCloudSyncWithNRDeviceUUID:(id)a0 syncParticipantFirst:(BOOL)a1 completion:(id /* block */)a2;
- (void)remote_requestTinkerSharingOptInWithGuardianDisplayName:(id)a0 NRDeviceUUID:(id)a1 completion:(id /* block */)a2;
- (void)remote_setupHealthSharingForSecondaryPairedDeviceWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)remote_tearDownHealthSharingWithPairedGuardianWithCompletion:(id /* block */)a0;
- (void)remote_tearDownHealthSharingWithTinkerDeviceWithNRUUID:(id)a0 completion:(id /* block */)a1;

@end
