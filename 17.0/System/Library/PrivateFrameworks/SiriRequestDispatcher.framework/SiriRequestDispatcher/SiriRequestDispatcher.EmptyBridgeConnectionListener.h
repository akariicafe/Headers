@interface SiriRequestDispatcher.EmptyBridgeConnectionListener : AFBridgeConnectionListener

- (id)init;
- (id)initWithBridgeName:(id)a0 machService:(id)a1 withServiceInterface:(id)a2 withDelegateInterface:(id)a3;
- (void)notifyClientWithBlock:(id /* block */)a0;
- (void)resumeConnectionWithBridgeProxy:(id)a0;

@end
