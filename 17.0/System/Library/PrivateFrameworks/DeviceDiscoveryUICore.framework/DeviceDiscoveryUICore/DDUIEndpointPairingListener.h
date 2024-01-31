@protocol DDUIEndpointPairingListeningTransport;

@interface DDUIEndpointPairingListener : NSObject

@property (retain, nonatomic) id<DDUIEndpointPairingListeningTransport> transport;

- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithTransport:(id)a0;
- (void)beginListeningWithErrorHandler:(id /* block */)a0 pairingHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)checkIfUserNeedsReconfirmationForSession:(id)a0 withServiceIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)createListenerMappingForSession:(id)a0 withServiceIdentifier:(id)a1 completion:(id /* block */)a2;

@end
