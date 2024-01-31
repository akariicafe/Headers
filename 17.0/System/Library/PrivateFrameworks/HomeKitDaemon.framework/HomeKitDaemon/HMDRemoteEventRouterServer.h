@class NSUUID, NSString, NSMutableDictionary, HMFMessageDispatcher, HMDRemoteEventRouterServerMessageReceiver, NSMutableArray, NSObject, HMEMessageDatagramServer, HMDEventRouterTimerProvider, NSNotificationCenter;
@protocol OS_os_log, HMDRemoteEventRouterServerDataSource, OS_dispatch_queue, HMMLogEventSubmitting;

@interface HMDRemoteEventRouterServer : NSObject <HMFLogging, HMFMessageReceiver, HMEMessageDatagramServerDataSource, HMEMessageDatagramServerDelegate> {
    NSObject<OS_os_log> *_logger;
    BOOL _isPrimaryResident;
    BOOL _isResidentEventProviding;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUUID *_homeUUID;
    NSUUID *_accessoryUUID;
    NSString *_routerRequestMessageName;
    NSString *_routerUpdateMessageName;
    HMFMessageDispatcher *_messageDispatcher;
    NSNotificationCenter *_notificationCenter;
    HMDEventRouterTimerProvider *_timerProvider;
    HMEMessageDatagramServer *_connectionServer;
    id<HMDRemoteEventRouterServerDataSource> _dataSource;
    NSMutableDictionary *_accessControls;
    HMDRemoteEventRouterServerMessageReceiver *_accessoryMessageReceiver;
    id<HMMLogEventSubmitting> _logEventSubmitter;
}

@property (readonly) NSMutableArray *currentConnections;
@property (readonly) NSUUID *residentModeUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (id)dumpStateDescription;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)submitLogEvent:(id)a0;
- (id)server:(id)a0 expandedTopicsForTopics:(id)a1;
- (void)server:(id)a0 connectionDidConnect:(id)a1;
- (void)server:(id)a0 connectionDidExpire:(id)a1;
- (void)server:(id)a0 connectionDidFail:(id)a1;
- (BOOL)server:(id)a0 isConnectionTerminatingError:(id)a1;
- (void)server:(id)a0 logMetricsForEventTopic:(id)a1 eventSize:(unsigned long long)a2 isCached:(BOOL)a3;
- (void)server:(id)a0 logMetricsForMessageDatagramFragmentation:(BOOL)a1 isFragmented:(BOOL)a2;
- (void)server:(id)a0 sendEvents:(id)a1 cachedEvents:(id)a2 connection:(id)a3 completion:(id /* block */)a4;
- (BOOL)server:(id)a0 shouldProcessEventsForConnection:(id)a1 shouldLogState:(BOOL)a2;
- (double)server:(id)a0 timeoutIntervalForConnection:(id)a1;
- (id)server:(id)a0 upstreamTopicsForTopic:(id)a1;
- (double)serverDebounceTimeInterval:(id)a0;
- (unsigned long long)serverFragmentEventsDataSize:(id)a0;
- (BOOL)serverSupportFragmentCachedEvents:(id)a0;
- (id)serverTimerProvider:(id)a0;
- (BOOL)shouldAllowEvent:(id)a0 topic:(id)a1 connection:(id)a2;
- (void)submitLogEvent:(id)a0 error:(id)a1;
- (void)_handleChangeRegistrationsRequest:(id)a0 originalMessage:(id)a1;
- (void)_handleConnectRequest:(id)a0 originalMessage:(id)a1 connectionMode:(long long)a2;
- (void)_handleDisconnectRequest:(id)a0 originalMessage:(id)a1;
- (void)_handleFetchEventsRequest:(id)a0 originalMessage:(id)a1;
- (void)_handleKeepAliveRequest:(id)a0 originalMessage:(id)a1;
- (void)_handlePrimaryRequestMessage:(id)a0;
- (void)_handleProtoRequest:(id)a0 originalMessage:(id)a1 connectionMode:(long long)a2;
- (void)_handleRequestMessage:(id)a0 connectionMode:(long long)a1;
- (void)_handleUserPrivilegeChange:(id)a0;
- (void)_registerForAccessoryMessages:(id)a0;
- (void)_registerForMessages:(id)a0 withHome:(id)a1;
- (id)_underlyingMessageDataFromFragmentMessageData:(id)a0 error:(id *)a1;
- (void)configureWithHome:(id)a0 isPrimaryResident:(BOOL)a1 isResidentEventProviding:(BOOL)a2 additionalPolicies:(id)a3;
- (void)handleHomeUserRemovedNotification:(id)a0;
- (void)handlePrimaryResidentIsCurrentDeviceChangeNotification:(id)a0;
- (id)initWithPrimaryModeUUID:(id)a0 residentModeUUID:(id)a1 queue:(id)a2 messageDispatcher:(id)a3 dataSource:(id)a4 notificationCenter:(id)a5 requestMessageName:(id)a6 updateMessageName:(id)a7 logCategory:(const char *)a8 logEventSubmitter:(id)a9 connectionServerFactory:(id /* block */)a10;
- (id)initWithPrimaryModeUUID:(id)a0 residentModeUUID:(id)a1 queue:(id)a2 messageDispatcher:(id)a3 dataSource:(id)a4 notificationCenter:(id)a5 requestMessageName:(id)a6 updateMessageName:(id)a7 subscriptionProvider:(id)a8 registrationEventRouter:(id)a9 storeReadHandle:(id)a10;
- (BOOL)isErrorHMENotAcceptingConnections:(id)a0;
- (void)logMetricsForLiveEvents:(id)a0 cachedEvents:(id)a1 destinationDevice:(id)a2 destinationDeviceIdentifier:(id)a3 responseMessageType:(unsigned long long)a4;
- (id)messageTargetForMode:(long long)a0;
- (void)refreshConnections:(id)a0;
- (void)respondToMessage:(id)a0 underlyingResponseData:(id)a1 connection:(id)a2 label:(id)a3;
- (void)respondToMessage:(id)a0 underlyingResponseData:(id)a1 supportsFragmentMessage:(BOOL)a2 label:(id)a3;
- (id /* block */)responseHandlerForSendMessageIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)sendMessageWithPayloadMessage:(id)a0 destination:(id)a1 messageType:(long long)a2 completion:(id /* block */)a3;
- (id)server:(id)a0 forwardingTopicsForTopics:(id)a1;

@end
