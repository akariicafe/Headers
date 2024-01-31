@class NSURL, NSData, PKSubcredentialEncryptedContainer;

@interface PKPaymentRegisterCredentialResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) NSURL *passURL;
@property (readonly, nonatomic) NSData *credentialAttestation;
@property (readonly, nonatomic) PKSubcredentialEncryptedContainer *vehicleMobilizationEncryptedContainer;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
