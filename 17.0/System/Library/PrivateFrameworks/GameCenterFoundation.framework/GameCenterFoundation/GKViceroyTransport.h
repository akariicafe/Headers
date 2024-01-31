@class NSString, GKViceroyLeaderElector, NSMutableDictionary, GKConnection, NSData, GKViceroyRelay, GKViceroySession;
@protocol GKTransportClientDelegate;

@interface GKViceroyTransport : NSObject <GKSessionPrivateDelegate, GKTransportProtocol>

@property (weak, nonatomic) id<GKTransportClientDelegate> clientDelegate;
@property (retain, nonatomic) GKConnection *connection;
@property (retain, nonatomic) NSMutableDictionary *guestConnections;
@property (retain, nonatomic) NSMutableDictionary *guestSessions;
@property (retain, nonatomic) GKViceroyLeaderElector *leaderElector;
@property (retain, nonatomic) GKViceroyRelay *relay;
@property (retain, nonatomic) NSData *selfBlob;
@property (retain, nonatomic) GKViceroySession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSData *nearbyConnectionData;

- (void)dealloc;
- (void)session:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)session:(id)a0 peer:(id)a1 didChangeState:(int)a2;
- (void)acceptRelayResponse:(id)a0 playerID:(id)a1;
- (void)chooseBestHostingPlayerWithTransportContext:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)connectToGuestPlayer:(id)a0 withHostPlayer:(id)a1;
- (void)connectToNearbyPlayer:(id)a0 withConnectionData:(id)a1;
- (void)connectToPlayersWithTransportContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)disconnectAllWithTransportContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)enrichPeerDictionariesForPlayersConnection:(id)a0;
- (void)handleRelayPushData:(id)a0 onlyIfPreemptive:(BOOL)a1;
- (void)initSessionIfNeeded;
- (id)initWithClientDelegate:(id)a0 transportSupport:(id)a1;
- (void)localConnectionDataWithCompletionHandler:(id /* block */)a0;
- (id)peerIdFromPlayer:(id)a0;
- (id)playerIDFromPeerID:(id)a0;
- (id)playerIDFromSession:(id)a0;
- (void)preemptRelay:(id)a0;
- (void)receiveData:(id)a0 fromPeer:(id)a1 inSession:(id)a2 context:(void *)a3;
- (BOOL)sendScopedData:(id)a0 toPlayers:(id)a1 dataMode:(long long)a2 dataScope:(long long)a3 transportContext:(id)a4 error:(id *)a5;
- (BOOL)sendScopedDataToAll:(id)a0 dataMode:(long long)a1 dataScope:(long long)a2 transportContext:(id)a3 error:(id *)a4;
- (void)session:(id)a0 connectionWithPeerFailed:(id)a1 withError:(id)a2;
- (void)session:(id)a0 initiateRelay:(id)a1 forPeer:(id)a2;
- (void)session:(id)a0 networkStatisticsChanged:(id)a1;
- (void)session:(id)a0 updateRelay:(id)a1 forPeer:(id)a2;
- (id)voiceChatWithName:(id)a0 players:(id)a1 transportContext:(id)a2;

@end
