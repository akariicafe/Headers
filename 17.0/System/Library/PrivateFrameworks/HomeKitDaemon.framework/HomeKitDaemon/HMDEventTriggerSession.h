@class NSSet, NSUUID, NSString, HMFMessageDispatcher, HMDEventTrigger, NSObject, HMDDevice;
@protocol OS_dispatch_queue;

@interface HMDEventTriggerSession : HMFObject <HMFDumpState, HMFLogging, HMDHomeMessageReceiver>

@property (class, readonly) BOOL hasMessageReceiverChildren;

@property (readonly, nonatomic) NSUUID *sessionID;
@property (readonly, nonatomic) NSString *logString;
@property (readonly, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (weak, nonatomic) HMDEventTrigger *eventTrigger;
@property (readonly, nonatomic) NSUUID *eventTriggerUUID;
@property (readonly, nonatomic) HMDDevice *currentDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void)dealloc;
- (id)dumpState;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)_registerForMessages;
- (id)initWithSessionID:(id)a0 eventTrigger:(id)a1 workQueue:(id)a2 msgDispatcher:(id)a3;
- (BOOL)sendMessage:(id)a0 payload:(id)a1 device:(id)a2 responseHandler:(id /* block */)a3;
- (BOOL)sendMessage:(id)a0 payload:(id)a1 device:(id)a2 target:(id)a3 responseHandler:(id /* block */)a4;
- (BOOL)sendResidentMessage:(id)a0 payload:(id)a1 responseHandler:(id /* block */)a2;

@end
