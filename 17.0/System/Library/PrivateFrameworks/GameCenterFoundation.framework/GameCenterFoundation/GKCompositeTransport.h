@class GKMultiplayerActivityReporter, NSData;
@protocol GKTransportProtocol, GKTransportClientDelegate;

@interface GKCompositeTransport : NSObject <GKTransportProtocol>

@property (retain, nonatomic) id<GKTransportClientDelegate> instrumentedClientDelegate;
@property (retain, nonatomic) id<GKTransportProtocol> viceroyTransport;
@property (retain, nonatomic) id<GKTransportProtocol> fastSyncTransport;
@property (retain, nonatomic) GKMultiplayerActivityReporter *reporter;
@property (readonly, nonatomic) NSData *nearbyConnectionData;

- (void).cxx_destruct;
- (void)acceptRelayResponse:(id)a0 playerID:(id)a1;
- (void)chooseBestHostingPlayerWithTransportContext:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)connectToGuestPlayer:(id)a0 withHostPlayer:(id)a1;
- (void)connectToNearbyPlayer:(id)a0 withConnectionData:(id)a1;
- (void)connectToPlayersWithTransportContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)disconnectAllWithTransportContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)enrichPeerDictionariesForPlayersConnection:(id)a0;
- (void)handleRelayPushData:(id)a0 onlyIfPreemptive:(BOOL)a1;
- (id)initWithClientDelegate:(id)a0 transportSupport:(id)a1 reporter:(id)a2 transportContext:(id)a3;
- (void)localConnectionDataWithCompletionHandler:(id /* block */)a0;
- (void)preemptRelay:(id)a0;
- (BOOL)sendScopedData:(id)a0 toPlayers:(id)a1 dataMode:(long long)a2 dataScope:(long long)a3 transportContext:(id)a4 error:(id *)a5;
- (BOOL)sendScopedDataToAll:(id)a0 dataMode:(long long)a1 dataScope:(long long)a2 transportContext:(id)a3 error:(id *)a4;
- (id)transportForContext:(id)a0;
- (id)voiceChatWithName:(id)a0 players:(id)a1 transportContext:(id)a2;

@end
