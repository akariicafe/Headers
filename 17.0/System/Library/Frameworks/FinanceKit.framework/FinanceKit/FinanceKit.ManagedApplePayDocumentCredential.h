@class NSUUID, NSString, NSData, NSDate;

@interface FinanceKit.ManagedApplePayDocumentCredential : NSManagedObject {
    void /* unknown type, empty encoding */ symmetricKeyKey;
}

@property (nonatomic, copy) NSUUID *credentialIdentifier;
@property (nonatomic, copy) NSString *primaryAccountIdentifier;
@property (nonatomic, copy) NSString *deviceAccountIdentifier;
@property (nonatomic, copy) NSData *primitiveSymmetricKey;
@property (nonatomic, copy) NSDate *creationDate;

- (void)awakeFromInsert;
- (void).cxx_construct;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (void).cxx_destruct;

@end
