@class NSString, NSURL, PKPaymentTransaction;

@interface PKAccountWebServiceSupportTopicsRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) PKPaymentTransaction *transaction;

- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void).cxx_destruct;

@end
