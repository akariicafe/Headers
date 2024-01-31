@class HMFTimer, NSUUID, NSString, HMDHomeManager, HMDHome, NSObject;
@protocol HMDDeviceSetupTrackingInfo, OS_os_log, HMMLogEventSubmitting;

@interface HMDAccessorySetupMetricDispatcher : HMFObject <HMFTimerDelegate, HMFLogging, HMEEventConsumer> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_os_log> *_logger;
    BOOL _submitted;
    HMFTimer *_timer;
    id<HMMLogEventSubmitting> _dispatcher;
    HMDHomeManager *_homeManager;
    HMDHome *_home;
}

@property (readonly, copy, nonatomic) NSUUID *setupSessionIdentifier;
@property (readonly) BOOL isRepairSession;
@property (readonly) unsigned long long firstSettingTime;
@property (readonly) unsigned long long languageSettingTime;
@property (readonly) unsigned long long addAccessoryFinishTime;
@property (readonly) unsigned long long accessoryRemovedTime;
@property (readonly) id<HMDDeviceSetupTrackingInfo> trackingInfo;
@property (readonly) BOOL submitted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (void)didReceiveEvent:(id)a0 topic:(id)a1;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)submit;
- (void)didReceiveCachedEvent:(id)a0 topic:(id)a1 source:(id)a2;
- (void)addHome:(id)a0;
- (id)initWithTrackingInfo:(id)a0 setupSessionIdentifier:(id)a1 homeManager:(id)a2;
- (id)initWithTrackingInfo:(id)a0 setupSessionIdentifier:(id)a1 homeManager:(id)a2 logEventDispatcher:(id)a3 timerFactory:(id /* block */)a4;
- (void)markAccessoryAddCompleted;
- (void)markAccessoryRemoved;
- (void)markFirstSettingObserved;
- (void)markLanguageSettingObserved;
- (void)markRepairSessionComplete;

@end
