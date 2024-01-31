@interface ECDKIMVerifier : NSObject

- (id)verificationContextForMessageData:(id)a0 error:(id *)a1;
- (BOOL)verifyMessageWithContext:(id)a0 options:(long long)a1 error:(out id *)a2;
- (id)_base64HashBodyData:(id)a0 usingSignature:(id)a1;
- (id)_relaxedCanonicalizationForHeaderName:(id)a0 headerBody:(id)a1;
- (void)canonicalizeBodyDataUsingRelaxedAlgorithm:(id)a0;
- (void)canonicalizeBodyDataUsingSimpleAlgorithm:(id)a0;
- (id)canonicalizeHeaders:(id)a0 usingRelaxedAlgorithmWithSignatureHeader:(id)a1;
- (id)canonicalizeHeaders:(id)a0 usingSimpleAlgorithmWithSignatureHeader:(id)a1;
- (BOOL)verifyMessageBodyData:(id)a0 withContext:(id)a1 usingSignature:(id)a2;
- (BOOL)verifyMessageData:(id)a0;
- (BOOL)verifyMessageData:(id)a0 publicKeySource:(id)a1 options:(long long)a2;
- (BOOL)verifyMessageHeaders:(id)a0 usingSignature:(id)a1 publicKeySource:(id)a2 error:(out id *)a3;
- (BOOL)verifyMessageWithContext:(id)a0 publicKeySource:(id)a1 options:(long long)a2 error:(out id *)a3;

@end
