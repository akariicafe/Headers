@class NSString, HMFExponentialBackoffTimer, NSObject;
@protocol HMDPrimaryResidentDiscoveryManagerDataSource, HMDPrimaryResidentDiscoveryManagerDelegate, HMDResidentDeviceManagerContext, OS_dispatch_queue, HMDPrimaryResidentDiscoveryOperation;

@interface HMDPrimaryResidentDiscoveryManager : NSObject <HMFLogging, HMFTimerDelegate, HMDPrimaryResidentDiscoveryManager> {
    NSObject<OS_dispatch_queue> *_queue;
    id<HMDPrimaryResidentDiscoveryManagerDataSource> _dataSource;
    id<HMDResidentDeviceManagerContext> _context;
    id<HMDPrimaryResidentDiscoveryOperation> _primaryDiscoveryOperation;
    HMFExponentialBackoffTimer *_retryTimer;
}

@property (retain, nonatomic) NSString *logIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMDPrimaryResidentDiscoveryManagerDelegate> delegate;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (id)initWithQueue:(id)a0;
- (id)initWithQueue:(id)a0 dataSource:(id)a1;
- (void).cxx_destruct;
- (void)cancel;
- (void)configureWithContext:(id)a0;
- (void)_discoverPrimaryResident;
- (void)_handleDeviceMonitorReachableNotification:(id)a0;
- (void)_removeRetryTimer;
- (void)_startRetryTimer;
- (void)completedDiscoveryWithPrimaryResident:(id)a0 primaryResidentGenerationID:(id)a1 error:(id)a2;
- (void)discoverPrimaryResident;
- (void)sendCheckForResidentsInHomeNotification;

@end
