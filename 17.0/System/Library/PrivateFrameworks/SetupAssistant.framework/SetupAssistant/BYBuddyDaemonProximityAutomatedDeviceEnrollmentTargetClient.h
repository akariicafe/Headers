@class NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, BYBuddyDaemonProximityAutomatedDeviceEnrollmentTargetProtocol;

@interface BYBuddyDaemonProximityAutomatedDeviceEnrollmentTargetClient : NSObject <BYBuddyDaemonProximityAutomatedDeviceEnrollmentTargetProtocol>

@property (readonly, nonatomic) NSXPCConnection *daemonConnection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (weak, nonatomic) NSObject<BYBuddyDaemonProximityAutomatedDeviceEnrollmentTargetProtocol> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;

- (void)shutdown;
- (id)init;
- (void).cxx_destruct;
- (void)activateUsingWiFiWithCompletion:(id /* block */)a0;
- (void)beginAdvertisingProximityAutomatedDeviceEnrollment;
- (void)configuratorPairingSuccessfulWithViewModel:(id)a0;
- (id)connectionToMachService:(id)a0;
- (void)dismissProximityPinCodeWithError:(id)a0;
- (void)displayProximityPinCode:(id)a0;
- (void)displayShutdownUI;
- (void)endAdvertisingProximityAutomatedDeviceEnrollment;
- (void)enrollmentCompleteWithViewModel:(id)a0;
- (void)enrollmentHasStatusUpdateWithViewModel:(id)a0;
- (void)fetchActivationStateWithCompletion:(id /* block */)a0;

@end
