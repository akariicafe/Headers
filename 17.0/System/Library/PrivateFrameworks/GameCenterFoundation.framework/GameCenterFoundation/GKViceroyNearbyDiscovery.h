@class GKDiscovery;

@interface GKViceroyNearbyDiscovery : NSObject

@property (retain, nonatomic) GKDiscovery *discovery;

- (void)stopBrowsing;
- (void)stopAdvertising;
- (id)init;
- (void).cxx_destruct;
- (void)forgetParticipant:(id)a0 deviceID:(id)a1;
- (oneway void)sendDataToParticipant:(id)a0 deviceID:(id)a1 data:(id)a2 handler:(id /* block */)a3;
- (void)setupWithPlayerFoundHandler:(id /* block */)a0 playerLostHandler:(id /* block */)a1 receiveDataHandler:(id /* block */)a2;
- (id)startAdvertisingWithDiscoveryInfo:(id)a0;
- (void)startBrowsingWithPlayerID:(id)a0;

@end
