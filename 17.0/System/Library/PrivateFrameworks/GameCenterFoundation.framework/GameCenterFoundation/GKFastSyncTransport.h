@class GKTransportContext, NSString, NSData, NSError;

@interface GKFastSyncTransport : NSObject <GKTransportProtocol> {
    void /* unknown type, empty encoding */ clientDelegate;
    void /* unknown type, empty encoding */ _lobbyChannel;
    void /* unknown type, empty encoding */ _gameChannel;
    void /* unknown type, empty encoding */ reporter;
    void /* unknown type, empty encoding */ gameChannelMigrationTask;
    void /* unknown type, empty encoding */ lobbyChannelMigrationTask;
    void /* unknown type, empty encoding */ newChannelObservationTask;
    void /* unknown type, empty encoding */ _localParticipantHandle;
}

@property (nonatomic, readonly) NSData *nearbyConnectionData;

- (void)acceptRelayResponse:(id)a0 playerID:(id)a1;
- (BOOL)connectToGuestPlayer:(id)a0 withHostPlayer:(id)a1;
- (void)connectToNearbyPlayer:(id)a0 withConnectionData:(id)a1;
- (id)enrichPeerDictionariesForPlayersConnection:(id)a0;
- (void)handleRelayPushData:(id)a0 onlyIfPreemptive:(BOOL)a1;
- (void)localConnectionDataWithCompletionHandler:(void (^)(NSData *, NSError *))a0;
- (void)preemptRelay:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)chooseBestHostingPlayerWithTransportContext:(GKTransportContext *)a0 completionHandler:(void (^)(NSString *))a1;
- (void)connectToPlayersWithTransportContext:(GKTransportContext *)a0 completionHandler:(void (^)(NSError *))a1;
- (void)disconnectAllWithTransportContext:(GKTransportContext *)a0 completionHandler:(void (^)(NSError *))a1;
- (id)initWithClientDelegate:(id)a0 reporter:(id)a1;
- (BOOL)sendScopedData:(id)a0 toPlayers:(id)a1 dataMode:(long long)a2 dataScope:(long long)a3 transportContext:(id)a4 error:(id *)a5;
- (BOOL)sendScopedDataToAll:(id)a0 dataMode:(long long)a1 dataScope:(long long)a2 transportContext:(id)a3 error:(id *)a4;
- (id)voiceChatWithName:(id)a0 players:(id)a1 transportContext:(id)a2;

@end
