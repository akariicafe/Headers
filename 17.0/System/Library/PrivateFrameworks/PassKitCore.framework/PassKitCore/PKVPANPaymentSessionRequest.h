@class NSString;

@interface PKVPANPaymentSessionRequest : PKPaymentWebServiceRequest

@property (readonly, copy, nonatomic) NSString *deviceIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;
- (id)initWithDeviceIdentifier:(id)a0;

@end
