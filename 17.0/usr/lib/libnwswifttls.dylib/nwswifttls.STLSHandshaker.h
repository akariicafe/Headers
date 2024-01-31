@interface nwswifttls.STLSHandshaker : NSObject {
    void /* unknown type, empty encoding */ stateMachine;
    void /* unknown type, empty encoding */ partialHandshakeResult;
    void /* unknown type, empty encoding */ receivedSessionTickets;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)hasSessionState;
- (id)getSessionState;
- (id)getClientRandom;
- (id)continueHandshake:(id)a0;
- (BOOL)getEarlyDataAccepted;
- (long long)getEncryptionLevel;
- (id)getEncryptionSecretWithWrite:(BOOL)a0;
- (long long)getNegotiatedCiphersuite;
- (id)getPeerQUICTransportParameters;
- (id)init:(id)a0 serverName:(id)a1 quicTransportParameters:(id)a2 alpn:(id)a3 sessionState:(id)a4 ticketRequest:(id)a5;
- (long long)isImplemented;
- (id)startHandshake;
- (id)validateAuthenticatorWithAuthenticator:(id)a0 context:(id)a1 keyParser:(id /* block */)a2;

@end
