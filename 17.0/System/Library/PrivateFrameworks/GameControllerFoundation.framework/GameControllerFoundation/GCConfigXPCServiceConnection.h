@protocol GCConfigXPCServiceClientInterface;

@interface GCConfigXPCServiceConnection : GCIPCRemoteOutgoingConnection

@property (retain, nonatomic) id<GCConfigXPCServiceClientInterface> client;

- (id)init;
- (id)connectToService:(id)a0 withClient:(id)a1;

@end
