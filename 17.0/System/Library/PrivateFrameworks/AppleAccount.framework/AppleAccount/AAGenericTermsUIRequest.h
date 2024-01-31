@class NSDictionary, ACAccount;

@interface AAGenericTermsUIRequest : AARequest

@property (readonly, nonatomic) NSDictionary *requestDictionary;
@property (readonly, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSDictionary *additionalHeaders;
@property (nonatomic) BOOL preferPassword;

+ (Class)responseClass;

- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithParameters:(id)a0;
- (id)_requestParamsForTermsEntries:(id)a0;
- (id)initWithAccount:(id)a0 parameters:(id)a1;
- (id)initWithAccount:(id)a0 parameters:(id)a1 preferPassword:(BOOL)a2;
- (id)initWithAccount:(id)a0 termsEntries:(id)a1;
- (id)initWithTermsEntries:(id)a0;

@end
