@class NSArray, NSString, NSData, StoredMobileDocumentReaderSigningKey, StoredMobileDocumentReaderApplicationInstallation;

@interface StoredMobileDocumentReaderAuthenticationCertificate : NSManagedObject

@property (nonatomic, copy) NSArray *certificateChain;
@property (nonatomic, copy) NSData *merchantLogo;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (nonatomic, retain) StoredMobileDocumentReaderApplicationInstallation *applicationInstallation;
@property (nonatomic, retain) StoredMobileDocumentReaderSigningKey *signingKey;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
