@class NSString, NSURL, NSDictionary;

@interface PKAccountWebServiceAccountTransactionAnswerRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *accountUserAltDSID;
@property (copy, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *transactionIdentifier;
@property (copy, nonatomic) NSDictionary *answers;

- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void).cxx_destruct;

@end
