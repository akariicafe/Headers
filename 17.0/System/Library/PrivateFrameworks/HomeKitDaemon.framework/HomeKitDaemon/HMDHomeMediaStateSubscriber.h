@class NSUUID, NSString, NSObject;
@protocol OS_dispatch_queue, HMDHomeMediaStateSubscriberDataSource, HMESubscriptionProviding;

@interface HMDHomeMediaStateSubscriber : HMFObject <HMEEventConsumer, HMFLogging>

@property (readonly, weak, nonatomic) id<HMDHomeMediaStateSubscriberDataSource> dataSource;
@property (readonly, copy, nonatomic) NSUUID *homeUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) id<HMESubscriptionProviding> subscriptionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)logCategory;

- (void)didReceiveEvent:(id)a0 topic:(id)a1;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)didReceiveCachedEvent:(id)a0 topic:(id)a1 source:(id)a2;
- (id)initWithHomeUUID:(id)a0 workQueue:(id)a1 dataSource:(id)a2 subscriptionProvider:(id)a3;
- (void)subscribeForAppleMediaState;
- (void)subscribeForAppleMediaStateForAccessory:(id)a0;
- (void)unsubscribeForAppleMediaState;
- (void)unsubscribeForAppleMediaStateForAccessory:(id)a0;

@end
