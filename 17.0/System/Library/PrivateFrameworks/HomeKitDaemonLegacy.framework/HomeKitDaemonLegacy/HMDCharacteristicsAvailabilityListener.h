@class HMDHAPAccessory, NSSet, NSString, NSDictionary, NSObject, HMDNotificationRegistration;
@protocol OS_dispatch_queue, HMDCharacteristicsAvailabilityListenerDelegate;

@interface HMDCharacteristicsAvailabilityListener : HMFObject <HMFLogging>

@property (readonly, weak) HMDHAPAccessory *accessory;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMDNotificationRegistration *notificationRegistration;
@property (copy) NSSet *availableCharacteristics;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly, copy) NSDictionary *interestedCharacteristicTypesByServiceType;
@property (weak) id<HMDCharacteristicsAvailabilityListenerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)_registerForNotifications;
- (void)start;
- (void)_notifyDelegate;
- (void).cxx_destruct;
- (id)_accessoryCharacteristicsToObserve;
- (void)handleCharacteristicsUpdated:(id)a0;
- (void)handleServicesUpdated:(id)a0;
- (id)initWithAccessory:(id)a0 workQueue:(id)a1 interestedCharacteristicTypesByServiceType:(id)a2;

@end
