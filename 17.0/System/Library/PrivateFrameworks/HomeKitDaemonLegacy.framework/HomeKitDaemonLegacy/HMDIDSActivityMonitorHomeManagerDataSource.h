@class NSString, HMDHomeManager;
@protocol HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate;

@interface HMDIDSActivityMonitorHomeManagerDataSource : NSObject <HMFLogging, HMDIDSActivityMonitorDataSource>

@property (readonly) HMDHomeManager *homeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate> delegate;

+ (id)logCategory;

- (void)start;
- (id)initWithHomeManager:(id)a0;
- (void).cxx_destruct;
- (id)currentDevice;
- (void)handleDeviceAdded:(id)a0;
- (void)handleDeviceRemoved:(id)a0;
- (void)handleRegistrationUpdated:(id)a0;
- (BOOL)homeHasCamera:(id)a0;
- (void)pushTokensForDevicesObservingSubjectDevice:(id)a0 subActivity:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (void)startObservingDevice:(id)a0 subActivity:(id)a1;
- (void)startWithNotificationCenter:(id)a0;
- (void)stopObservingDevice:(id)a0 subActivity:(id)a1;

@end
