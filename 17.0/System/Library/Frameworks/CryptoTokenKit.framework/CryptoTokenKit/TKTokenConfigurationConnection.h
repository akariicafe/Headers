@class NSXPCListenerEndpoint, NSHashTable, NSXPCConnection;

@interface TKTokenConfigurationConnection : NSObject {
    NSXPCConnection *_connection;
    NSXPCListenerEndpoint *_endpoint;
    NSHashTable *_configurationConnections;
}

- (void)dealloc;
- (id)initWithEndpoint:(id)a0;
- (void).cxx_destruct;
- (void)registerForConfigurationChange:(id)a0;
- (id)configurationProtocol;
- (void)tokenConfigurationChanged:(id)a0;

@end
