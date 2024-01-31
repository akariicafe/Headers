@class NSUUID, HMFMessageDispatcher, HMDPrimaryResidentMessageRouterMetricsDispatcher, NSString;
@protocol HMDPrimaryResidentMessageRouterDataSource;

@interface HMDPrimaryResidentMessageRouter : HMFObject <HMFLogging, HMDMessageRouter>

@property (readonly, copy) NSUUID *homeUUID;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) HMDPrimaryResidentMessageRouterMetricsDispatcher *metricsDispatcher;
@property (weak) id<HMDPrimaryResidentMessageRouterDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)dataSourcePrimaryResidentDeviceWithMessage:(id)a0;
- (id)initWithHomeUUID:(id)a0 messageDispatcher:(id)a1 metricsDispatcher:(id)a2;
- (void)relayMessage:(id)a0 device:(id)a1;
- (void)routeMessage:(id)a0 allowRemoteRelayFromPrimary:(BOOL)a1 localHandler:(id /* block */)a2;
- (void)routeMessage:(id)a0 localHandler:(id /* block */)a1;

@end
