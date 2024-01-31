@class NSString, NSURL;

@interface PKAccountWebServiceFinancingPlansPaginatedRequest : PKAccountWebServicePaginatedRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;

- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void).cxx_destruct;

@end
