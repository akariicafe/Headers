@class NSUUID, NSString, NSData, NSDate;

@interface FinanceKit.ManagedDropboxApplePayOrder : NSManagedObject {
    void /* unknown type, empty encoding */ encryptionSchemeKey;
    void /* unknown type, empty encoding */ ephemeralPublicKeyKey;
}

@property (nonatomic) short ckSchemaVersion;
@property (nonatomic, copy) NSUUID *credentialIdentifier;
@property (nonatomic, copy) NSData *transactionInfo;
@property (nonatomic, copy) NSString *primitiveEncryptionScheme;
@property (nonatomic, copy) NSData *primitiveEphemeralPublicKey;
@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSDate *creationDate;

- (void).cxx_construct;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (void).cxx_destruct;

@end
