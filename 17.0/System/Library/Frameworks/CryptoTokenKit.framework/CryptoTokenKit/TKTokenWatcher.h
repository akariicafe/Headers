@class NSXPCListenerEndpoint, TKClientToken, NSArray, NSXPCConnection, NSMutableDictionary;

@interface TKTokenWatcher : NSObject <TKProtocolTokenWatcherHost> {
    int _notifyToken;
    NSXPCConnection *_connection;
    NSMutableDictionary *_tokenInfos;
    NSMutableDictionary *_removalHandlers;
    id /* block */ _insertionHandler;
}

@property (readonly, nonatomic) TKClientToken *client;
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) NSArray *tokenIDs;

- (id)initWithClient:(id)a0;
- (id)init;
- (void)dealloc;
- (id)initWithEndpoint:(id)a0;
- (void)startWatching;
- (void).cxx_destruct;
- (void)removeAllTokens;
- (void)addRemovalHandler:(id /* block */)a0 forTokenID:(id)a1;
- (id)initWithInsertionHandler:(id /* block */)a0;
- (void)insertedToken:(id)a0;
- (void)removedToken:(id)a0;
- (void)setInsertionHandler:(id /* block */)a0;
- (id)tokenInfoForTokenID:(id)a0;

@end
