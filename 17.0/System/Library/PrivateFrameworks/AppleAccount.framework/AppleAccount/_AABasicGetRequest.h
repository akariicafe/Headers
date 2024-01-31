@class ACAccount;

@interface _AABasicGetRequest : AARequest {
    ACAccount *_account;
}

- (id)urlRequest;
- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;

@end
