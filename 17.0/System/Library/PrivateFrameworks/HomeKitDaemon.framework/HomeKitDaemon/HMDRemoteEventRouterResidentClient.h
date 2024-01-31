@class NSUUID;

@interface HMDRemoteEventRouterResidentClient : HMDRemoteEventRouterClient {
    BOOL _hasResetConnectionTimer;
}

@property (readonly, copy) NSUUID *homeUUID;

- (void)_registerForNotifications;
- (id)accessoryUUID;
- (id)dumpStateDescription;
- (void).cxx_destruct;
- (id)client:(id)a0 upstreamTopicsForTopic:(id)a1;
- (BOOL)clientIsEnabled:(id)a0;
- (void)configureIsPrimaryResident:(BOOL)a0 networkAvailable:(BOOL)a1 additionalPolicies:(id)a2;
- (id)forwardingTopicsForTopics:(id)a0 downstreamRouter:(id)a1;
- (void)handleAccessoryDeviceDidUpdateNotification:(id)a0;
- (void)handlePrimaryResidentConfirmedDeviceIdentifierChangeNotification:(id)a0;
- (void)handlePrimaryResidentReceivedIncomingConnection:(id)a0;
- (id)initWitAccessoryUUID:(id)a0 homeUUID:(id)a1 queue:(id)a2 dataSource:(id)a3 messageDispatcher:(id)a4 notificationCenter:(id)a5 requestMessageName:(id)a6 updateMessageName:(id)a7 storeReadHandle:(id)a8 storeWriteHandle:(id)a9 retryIntervalProvider:(id)a10 logCategory:(const char *)a11;

@end
