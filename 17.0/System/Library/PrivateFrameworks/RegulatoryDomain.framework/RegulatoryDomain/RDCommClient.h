@class NSXPCConnection;
@protocol RDXPCProtocol;

@interface RDCommClient : NSObject <RDXPCProtocol> {
    NSXPCConnection *connection;
    id<RDXPCProtocol> server;
}

- (void)ping;
- (id)init;
- (void)clearDataCache;
- (void)updatePeer:(id)a0 withEstimate:(id)a1;
- (void)shareStatusWithPeers;
- (void)createCacheDirAtPath:(id)a0;
- (void)update:(long long)a0 withListOfCountryCodes:(id)a1;
- (void).cxx_destruct;
- (void)updatePeer:(id)a0 withCountryCode:(id)a1 priority:(int)a2 andTimestamp:(id)a3;
- (void)clearStatusSharedWithPeers;
- (void)update:(long long)a0 withCountryCode:(id)a1;

@end
