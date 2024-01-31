@class ACAccount;

@interface AAFMIPAuthenticateRequest : AARequest {
    ACAccount *_account;
}

+ (Class)responseClass;

- (id)urlString;
- (id)urlRequest;
- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;

@end
