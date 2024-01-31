@class NSString, NFDigitalCarKeySession;

@interface DigitalCarKeyHandler : STSTransactionHandler <NFDigitalCarKeySessionDelegate, NFDigitalCarKeySessionPassthroughDelegate> {
    NFDigitalCarKeySession *_nfSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)session:(id)a0 didEndTransaction:(id)a1;
- (id)stopTransaction;
- (void)session:(id)a0 didEnterFieldWithNotification:(id)a1;
- (void)session:(id)a0 didExpireTransactionForApplet:(id)a1;
- (void)session:(id)a0 didExpressModeStateChange:(unsigned int)a1 withObject:(id)a2;
- (void)session:(id)a0 didStartTransaction:(id)a1;
- (void)session:(id)a0 event:(id)a1;
- (void)sessionDidExitField:(id)a0;
- (void)sessionDidFailDeferredAuthorization:(id)a0;
- (void)sessionDidReceiveActivityTimeout:(id)a0 result:(id)a1;
- (id)setActiveCredential:(id)a0;
- (id)startTransactionWithAuthorization:(id)a0 options:(unsigned long long)a1;
- (void)session:(id)a0 didReceivePassthroughMessage:(id)a1;
- (id)startNFSessionWithCompletion:(id /* block */)a0;
- (unsigned char)supportedCredentialType;

@end
