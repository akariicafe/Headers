@class NSNotificationCenter, NSString;

@interface HMDPrimaryResidentDiscoveryManagerDefaultDataSource : NSObject <HMDPrimaryResidentDiscoveryManagerDataSource>

@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)remoteDeviceMonitorFromContext:(id)a0;
- (id)createBackoffTimer;
- (id)createPrimaryResidentDiscoveryOperationWithContext:(id)a0;
- (id)transportStartFutureFromContext:(id)a0;

@end
