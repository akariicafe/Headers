@class NSString, _TtC10FinanceKit12ManagedOrder, _TtC10FinanceKit22ManagedOrderWebService, _TtC10FinanceKit16ManagedOrderType, NSDate;

@interface FinanceKit.ManagedOrderRegistration : NSManagedObject

@property (nonatomic, retain) _TtC10FinanceKit16ManagedOrderType *orderType;
@property (nonatomic, copy) NSString *orderTypeIdentifier;
@property (nonatomic, copy) NSString *orderIdentifier;
@property (nonatomic, retain) _TtC10FinanceKit22ManagedOrderWebService *orderWebService;
@property (nonatomic, retain) _TtC10FinanceKit12ManagedOrder *order;
@property (nonatomic, copy) NSString *deviceLibraryIdentifier;
@property (nonatomic, copy) NSString *authenticationToken;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSDate *cancellationDate;
@property (nonatomic) BOOL isMaybeRegistered;
@property (nonatomic) long long requestAttemptCount;
@property (nonatomic, copy) NSDate *lastRequestAttemptDate;

- (BOOL)validateForUpdate:(id *)a0;
- (BOOL)validateForInsert:(id *)a0;
- (void)awakeFromInsert;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
