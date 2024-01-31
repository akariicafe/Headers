@class NSXPCListenerEndpoint, NSNumber, NSXPCConnection;

@interface TKExtensionClientToken : TKClientToken {
    NSXPCListenerEndpoint *_serverEndpoint;
    NSXPCConnection *_serverConnection;
    BOOL _namedConnection;
    NSNumber *_targetUID;
    long long _connectionIdentifier;
}

@property (readonly, nonatomic) NSXPCConnection *serverConnection;
@property (readonly, nonatomic) NSXPCConnection *tokenConnection;

+ (id)builtinTokenIDs;

- (void)dealloc;
- (BOOL)ensureConnectionWithError:(id *)a0;
- (id)configurationEndpoint;
- (id)watcherEndpoint;
- (id)withError:(id *)a0 invoke:(id /* block */)a1;
- (void).cxx_destruct;
- (id)SEPKeyEndpoint;
- (id)endpoint;
- (id)initWithTokenID:(id)a0 serverEndpoint:(id)a1 targetUID:(id)a2;

@end
