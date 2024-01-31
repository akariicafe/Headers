@class NSData, StoredMobileDocumentReaderApplicationInstallation, StoredMobileDocumentReaderSigningKey;

@interface StoredMobileDocumentReaderAttestationCertificate : NSManagedObject

@property (nonatomic, copy) NSData *certificateData;
@property (nonatomic, retain) StoredMobileDocumentReaderApplicationInstallation *applicationInstallation;
@property (nonatomic, retain) StoredMobileDocumentReaderSigningKey *signingKey;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
