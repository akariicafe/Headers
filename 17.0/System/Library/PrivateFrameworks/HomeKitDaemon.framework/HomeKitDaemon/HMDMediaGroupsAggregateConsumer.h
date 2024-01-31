@class NSObject, NSUUID, HMDMediaGroupsStageManager, NSNotificationCenter, NSArray, HMDMediaGroupsAggregateData, NSString;
@protocol HMDMediaGroupsAggregateConsumerDelegate, OS_os_log, HMESubscriptionProviding;

@interface HMDMediaGroupsAggregateConsumer : HMFObject <HMFLogging, HMEEventConsumer, HMDMediaGroupsAggregateConsumerDataProvider, HMDMediaGroupsStageManagerDelegate> {
    NSObject<OS_os_log> *_logger;
}

@property (readonly, copy) NSUUID *identifier;
@property (readonly) id<HMESubscriptionProviding> subscriptionProvider;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) HMDMediaGroupsStageManager *stageManager;
@property (readonly) HMDMediaGroupsAggregateData *aggregationData;
@property (weak) id<HMDMediaGroupsAggregateConsumerDelegate> delegate;
@property (readonly, copy) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)didReceiveEvent:(id)a0 topic:(id)a1;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)didReceiveCachedEvent:(id)a0 topic:(id)a1 source:(id)a2;
- (void)unconfigure;
- (id)allMediaSystemData;
- (void)commitAggregationData:(id)a0;
- (void)configureWithHome:(id)a0;
- (id)destinationControllerDataWithParentIdentifier:(id)a0;
- (id)destinationWithIdentifier:(id)a0;
- (id)destinationWithParentIdentifier:(id)a0;
- (void)didUpdateAggregateDataForMediaGroupsStageManager:(id)a0;
- (id)groupWithIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0 subscriptionProvider:(id)a1 notificationCenter:(id)a2 stageManager:(id)a3;
- (BOOL)isAggregateTopic:(id)a0;
- (id)mediaSystemDataWithIdentifier:(id)a0;
- (void)notifyOfUpdatedAggregateData;
- (void)stageNullDestinationForCurrentDestinationControllerIdentifier:(id)a0;
- (void)startSubscriptionForHome:(id)a0;
- (void)stopSubscription;
- (void)unstageNullDestinationForCurrentDestinationController;

@end
