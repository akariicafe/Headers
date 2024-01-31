@class NSArray, NSMutableDictionary, NSString, NSObject;
@protocol HMDStereoPairSettingsControllerDataSource, OS_dispatch_queue, HMDCompositeSettingControllerManagerStateManager;

@interface HMDStereoPairSettingsController : HMFObject <HMDCompositeSettingControllerManagerStateManagerDataSource, HMEEventConsumer, HMFLogging, HMDCompositeSettingControllerManagerStateTransitionDelegate>

@property (weak, nonatomic) id<HMDStereoPairSettingsControllerDataSource> dataSource;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) id<HMDCompositeSettingControllerManagerStateManager> residentRunStateManager;
@property (retain) NSMutableDictionary *topicToLastReceivedEvent;
@property (readonly, copy) NSArray *homes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)didReceiveEvent:(id)a0 topic:(id)a1;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)didReceiveCachedEvent:(id)a0 topic:(id)a1 source:(id)a2;
- (id)_homeUUID;
- (id)_mediaSystemWithAccessorryUUID:(id)a0;
- (BOOL)_currentDevicePrimaryResident;
- (id)_groupOwnerTopicsForMediaSystem:(id)a0;
- (id)_mediaSystemGroupOwnerAccessoryUUID:(id)a0;
- (id)_mediaSystems;
- (void)_postAsStereoPairEventsIfDifferentForHome:(id)a0 mediaSystem:(id)a1 keyPath:(id)a2 setting:(id)a3;
- (void)_processReceivedEvent:(id)a0 topic:(id)a1 home:(id)a2 mediaSystem:(id)a3;
- (void)_subscribeToAddedMediaSystem:(id)a0;
- (void)_unsubscribeToRemovedMediaSystem:(id)a0;
- (void)didUpdateCurrentRunState:(long long)a0 updatedState:(long long)a1 forHome:(id)a2;
- (id)initWithDataSource:(id)a0 workQueue:(id)a1;
- (id)initWithDataSource:(id)a0 workQueue:(id)a1 stateManagerFactory:(id /* block */)a2;
- (id)mediaSystemGroupOwner:(id)a0;
- (void)pushLastEvent:(id)a0 topic:(id)a1;
- (void)startIfPrimaryResident;
- (void)stopIfPrimaryResidentChange;
- (void)subscribeToAddedMediaSystemIfPrimaryResident:(id)a0;
- (void)unsubscribeToRemovedMediaSystemIfPrimaryResident:(id)a0;

@end
