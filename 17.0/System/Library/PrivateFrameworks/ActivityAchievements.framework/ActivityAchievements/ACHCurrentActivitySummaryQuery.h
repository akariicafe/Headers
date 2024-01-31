@class NSDictionary, NSString;

@interface ACHCurrentActivitySummaryQuery : HKQuery <ACHCurrentActivitySummaryClientInterface>

@property (copy, nonatomic) id /* block */ updateHandler;
@property (retain, nonatomic) NSDictionary *collectionIntervals;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;

- (void)queue_validate;
- (void)_setCollectionIntervals:(id)a0;
- (void)queue_deliverError:(id)a0;
- (void).cxx_destruct;
- (id)initWithUpdateHandler:(id /* block */)a0;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void)queue_queryDidDeactivate:(id)a0;
- (void)client_deliverTodaySummary:(id)a0 changedTodayFields:(unsigned long long)a1 yesterdaySummary:(id)a2 changedYesterdayFields:(unsigned long long)a3 queryUUID:(id)a4;
- (void)queue_populateConfiguration:(id)a0;

@end
