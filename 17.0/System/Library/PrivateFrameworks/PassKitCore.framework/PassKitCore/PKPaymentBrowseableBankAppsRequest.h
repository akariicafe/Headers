@class NSString;

@interface PKPaymentBrowseableBankAppsRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *region;

- (void).cxx_destruct;
- (id)initWithRegion:(id)a0;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;

@end
