@class NSString, _TtC10FinanceKit22ManagedOrderWebService, NSDate;

@interface FinanceKit.ManagedOrderWebServiceLogEntry : NSManagedObject

@property (nonatomic) short levelValue;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, retain) _TtC10FinanceKit22ManagedOrderWebService *orderWebService;

- (BOOL)validateForUpdate:(id *)a0;
- (BOOL)validateForInsert:(id *)a0;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
