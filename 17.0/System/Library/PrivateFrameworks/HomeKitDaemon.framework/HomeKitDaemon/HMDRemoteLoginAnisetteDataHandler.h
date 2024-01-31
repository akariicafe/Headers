@class NSSet, NSUUID, HMDAppleMediaAccessory, HMFMessageDispatcher, AKAnisetteProvisioningController, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDRemoteLoginAnisetteDataHandler : HMFObject <HMFLogging, HMDHomeMessageReceiver>

@property (class, readonly) BOOL hasMessageReceiverChildren;

@property (readonly, weak) HMDAppleMediaAccessory *accessory;
@property (readonly, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (readonly, nonatomic) AKAnisetteProvisioningController *provisioningController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)registerForMessages;
- (void)_handleEraseAnisetteDataRequestMessage:(id)a0;
- (void)_handleFetchAnisetteDataRequestMessage:(id)a0;
- (void)_handleLegacyAnisetteDataRequestMessage:(id)a0;
- (void)_handleProvisionAnisetteDataRequestMessage:(id)a0;
- (void)_handleSyncAnisetteDataRequestMessage:(id)a0;
- (void)configureWithWorkQueue:(id)a0 messageDispatcher:(id)a1;
- (id)initWithUUID:(id)a0 accessory:(id)a1;

@end
