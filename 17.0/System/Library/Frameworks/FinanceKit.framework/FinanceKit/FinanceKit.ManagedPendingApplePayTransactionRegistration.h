@class NSString, NSData, NSDate, NSNumber;

@interface FinanceKit.ManagedPendingApplePayTransactionRegistration : NSManagedObject {
    void /* unknown type, empty encoding */ transactionIdentifierKey;
    void /* unknown type, empty encoding */ transactionSourceKey;
    void /* unknown type, empty encoding */ privateKeyKey;
}

@property (nonatomic, retain) NSNumber *primitiveTransactionSource;
@property (nonatomic, copy) NSDate *transactionDate;
@property (nonatomic, copy) NSString *primaryAccountIdentifier;
@property (nonatomic, copy) NSString *deviceAccountIdentifier;
@property (nonatomic, copy) NSData *primitivePrivateKey;
@property (nonatomic) long long registrationAttemptCount;
@property (nonatomic, copy) NSDate *lastRegistrationAttemptDate;
@property (nonatomic, copy) NSDate *creationDate;

- (void)awakeFromInsert;
- (void).cxx_construct;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (void).cxx_destruct;

@end
