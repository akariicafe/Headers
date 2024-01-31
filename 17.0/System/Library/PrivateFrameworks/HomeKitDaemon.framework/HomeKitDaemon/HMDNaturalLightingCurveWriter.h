@class HMFTimer, NSUUID, NSString, NSNotificationCenter, HMDLightProfile, NSObject;
@protocol OS_dispatch_queue, HMDLightProfileDataSource;

@interface HMDNaturalLightingCurveWriter : HMFObject <HMFMessageReceiver, HMFLogging, HMDDevicePreferenceDataSource, HMFTimerDelegate>

@property (readonly) NSUUID *UUID;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSString *logIdentifier;
@property (readonly) id /* block */ timerFactory;
@property (weak) HMDLightProfile *lightProfile;
@property (retain) HMFTimer *periodicCharacteristicWriteTimer;
@property (readonly) double naturalLightingCurveUpdateInterval;
@property (readonly) double naturalLightingCurveUpdateAccessoryTimeDifferenceThreshold;
@property (readonly) id<HMDLightProfileDataSource> dataSource;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (BOOL)supportsDeviceWithCapabilities:(id)a0;
- (void)configureWithLightProfile:(id)a0;
- (void)handleActiveTransitionContextUpdated:(id)a0;
- (void)handleCurrentDevicePrimaryResidentChangedWithReason:(id)a0;
- (void)handlePrimaryResidentUpdateNotification:(id)a0;
- (id)initWithUUID:(id)a0 workQueue:(id)a1 logIdentifier:(id)a2;
- (id)initWithUUID:(id)a0 workQueue:(id)a1 logIdentifier:(id)a2 dataSource:(id)a3 notificationCenter:(id)a4 timerFactory:(id /* block */)a5;
- (void)synchronizeCurveWithActiveTransitionContext:(id)a0;
- (void)writeForNaturalLightingEnabledWithReason:(id)a0;
- (void)writeWithNaturalLightingEnabled:(BOOL)a0 reason:(id)a1 completion:(id /* block */)a2;

@end
