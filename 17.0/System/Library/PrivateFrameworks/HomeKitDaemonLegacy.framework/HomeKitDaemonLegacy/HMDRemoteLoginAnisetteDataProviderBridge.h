@class NSUUID, HMFMessageDispatcher, HMDRemoteLoginMessageSender, NSString, NSObject, NSSet;
@protocol OS_dispatch_queue;

@interface HMDRemoteLoginAnisetteDataProviderBridge : HMFObject <HMFLogging, HMDHomeMessageReceiver, NSSecureCoding>

@property (class, readonly) BOOL hasMessageReceiverChildren;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (retain, nonatomic) HMDRemoteLoginMessageSender *remoteMessageSender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (id)initWithUUID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)registerForMessages;
- (void)configureWithWorkQueue:(id)a0 messageDispatcher:(id)a1 remoteMessageSender:(id)a2;

@end
