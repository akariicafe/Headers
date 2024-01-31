@protocol GCConfigXPCServiceInterface;

@interface GCConfigXPCServiceClientConnection : GCIPCRemoteIncomingConnection

@property (retain, nonatomic) id<GCConfigXPCServiceInterface> server;

- (id)initWithConnection:(id)a0;

@end
