@class NSArray, NSMutableDictionary;

@interface MRNowPlayingOriginClientManager : NSObject <MRNowPlayingClientState> {
    NSMutableDictionary *_originClients;
    NSMutableDictionary *_originClientRequests;
    id /* block */ _createPlayerCallback;
    id /* block */ _destroyPlayerCallback;
    id /* block */ _generatePlayerIDCallback;
    NSMutableDictionary *_activeSystemEndpointUIDs;
    NSMutableDictionary *_activeSystemEndpointUIDCompletions;
    NSMutableDictionary *_resolveActiveSystemEndpointCompletions;
}

@property (copy, nonatomic) id /* block */ createNewPlayerCallback;
@property (copy, nonatomic) id /* block */ destroyPlayerCallback;
@property (copy, nonatomic) id /* block */ generatePlayerIDCallback;
@property (readonly, nonatomic) NSArray *originClients;
@property (readonly, nonatomic) NSArray *originClientRequets;

+ (id)sharedManager;

- (id)init;
- (id)existingOriginClientRequestsForPlayerPath:(id)a0;
- (void)restoreNowPlayingClientState;
- (void)removeOriginRequests:(id)a0;
- (id)playerClientRequestsForPlayerPath:(id)a0;
- (void)removeOrigin:(id)a0;
- (id)createCustomOriginClientForOrigin:(id)a0;
- (void)updateActiveSystemEndpointOutputDeviceUID:(id)a0 forType:(long long)a1;
- (id)originClientRequestsForPlayerPath:(id)a0;
- (void)handleActiveSystemEndpointOutputDeviceUIDForType:(long long)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)resolveActiveSystemEndpointWithType:(long long)a0 timeout:(double)a1 queue:(id)a2 completion:(id /* block */)a3;
- (id)playerClientForPlayerPath:(id)a0;
- (void).cxx_destruct;
- (id)originClientForOrigin:(id)a0;
- (id)debugDescription;
- (id)clientForPlayerPath:(id)a0;
- (id)originClientForPlayerPath:(id)a0;
- (void)clearActiveSystemEndpoints;
- (id)activeSystemEndpointOutputDeviceUIDForType:(long long)a0;
- (id)existingClientRequestsForPlayerPath:(id)a0;
- (id)clientRequestsForPlayerPath:(id)a0;
- (id)existingPlayerClientRequestsForPlayerPath:(id)a0;
- (id)localOriginClient;

@end
