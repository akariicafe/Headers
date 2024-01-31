@class NSOperationQueue, POWSTrustProcess, NSString;

@interface POAuthenticationProcess : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate>

@property (retain, nonatomic) POWSTrustProcess *wstrustProcess;
@property (readonly) NSOperationQueue *completionQueue;
@property (nonatomic) BOOL waitForConnectivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 taskIsWaitingForConnectivity:(id)a1;
- (id)init;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)createKeyRequestJWTWithContext:(id)a0;
- (void)_performDynamicWSTrustPasswordLoginWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_performEmbeddedAssertionLoginUsingContext:(id)a0 completion:(id /* block */)a1;
- (void)_performEncryptedPasswordLoginUsingContext:(id)a0 completion:(id /* block */)a1;
- (void)_performPasswordLoginUsingContext:(id)a0 completion:(id /* block */)a1;
- (void)_performWSTrustPasswordLoginWithContext:(id)a0 completion:(id /* block */)a1;
- (id)createAuthenticationContextUsingLoginConfiguration:(id)a0 deviceConfiguration:(id)a1 userName:(id)a2;
- (id)createEmbeddedAssertionWithContext:(id)a0;
- (id)createEmbeddedPasswordAssertionWithContext:(id)a0;
- (id)createKeyExchangeRequestJWTWithContext:(id)a0 otherPartyPublicKey:(id)a1;
- (id)createKeyExchangeRequestWithContext:(id)a0 jwt:(id)a1;
- (id)createKeyRequestWithContext:(id)a0 jwt:(id)a1;
- (id)createLoginJWTWithContext:(id)a0 embeddedAssertion:(id)a1;
- (id)createLoginRequestWithContext:(id)a0 jwt:(id)a1;
- (id)createNonceRequestWithContext:(id)a0;
- (id)createPartyVInfoWithNonce:(id)a0 apvKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1;
- (id)createPartyVInfoWithNonce:(id)a0 prefixData:(id)a1 apvPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a2;
- (id)createPreAuthenticationRequestWithContext:(id)a0;
- (id)createRefreshJWTWithContext:(id)a0;
- (id)createTestMessagesForLoginConfiguration:(id)a0 certificate:(struct __SecCertificate { } *)a1;
- (id)createWSTrust13RequestWithContext:(id)a0;
- (id)createWSTrust2005RequestWithContext:(id)a0;
- (id)createWSTrustMexRequestWithContext:(id)a0;
- (void)extractGroupsAndSubUsingAuthorizationWithContext:(id)a0 tokens:(id)a1 returningGroups:(id *)a2 identifier:(id *)a3 refreshToken:(id *)a4;
- (id)findAlgorithmForKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)findKey:(id)a0 inJWKSData:(id)a1 rootCertificates:(id)a2;
- (void)performKeyExchangeRequestUsingContext:(id)a0 otherPartyPublicKeyData:(id)a1 completion:(id /* block */)a2;
- (void)performKeyExchangeRequestWithContext:(id)a0 request:(id)a1 completion:(id /* block */)a2;
- (void)performKeyRequestUsingContext:(id)a0 completion:(id /* block */)a1;
- (void)performKeyRequestWithContext:(id)a0 request:(id)a1 completion:(id /* block */)a2;
- (void)performLoginRequestWithContext:(id)a0 request:(id)a1 completion:(id /* block */)a2;
- (void)performLoginWithContext:(id)a0 loginJWT:(id)a1 completion:(id /* block */)a2;
- (void)performNonceRequestWithContext:(id)a0 request:(id)a1 completion:(id /* block */)a2;
- (void)performPasswordLoginUsingContext:(id)a0 completion:(id /* block */)a1;
- (void)performPreAuthenticationRequestWithContext:(id)a0 request:(id)a1 completion:(id /* block */)a2;
- (void)performSEPKeyLoginUsingContext:(id)a0 completion:(id /* block */)a1;
- (void)performSmartCardLoginUsingContext:(id)a0 completion:(id /* block */)a1;
- (void)performTokenRefreshUsingContext:(id)a0 completion:(id /* block */)a1;
- (void)performWSTrustAuthenticationRequestWithContext:(id)a0 request:(id)a1 completion:(id /* block */)a2;
- (void)performWSTrustMexRequestWithContext:(id)a0 request:(id)a1 completion:(id /* block */)a2;
- (void)retrieveSigningKeyWithContext:(id)a0 keyId:(id)a1 completion:(id /* block */)a2;
- (BOOL)validateIdToken:(id)a0 context:(id)a1 key:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a2;
- (BOOL)validatePartyUInfo:(id)a0 context:(id)a1;
- (BOOL)validatePartyVInfo:(id)a0 context:(id)a1 publicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a2;
- (unsigned long long)validateWSTrustAuthenticationResponseWithContext:(id)a0 response:(id)a1 returningAssertion:(id *)a2;
- (BOOL)validateWSTrustMexResponseWithContext:(id)a0 response:(id)a1;

@end
