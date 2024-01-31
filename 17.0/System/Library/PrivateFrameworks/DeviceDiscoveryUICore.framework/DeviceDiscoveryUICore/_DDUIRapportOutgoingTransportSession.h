@class NSString, RPCompanionLinkClient;
@protocol DDUIDevice;

@interface _DDUIRapportOutgoingTransportSession : NSObject <DDUIEndpointPairingTransportSession>

@property (retain, nonatomic) RPCompanionLinkClient *client;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (retain, nonatomic) NSString *sessionID;
@property (copy, nonatomic) id /* block */ messageHandler;
@property (readonly, nonatomic) id<DDUIDevice> remoteDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithServiceIdentifier:(id)a0;
- (void)activateWithErrorHandler:(id /* block */)a0 messageHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)generateNetworkEndpointIdentifierForRemoteDevice:(id)a0 withCompletion:(id /* block */)a1;
- (void)handleIncomingMessage:(id)a0 withMessageID:(id)a1;
- (void)sendMessage:(id)a0 withCompletion:(id /* block */)a1;
- (void)sendMessage:(id)a0 withTimeout:(double)a1 completion:(id /* block */)a2;

@end
