@class NSString, NSUUID, NSObject;
@protocol HMDAudioAnalysisEventSubscriberContext, OS_dispatch_queue;

@interface HMDAudioAnalysisEventSubscriber : NSObject <HMFLogging, HMFMessageReceiver>

@property (readonly) id<HMDAudioAnalysisEventSubscriberContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (id)initWithContext:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)configureWithContext:(id)a0;
- (void)registerForMessages;
- (void)deregisterForMessages;
- (void)_handleAudioAnalysisEventMessage:(id)a0;
- (void)_postBulletinNotificationWithBulletin:(id)a0;
- (void)_postOrUpdateNotificationWithBulletin:(id)a0;
- (void)_postOrUpdateNotificationWithBulletin:(id)a0 stereoPairedAccessory:(id)a1;
- (void)_postUpdateEventRouterEventIfDifferent:(id)a0;
- (id)mediaSystemLastKnownEventKeyForAccessoryUUID:(id)a0 pairedAccessoryUUID:(id)a1 reason:(unsigned long long)a2;
- (void)postNotificationForEvent:(id)a0;
- (void)postOrUpdateNotificationWithBulletinIfneeded:(id)a0;
- (BOOL)shouldPublishEvent:(id)a0;
- (id)stereoPairedCounterpartAccessory;
- (id)transformHMDBulletinToHMBulletin:(id)a0;

@end
