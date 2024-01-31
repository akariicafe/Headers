@class NSNumber, NSUUID, NSString, HMDHome, NSNotificationCenter, NSObject, HMDResidentReachabilityState;
@protocol OS_dispatch_queue, HMDHomePrimaryResidentInitialReachabilityManagerDataSource;

@interface HMDHomePrimaryResidentInitialReachabilityManager : HMFObject <HMFLogging>

@property (readonly) id<HMDHomePrimaryResidentInitialReachabilityManagerDataSource> dataSource;
@property (readonly, copy) NSUUID *uuid;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSString *key;
@property (weak) HMDHome *home;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly, copy) HMDResidentReachabilityState *persistedState;
@property (readonly, copy) NSNumber *initialReachability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)clearPersistedState;
- (void)configureWithHome:(id)a0;
- (void)handleHomeRemovedNotification:(id)a0;
- (void)handlePrimaryResidentUpdateNotification:(id)a0;
- (void)handlePrimaryResidentUpdated:(id)a0 reason:(id)a1;
- (void)handleResidentDeviceEnabledStateChangeNotification:(id)a0;
- (void)handleResidentDeviceManagerUpdateResidentNotification:(id)a0;
- (id)initWithUUID:(id)a0 workQueue:(id)a1;
- (id)initWithUUID:(id)a0 workQueue:(id)a1 notificationCenter:(id)a2 dataSource:(id)a3;
- (void)persistState:(id)a0;

@end
