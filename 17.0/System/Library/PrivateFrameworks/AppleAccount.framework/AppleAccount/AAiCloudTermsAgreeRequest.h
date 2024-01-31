@class NSDictionary, ACAccount, NSNumber;

@interface AAiCloudTermsAgreeRequest : AARequest

@property (retain, nonatomic) ACAccount *account;
@property (nonatomic) BOOL preferPassword;
@property (retain, nonatomic) NSDictionary *additionalHeaders;
@property (retain, nonatomic) NSNumber *slaVersion;

+ (Class)responseClass;

- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithURLString:(id)a0 account:(id)a1;
- (void)performRequestWithHandler:(id /* block */)a0;

@end
