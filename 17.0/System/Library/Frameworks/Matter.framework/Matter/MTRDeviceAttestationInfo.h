@class NSData;

@interface MTRDeviceAttestationInfo : NSObject

@property (readonly, copy, nonatomic) NSData *challenge;
@property (readonly, copy, nonatomic) NSData *nonce;
@property (readonly, copy, nonatomic) NSData *elementsTLV;
@property (readonly, copy, nonatomic) NSData *elementsSignature;
@property (readonly, copy, nonatomic) NSData *deviceAttestationCertificate;
@property (readonly, copy, nonatomic) NSData *productAttestationIntermediateCertificate;
@property (readonly, copy, nonatomic) NSData *certificationDeclaration;
@property (readonly, copy, nonatomic) NSData *firmwareInfo;

- (void).cxx_destruct;
- (id)initWithDeviceAttestationChallenge:(id)a0 nonce:(id)a1 elementsTLV:(id)a2 elementsSignature:(id)a3 deviceAttestationCertificate:(id)a4 productAttestationIntermediateCertificate:(id)a5 certificationDeclaration:(id)a6 firmwareInfo:(id)a7;

@end
