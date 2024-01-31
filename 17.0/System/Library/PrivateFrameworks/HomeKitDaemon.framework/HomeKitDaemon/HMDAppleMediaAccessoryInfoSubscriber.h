@class NSString, HMFWiFiNetworkInfo, NSObject;
@protocol OS_dispatch_queue, HMDAppleMediaAccessoryInfoSubscriberDataSource, HMDAppleMediaAccessoryInfoSubscriberDelegate;

@interface HMDAppleMediaAccessoryInfoSubscriber : NSObject <HMEEventConsumer, HMFLogging>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, weak) id<HMDAppleMediaAccessoryInfoSubscriberDataSource> dataSource;
@property (retain) HMFWiFiNetworkInfo *receivedWifiInfo;
@property (weak) id<HMDAppleMediaAccessoryInfoSubscriberDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)didReceiveEvent:(id)a0 topic:(id)a1;
- (id)initWithQueue:(id)a0 dataSource:(id)a1;
- (void).cxx_destruct;
- (void)didReceiveCachedEvent:(id)a0 topic:(id)a1 source:(id)a2;
- (void)subscribeToWiFiInfoUpdate;

@end
