@class NSDictionary;

@interface PKPaymentVehicleManufacturerRequest : PKPaymentWebServiceRequest {
    NSDictionary *_encryptedVehicleDataRequest;
    NSDictionary *_metadata;
}

+ (id)requestMetadataWithPartnerIdentifier:(id)a0 brandIdentifier:(id)a1;

- (id)requestBody;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (id)initWithInvitation:(id)a0 encryptedVehicleDataRequest:(id)a1;
- (id)initWithPartnerIdentifier:(id)a0 brandIdentifier:(id)a1 encryptedVehicleDataRequest:(id)a2;

@end
