@class NSString, NSCalendar;

@interface HKMHValenceSummaryQuery : HKQuery <HKMHValenceSummaryQueryClientInterface> {
    id /* block */ _resultsHandler;
}

@property (readonly, nonatomic) struct { long long start; long long duration; } dayIndexRange;
@property (readonly, nonatomic) NSCalendar *gregorianCalendar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)configurationClass;
+ (void)configureClientInterface:(id)a0;
+ (id)clientInterfaceProtocol;

- (void)queue_validate;
- (void)queue_deliverError:(id)a0;
- (void).cxx_destruct;
- (void)queue_queryDidDeactivate:(id)a0;
- (void)queue_populateConfiguration:(id)a0;
- (id)initWithDayIndexRange:(struct { long long x0; long long x1; })a0 gregorianCalendar:(id)a1 predicate:(id)a2 resultsHandler:(id /* block */)a3;
- (void)client_deliverValenceSummary:(id)a0 queryUUID:(id)a1;

@end
