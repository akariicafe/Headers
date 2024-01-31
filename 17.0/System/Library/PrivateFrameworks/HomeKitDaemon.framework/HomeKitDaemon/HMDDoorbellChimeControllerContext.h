@class NSUUID, HMDCharacteristicsAvailabilityListener, NSNotificationCenter, NSString, NSObject, HMDHAPAccessory;
@protocol OS_dispatch_queue, HMMLogEventSubmitting, HMDCoordinationStateManagerProviding, HMDCOStateManager;

@interface HMDDoorbellChimeControllerContext : NSObject <HMDDoorbellChimeControllerContext>

@property (readonly, weak) id<HMDCOStateManager> stateManager;
@property (readonly, weak) id<HMDCoordinationStateManagerProviding> stateManagerProvider;
@property (weak) HMDHAPAccessory *accessory;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) HMDCharacteristicsAvailabilityListener *listener;
@property (readonly, getter=isFeatureEnabled) BOOL featureEnabled;
@property (readonly, getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident;
@property (readonly) Class doorbellBulletinUtilitiesClass;
@property (readonly) double doorbellChimeMaximumAnnounceDelay;
@property (readonly, copy) NSUUID *currentAccessoryUUID;
@property (readonly, getter=isCoordinationPathEnabled) BOOL coordinationPathEnabled;
@property (readonly) id<HMMLogEventSubmitting> logEventDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)accessorySupportsCoordinationDoorbellChime:(id)a0;
- (id)clearCoordinationStateForKeyPaths:(id)a0;
- (id)fetchDoorbellDelay;
- (id)initWithWorkQueue:(id)a0 accessory:(id)a1;
- (id)keyPathFromComponents:(id)a0;
- (id)postCULiveAction:(id)a0;
- (id)postCoordinationState:(id)a0;

@end
