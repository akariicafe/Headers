@class NSString, NSURL;

@interface PKAccountWebServiceFinancingPlanFundingSourceActionRequest : PKPaymentRewrapRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *planIdentifier;
@property (nonatomic) unsigned long long intent;

- (void).cxx_destruct;
- (id)_murlRequestWithServiceURL:(id)a0 endpointComponents:(id)a1 queryParameters:(id)a2 appleAccountInformation:(id)a3;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 rewrapData:(id)a2 appleAccountInformation:(id)a3;

@end
