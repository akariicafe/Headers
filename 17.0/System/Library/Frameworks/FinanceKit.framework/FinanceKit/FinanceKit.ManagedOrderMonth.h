@class NSSet;

@interface FinanceKit.ManagedOrderMonth : NSManagedObject

@property (nonatomic) short year;
@property (nonatomic) short month;
@property (nonatomic) short countOfOrders;
@property (nonatomic) short countOfOrdersThatShowAsActive;
@property (nonatomic, retain) NSSet *orders;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
