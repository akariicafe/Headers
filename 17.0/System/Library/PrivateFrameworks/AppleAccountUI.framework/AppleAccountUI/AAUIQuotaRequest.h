@class ACAccount;

@interface AAUIQuotaRequest : AARequest {
    ACAccount *_account;
    BOOL _isDetailedRequest;
}

+ (Class)responseClass;

- (id)urlString;
- (id)urlRequest;
- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (id)initDetailedRequestWithAccount:(id)a0;

@end
