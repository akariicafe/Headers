@protocol CHHapticServerInterface;

@interface _GCHapticClientConnection : _GCIPCRemoteIncomingConnection

@property (retain, nonatomic) id<CHHapticServerInterface> server;

- (id)initWithConnection:(id)a0 fromProcess:(id)a1;

@end
