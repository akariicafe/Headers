@class NSMutableDictionary, PKDSPContext, CdQwUTvJnDEPQgR8;

@interface PKDeviceScorer : NSObject {
    CdQwUTvJnDEPQgR8 *_scorer;
    NSMutableDictionary *_scoreCompletions;
}

@property (nonatomic) double deviceScoreTimeout;
@property (readonly, copy, nonatomic) PKDSPContext *context;

+ (BOOL)deviceScoringSupported;

- (id)init;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)_createScorer;
- (void)_getScoreWithNonce:(id)a0 cryptogram:(id)a1 challengeResponse:(id)a2 completion:(id /* block */)a3;
- (void)deviceScoreWithCryptogram:(id)a0 challengeResponse:(id)a1 nonce:(id)a2 completion:(id /* block */)a3;
- (void)peerPaymentDeviceScoreWithCryptogram:(id)a0 challengeResponse:(id)a1 completion:(id /* block */)a2;

@end
