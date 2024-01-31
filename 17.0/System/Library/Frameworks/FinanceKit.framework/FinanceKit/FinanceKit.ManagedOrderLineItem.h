@class NSString, _TtC10FinanceKit15LocalizedString, NSDecimalNumber;

@interface FinanceKit.ManagedOrderLineItem : NSManagedObject

@property (nonatomic, copy) NSString *image;
@property (nonatomic) long long quantity;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *subtitle;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *title;
@property (nonatomic) short positionIndex;
@property (nonatomic, retain) NSDecimalNumber *priceAmount;
@property (nonatomic, copy) NSString *priceCurrency;
@property (nonatomic, copy) NSString *sku;
@property (nonatomic, copy) NSString *gtin;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
