@protocol _GCAppClientInterface;

@interface _GCAppServerConnection : GCIPCRemoteOutgoingConnection

@property (retain, nonatomic) id<_GCAppClientInterface> client;

- (id)init;
- (id)initWithMachServiceName:(id)a0;

@end
