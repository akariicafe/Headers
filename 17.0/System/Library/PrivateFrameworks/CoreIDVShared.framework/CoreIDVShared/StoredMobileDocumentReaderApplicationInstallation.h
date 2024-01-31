@class NSString, NSUUID, StoredMobileDocumentReaderAttestationCertificate, NSSet;

@interface StoredMobileDocumentReaderApplicationInstallation : NSManagedObject

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, copy) NSUUID *installationIdentifier;
@property (nonatomic, retain) StoredMobileDocumentReaderAttestationCertificate *attestationCertificate;
@property (nonatomic, retain) NSSet *authenticationCertificates;
@property (nonatomic, retain) NSSet *signingKeys;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
