@class NSString, NSSet, NSURL, NSDate, _TtC10FinanceKit16ManagedOrderType;

@interface FinanceKit.ManagedOrderWebService : NSManagedObject

@property (nonatomic, copy) NSString *orderTypeIdentifier;
@property (nonatomic, copy) NSURL *baseURL;
@property (nonatomic, retain) _TtC10FinanceKit16ManagedOrderType *orderType;
@property (nonatomic) long long updateSequenceNumber;
@property (nonatomic) long long fetchChangesSequenceNumber;
@property (nonatomic, copy) NSString *lastModifiedValue;
@property (nonatomic, copy) NSDate *lastModifiedValueModificationDate;
@property (nonatomic) long long requestAttemptCount;
@property (nonatomic, copy) NSDate *lastRequestAttemptDate;
@property (nonatomic, retain) NSSet *pendingApplePayOrders;
@property (nonatomic, retain) NSSet *orders;
@property (nonatomic, retain) NSSet *orderRegistrations;
@property (nonatomic) long long countOfOrdersWithEffectiveAutomaticUpdatesEnabled;
@property (nonatomic, retain) NSSet *logEntries;
@property (nonatomic) long long countOfLogEntries;

- (BOOL)validateForUpdate:(id *)a0;
- (BOOL)validateForInsert:(id *)a0;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
