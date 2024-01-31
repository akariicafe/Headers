@class NSDictionary, AASigningSession, ACAccount;

@interface AASetupAssistantCreateRequest : AARequest {
    NSDictionary *appleIDParameters;
    AASigningSession *signingSession;
    ACAccount *_account;
}

+ (Class)responseClass;

- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)bodyDictionary;
- (id)initWithAccount:(id)a0 withAppleIDParameters:(id)a1 signingSession:(id)a2;

@end
