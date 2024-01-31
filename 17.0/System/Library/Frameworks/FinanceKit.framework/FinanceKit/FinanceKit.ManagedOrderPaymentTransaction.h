@class NSDecimalNumber, NSString, _TtC10FinanceKit15LocalizedString, NSDate, NSNumber;

@interface FinanceKit.ManagedOrderPaymentTransaction : NSManagedObject {
    void /* unknown type, empty encoding */ transactionTypeKey;
    void /* unknown type, empty encoding */ statusKey;
    void /* unknown type, empty encoding */ amountKey;
    void /* unknown type, empty encoding */ currencyCodeKey;
}

@property (nonatomic, retain) NSNumber *primitiveTransactionType;
@property (nonatomic, retain) NSNumber *primitiveStatus;
@property (nonatomic, retain) NSDecimalNumber *primitiveAmount;
@property (nonatomic, copy) NSString *primitiveCurrencyCode;
@property (nonatomic, copy) NSString *receiptName;
@property (nonatomic, copy) NSString *applePayTransactionIdentifier;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *paymentMethodDisplayName;
@property (nonatomic, copy) NSDate *createdAt;
@property (nonatomic) short positionIndex;

- (void).cxx_construct;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (void).cxx_destruct;

@end
