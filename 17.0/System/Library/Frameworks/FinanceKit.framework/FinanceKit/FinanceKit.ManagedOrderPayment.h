@class NSDecimalNumber, NSString, NSSet, NSArray, NSNumber;

@interface FinanceKit.ManagedOrderPayment : NSManagedObject {
    void /* unknown type, empty encoding */ statusValueKey;
}

@property (nonatomic, retain) NSNumber *primitiveStatusValue;
@property (nonatomic, retain) NSDecimalNumber *totalAmount;
@property (nonatomic, copy) NSString *totalCurrencyCode;
@property (nonatomic, retain) NSSet *summaryItemObjects;
@property (nonatomic, copy) NSArray *paymentMethods;
@property (nonatomic, retain) NSSet *applePayTransactionIdentifierObjects;
@property (nonatomic, retain) NSSet *transactionObjects;

- (void).cxx_construct;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (void).cxx_destruct;

@end
