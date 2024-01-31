@class NSUUID, NSString, NSObject;
@protocol OS_dispatch_queue, HMDMediaGroupsAggregatorMessengerDelegate, HMDMediaGroupsAggregatorMessengerDataSource;

@interface HMDMediaGroupsAggregatorMessenger : NSObject <HMFLogging, HMFMessageReceiver>

@property (retain) NSUUID *identifier;
@property (weak) id<HMDMediaGroupsAggregatorMessengerDataSource> dataSource;
@property (weak) id<HMDMediaGroupsAggregatorMessengerDelegate> delegate;
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
- (id)router;
- (void)configureWithMessageDispatcher:(id)a0 home:(id)a1;
- (void)locallyHandleUpdateAssociatedGroupIdentifierRequestMessage:(id)a0;
- (void)notifyOfRequestToUpdateAssociatedGroupIdentifierWithPayload:(id)a0 message:(id)a1;
- (void)registerForMessagesWithMessageDispatcher:(id)a0 home:(id)a1;
- (void)routeMessage:(id)a0 localHandler:(id /* block */)a1;
- (void)routeUpdateAssociatedGroupIdentifierRequestMessage:(id)a0;
- (void)sendRequestToUpdateAssociatedGroupIdentifier:(id)a0 forGroupIdentifier:(id)a1 completion:(id /* block */)a2;

@end
