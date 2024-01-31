@class HMDAccountRegistry, NSArray, NSString, HMDModernTransportDeviceReachabilityObserver, HMDRemoteDeviceMonitor;
@protocol HMDRemoteHomeMessagingManager;

@interface HMDSecureRemoteMessageTransportDefaultDataSource : NSObject <HMDSecureRemoteMessageTransportDataSource>

@property (readonly, nonatomic) NSArray *transports;
@property (readonly, nonatomic) HMDAccountRegistry *accountRegistry;
@property (readonly, nonatomic) HMDRemoteDeviceMonitor *deviceMonitor;
@property (readonly, nonatomic) HMDModernTransportDeviceReachabilityObserver *reachabilityObserver;
@property (readonly, nonatomic) id<HMDRemoteHomeMessagingManager> homeMessagingManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)secureSessionWithDevice:(id)a0;

@end
