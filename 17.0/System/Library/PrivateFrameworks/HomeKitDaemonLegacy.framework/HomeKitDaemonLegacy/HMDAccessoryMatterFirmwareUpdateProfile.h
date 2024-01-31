@class NSObject, HMDMatterSoftwareUpdateProviderDelegate, NSString, NSNotificationCenter, NSNumber, HMDHAPAccessory;
@protocol OS_dispatch_queue;

@interface HMDAccessoryMatterFirmwareUpdateProfile : HMFObject <HMFLogging>

@property (retain, nonatomic) NSNumber *matterFirmwareRevisionNumber;
@property (readonly, weak) HMDHAPAccessory *accessory;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (weak) HMDMatterSoftwareUpdateProviderDelegate *matterSoftwareUpdateProviderDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void)_registerForNotifications;
- (void)dealloc;
- (id)privateDescription;
- (id)characteristics;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)__handleAccessoryIsReachable;
- (void)__handleMatterFirmwareRevisionNumberUpdate:(id)a0;
- (void)__handleMatterFirmwareUpdateStatusUpdate:(id)a0;
- (void)_enableCharacteristicsNotifications:(BOOL)a0;
- (void)_handleCharacteristicChanges:(id)a0;
- (void)configureWithMatterSoftwareUpdateProviderDelegate:(id)a0;
- (void)handleAccessoryIsReachable:(id)a0;
- (void)handleAccessoryIsRemotelyReachable:(id)a0;
- (void)handleCharacteristicValuesChanged:(id)a0;
- (void)handleFirmwareVersionStringUpdatedNotification:(id)a0;
- (void)handleVIDPIDUpdatedNotification:(id)a0;
- (id)initWithAccessory:(id)a0 workQueue:(id)a1;
- (void)readAndProcessCharacteristics:(id)a0 withCompletion:(id /* block */)a1;
- (void)readMatterFirmwareUpdateCharacteristics;

@end
