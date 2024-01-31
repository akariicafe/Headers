@class NSString, NSURL;

@interface PKAccountWebServiceBankLookupRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *query;
@property (retain, nonatomic) NSURL *baseURL;

- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void).cxx_destruct;

@end
