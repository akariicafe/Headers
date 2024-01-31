@class NSData;

@interface PKAppletSubcredentialAccountAttestationRequest : PKAccountAttestationRequest

@property (copy, nonatomic) NSData *subCASEResidencyAttestation;
@property (copy, nonatomic) NSData *sharingTokenHash;

- (void).cxx_destruct;
- (id)initWithRequestData:(id)a0;

@end
