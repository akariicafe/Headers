@class NSXPCListener, MAPushServiceConnection, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MAPushNotificationServiceDaemon : NSObject <MAPushServiceConnectionDelegate, NSXPCListenerDelegate, MAPushServiceProtocol>

@property (retain) NSXPCListener *listener;
@property (retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain) NSObject<OS_dispatch_queue> *clientUpstreamQueue;
@property (retain) NSObject<OS_dispatch_queue> *serviceQueue;
@property (retain) NSMutableArray *clients;
@property (retain) MAPushServiceConnection *pushServiceConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)unsubscribeFromAllChannels;
- (id)init;
- (void)subscribeToChannelWithIdentifier:(id)a0;
- (void)didReceivePushNotification:(id)a0;
- (void)subscribeToChannelForCurrentPlatform;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (long long)channelTypeForDevice;
- (void)addSyntheticJobWithType:(id)a0 assetSpecifier:(id)a1 matchingAssetVersion:(id)a2 triggerInterval:(long long)a3;
- (void)pushJobsAwaitingTriggerWithCompletion:(id /* block */)a0;
- (void)startListeningForConnections;
- (void)subscribedChannelIDsWithCompletion:(id /* block */)a0;
- (void)triggerPushNotificationWithPayload:(id)a0;
- (void).cxx_destruct;
- (void)channelSubscriptionsFailedWithReasons:(id)a0;
- (void)unsubscribeToChannelWithIdentifier:(id)a0;

@end
