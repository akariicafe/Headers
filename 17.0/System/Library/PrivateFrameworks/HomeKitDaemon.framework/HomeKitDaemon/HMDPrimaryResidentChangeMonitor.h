@class NSNotificationCenter, NSUUID, NSString;
@protocol HMDPrimaryResidentChangeMonitorDataSource;

@interface HMDPrimaryResidentChangeMonitor : HMFObject <HMFLogging>

@property (readonly) NSNotificationCenter *notificationCenter;
@property BOOL isCurrentDevicePrimaryResident;
@property BOOL hasResidentDevices;
@property (copy) NSUUID *confirmedPrimaryResidentDeviceIdentifier;
@property (weak) id<HMDPrimaryResidentChangeMonitorDataSource> dataSource;
@property (readonly) NSUUID *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)configureWithHome:(id)a0;
- (id)confirmedPrimaryResidentDevice;
- (BOOL)dataSourceHasResidentDevices;
- (void)handlePrimaryResidentChangedNotification:(id)a0;
- (id)initWithIdentifier:(id)a0 notificationCenter:(id)a1;
- (void)notifyChangeToConfirmedPrimaryResidentDeviceIdentifier;
- (void)notifyChangeToHasResidentDevices;
- (void)notifyChangeToIsCurrentPrimaryResident;
- (void)refreshConfirmedPrimaryResidentDeviceIdentifierWithDevice:(id)a0;
- (void)refreshCurrentDevicePrimaryResidentWithDevice:(id)a0;
- (void)refreshHasResidentDevices;
- (void)refreshMonitor;
- (void)registerForNotificationsWithHome:(id)a0;

@end
