@class NSString, NSMutableDictionary, GKDiscoveryBonjour, NSObject;
@protocol OS_dispatch_queue;

@interface GKDiscoveryManager : NSObject {
    NSObject<OS_dispatch_queue> *_peersQueue;
}

@property (copy, nonatomic) NSString *playerID;
@property (copy, nonatomic) NSString *deviceID;
@property (retain, nonatomic) NSMutableDictionary *peers;
@property (retain, nonatomic) GKDiscoveryBonjour *bonjour;
@property (copy, nonatomic) id /* block */ playerFoundHandler;
@property (copy, nonatomic) id /* block */ playerLostHandler;
@property (copy, nonatomic) id /* block */ receiveDataHandler;

+ (id)parseDeviceIDFromServiceName:(id)a0;

- (void)stopBrowsing;
- (void)stopAdvertising;
- (id)init;
- (void)dealloc;
- (id)initWithDomain:(id)a0 type:(id)a1;
- (void)forgetParticipant:(id)a0 deviceID:(id)a1;
- (void)sendDataToParticipant:(id)a0 deviceID:(id)a1 data:(id)a2 withCompletionHandler:(id /* block */)a3;
- (id)startAdvertisingLocalPlayer:(id)a0 discoveryInfo:(id)a1;
- (void)startBrowsingLocalPlayer:(id)a0;
- (id)localServiceName;
- (void)connectToSockAddr:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0 port:(unsigned short)a1 forPeer:(id)a2;
- (void)resolveForPeer:(id)a0;
- (void)addInterface:(unsigned int)a0 withDiscoveryInfo:(id)a1 forPeerWithServiceName:(id)a2;
- (void)cleanUpPeersForBrowse;
- (void)didLosePeer:(id)a0;
- (id)generateDeviceID;
- (void)passDataToGKLayer:(id)a0 fromPeer:(id)a1;
- (id)peersList;
- (void)processEvent:(int)a0 forPeer:(id)a1 withUserInfo:(id)a2;
- (void)removeInterface:(unsigned int)a0 forPeerWithServiceName:(id)a1;
- (id)serviceNameforDeviceID:(id)a0 playerID:(id)a1;

@end
