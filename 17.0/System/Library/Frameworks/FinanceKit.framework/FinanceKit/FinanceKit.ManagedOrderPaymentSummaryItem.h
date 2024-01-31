@class _TtC10FinanceKit15LocalizedString, NSDecimalNumber, NSString;

@interface FinanceKit.ManagedOrderPaymentSummaryItem : NSManagedObject

@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *label;
@property (nonatomic, retain) NSDecimalNumber *valueAmount;
@property (nonatomic, copy) NSString *valueCurrencyCode;
@property (nonatomic) short positionIndex;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
