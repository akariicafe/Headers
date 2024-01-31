@class PKPaymentDeviceMetadata, NSString, PKPhysicalCardOrder, NSURL, NSData, PKApplePayTrustHashResponse;

@interface PKAccountWebServiceRequestPhysicalCardRequest : PKAccountWebServiceRequest <PKAccountWebServiceApplePayTrustProtocol, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *accountUserAltDSID;
@property (retain, nonatomic) PKPhysicalCardOrder *order;
@property (retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata;
@property (retain, nonatomic) PKApplePayTrustHashResponse *hashResponse;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSData *publicKeyHash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)endpointComponents;
- (id)manifestHashWithReferenceIdentifier:(id)a0;
- (Class)signatureResponseClass;

@end
