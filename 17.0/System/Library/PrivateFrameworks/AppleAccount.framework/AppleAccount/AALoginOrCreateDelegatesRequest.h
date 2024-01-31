@class NSDictionary, ACAccount, AASigningSession;

@interface AALoginOrCreateDelegatesRequest : AARequest {
    ACAccount *_account;
    NSDictionary *_parameters;
    AASigningSession *_signingSession;
}

+ (Class)responseClass;

- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 parameters:(id)a1 signingSession:(id)a2;

@end
