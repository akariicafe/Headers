@class NSString, ACAccount, NSMutableDictionary;

@interface AMSUIPaymentVerificationProtocolHandler : AMSURLProtocolHandler <NSURLSessionDelegate, AMSURLProtocolDelegate>

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSMutableDictionary *accountParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_accountToUseFromGivenAccount:(id)a0 accountParameters:(id)a1 accountStore:(id)a2;
+ (void)_setHeaders:(id)a0 on:(id)a1;
+ (id)_headersFromAccount:(id)a0;
+ (id)headersFromAccount:(id)a0 accountParameters:(id)a1;
+ (id)_sessionWithBag:(id)a0 account:(id)a1 accountParameters:(id)a2;
+ (id)_encoderWithBag:(id)a0 account:(id)a1;
+ (id)_promiseToFetchURLResponseForAccount:(id)a0 accountParameters:(id)a1 url:(id)a2 bag:(id)a3 requestBody:(id)a4 bodyEncoding:(long long)a5 contentType:(id)a6;
+ (id)_headersFromAccountParameters:(id)a0;
+ (id)requestAddingHeaders:(id)a0 to:(id)a1;

@end
