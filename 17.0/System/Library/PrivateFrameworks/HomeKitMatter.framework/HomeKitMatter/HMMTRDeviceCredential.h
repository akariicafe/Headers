@class NSData;

@interface HMMTRDeviceCredential : NSObject

@property (readonly, nonatomic) NSData *certificationDeclaration;
@property (readonly, nonatomic) NSData *deviceAttestationCertificate;
@property (readonly, nonatomic) NSData *productAttestationIntermediateCertificate;

- (void).cxx_destruct;
- (id)initWithCertificationDeclaration:(id)a0 deviceAttestationCertificate:(id)a1 productAttestationIntermediateCertificate:(id)a2;

@end
