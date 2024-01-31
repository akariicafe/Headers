@class ACAccount;

@interface AAQuotaInfoRequest : AARequest {
    BOOL _isDetailedRequest;
}

@property (readonly, nonatomic) ACAccount *account;

+ (Class)responseClass;

- (id)urlString;
- (id)urlRequest;
- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (id)initDetailedRequestWithAccount:(id)a0;

@end
