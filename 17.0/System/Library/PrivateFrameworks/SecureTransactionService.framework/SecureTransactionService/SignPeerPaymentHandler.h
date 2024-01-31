@class NFPeerPaymentSession, STSSigningSession;

@interface SignPeerPaymentHandler : STSHandler {
    NFPeerPaymentSession *_nfPeerPaymentSession;
}

@property (readonly, weak, nonatomic) STSSigningSession *parent;

- (void).cxx_destruct;
- (id)initWithParent:(id)a0;
- (id)signPeerPayment:(id)a0 authorization:(id)a1 error:(id *)a2;
- (id)startNFSessionWithCompletion:(id /* block */)a0;
- (unsigned char)supportedCredentialType;

@end
