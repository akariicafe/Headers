@class NSString, NSDate, _TtC10FinanceKit16ManagedOrderType, _TtC10FinanceKit22ManagedOrderWebService;

@interface FinanceKit.ManagedPendingApplePayOrder : NSManagedObject

@property (nonatomic, copy) NSString *transactionIdentifier;
@property (nonatomic, copy) NSString *orderTypeIdentifier;
@property (nonatomic, copy) NSString *orderIdentifier;
@property (nonatomic, copy) NSString *authenticationToken;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic) long long requestAttemptCount;
@property (nonatomic, copy) NSDate *lastRequestAttemptDate;
@property (nonatomic) long long responseCount;
@property (nonatomic, retain) _TtC10FinanceKit16ManagedOrderType *orderType;
@property (nonatomic, retain) _TtC10FinanceKit22ManagedOrderWebService *orderWebService;

- (BOOL)validateForUpdate:(id *)a0;
- (BOOL)validateForInsert:(id *)a0;
- (void)awakeFromInsert;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
