@class NSData, StoredMobileDocumentReaderApplicationInstallation, NSSet;

@interface StoredMobileDocumentReaderSigningKey : NSManagedObject

@property (nonatomic, copy) NSData *keyBlob;
@property (nonatomic, retain) StoredMobileDocumentReaderApplicationInstallation *applicationInstallation;
@property (nonatomic, retain) NSSet *attestationCertificates;
@property (nonatomic, retain) NSSet *authenticationCertificates;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
