@class NSString, NSArray;

@interface PKPaymentInitiateExternalProvisioningRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *cardIdentifier;
@property (copy, nonatomic) NSArray *externalDestinationDevices;
@property (retain, nonatomic) NSString *region;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;

@end
