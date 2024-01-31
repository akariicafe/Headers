@class HMFTimer, NSString, HMFMessageDispatcher, HMDHome, NSMutableOrderedSet, NSObject;
@protocol OS_dispatch_queue, HMDDeviceNotificationHandlerDataSource;

@interface HMDDeviceNotificationHandler : HMFObject <HMFLogging, HMFTimerDelegate>

@property (weak, nonatomic) HMDHome *home;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSString *destination;
@property (retain, nonatomic) HMFTimer *coalesceTimer;
@property (retain, nonatomic) HMFTimer *delayTimer;
@property (nonatomic) BOOL delaySupported;
@property (readonly, nonatomic) HMFMessageDispatcher *messageDispatcher;
@property (readonly, nonatomic) id<HMDDeviceNotificationHandlerDataSource> dataSource;
@property (retain) NSMutableOrderedSet *deviceNotificationsByRequestIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)_beginCoalesce:(BOOL)a0;
- (void)_dispatchNotification;
- (void)_dispatchNotificationUpdate:(id)a0;
- (id)_notificationUpdateWithRequestID:(id)a0 allowAdd:(BOOL)a1;
- (id)initWithDestination:(id)a0 watchDevice:(BOOL)a1 withRequestIdentifier:(id)a2 messageDispatcher:(id)a3 home:(id)a4;
- (id)initWithDestination:(id)a0 watchDevice:(BOOL)a1 withRequestIdentifier:(id)a2 messageDispatcher:(id)a3 home:(id)a4 dataSource:(id)a5;
- (void)sendCoalescedRemoteNotificationForAccessories:(id)a0;
- (void)sendNotificationForCharacteristicUpdates:(id)a0 withRequestIdentifier:(id)a1 notificationUpdateIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)sendNotificationForMediaProperties:(id)a0 withRequestIdentifier:(id)a1 notificationUpdateIdentifier:(id)a2;

@end
