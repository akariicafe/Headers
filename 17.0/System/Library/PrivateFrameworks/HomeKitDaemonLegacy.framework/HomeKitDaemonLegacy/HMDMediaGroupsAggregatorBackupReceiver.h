@class NSUUID, NSString, NSObject;
@protocol OS_dispatch_queue, HMDMediaGroupsAggregatorBackupReceiverDelegate;

@interface HMDMediaGroupsAggregatorBackupReceiver : HMFObject <HMFLogging, HMFMessageReceiver>

@property (copy) NSUUID *identifier;
@property (weak) id<HMDMediaGroupsAggregatorBackupReceiverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (id)init;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)configureWithHome:(id)a0 messageDispatcher:(id)a1;
- (void)handleGroupsBackupDataMessage:(id)a0;
- (void)registerForMessagesWithHome:(id)a0 messageDispatcher:(id)a1;

@end
