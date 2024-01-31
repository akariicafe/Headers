@class NSString, FMXPCSession, FMXPCServiceDescription, NSObject;
@protocol OS_dispatch_queue, SPSecureLocationsXPCProtocol;

@interface SPSecureLocationsManager : NSObject <SPSecureLocationsClientXPCProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id<SPSecureLocationsXPCProtocol> proxy;
@property (copy, nonatomic) id /* block */ locationUpdates;
@property (copy, nonatomic) id /* block */ clearCacheUpdates;
@property (copy, nonatomic) id /* block */ stewieUpdateBlock;
@property (nonatomic) long long lastUpdatedStewieState;
@property (nonatomic) unsigned long long stewieRetryCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)remoteInterface;

- (void)invalidationHandler:(id)a0;
- (void)setLocationUpdateBlock:(id /* block */)a0;
- (void)interruptionHandler:(id)a0;
- (void)subscribeAndFetchLocationForIds:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)currentStewieStateWithCompletion:(id /* block */)a0;
- (id)init;
- (void)stewieServiceStateChanged:(long long)a0;
- (void)stewiePublishStateWithCompletion:(id /* block */)a0;
- (void)subscribeAndFetchLocationForIds:(id)a0 clientApp:(id)a1 completion:(id /* block */)a2;
- (void)triggerStewieProactiveNotification;
- (void)startMonitoringFailedSubscriptions:(id /* block */)a0;
- (void)updateLocationCacheWith:(id)a0 completion:(id /* block */)a1;
- (void)performKeyRollWithCompletion:(id /* block */)a0;
- (void)receivedLocationCommand:(id)a0 completion:(id /* block */)a1;
- (void)latestLocationFromCacheForId:(id)a0 completion:(id /* block */)a1;
- (void)clearLocationsForFailedSubscriptions:(id)a0;
- (void)unsubscribeForIds:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)stopMonitoringStewieStateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)startMonitoringStewieStateWithBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)shouldStartLocationMonitorWithCompletion:(id /* block */)a0;
- (double)_decayedWaitIntervalForRetryCount:(unsigned long long)a0;
- (void)receivedLocationPayload:(id)a0 completion:(id /* block */)a1;
- (void)fetchConfigFromServerWithCompletion:(id /* block */)a0;
- (void)simulateFeatureDisabled:(BOOL)a0 completion:(id /* block */)a1;
- (void)unsubscribeForId:(id)a0 clientApp:(id)a1 completion:(id /* block */)a2;
- (void)shareCurrentKeyWithId:(id)a0 idsHandles:(id)a1 completion:(id /* block */)a2;
- (void)receivedUpdatedLocations:(id)a0;
- (void)isLocationPublishingDeviceWithCompletion:(id /* block */)a0;
- (void)publishLocation:(id)a0 completion:(id /* block */)a1;
- (void)shareCurrentKeyWithId:(id)a0 completion:(id /* block */)a1;
- (void)publishCurrentLocationToStewieWithReason:(long long)a0 completion:(id /* block */)a1;

@end
