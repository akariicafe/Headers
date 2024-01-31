@class NSString, NSCalendar, NSMutableArray;

@interface HKMHDaySummaryQuery : HKQuery <HKMHDaySummaryQueryClientInterface> {
    id /* block */ _resultsHandler;
    NSMutableArray *_summariesPendingDelivery;
}

@property (readonly, nonatomic) struct { long long start; long long duration; } dayIndexRange;
@property (readonly, nonatomic) NSCalendar *gregorianCalendar;
@property (readonly, nonatomic) BOOL ascending;
@property (readonly, nonatomic) long long limit;
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
- (void)client_deliverDaySummaries:(id)a0 clearPending:(BOOL)a1 isFinalBatch:(BOOL)a2 queryUUID:(id)a3;
- (id)initWithDayIndexRange:(struct { long long x0; long long x1; })a0 gregorianCalendar:(id)a1 ascending:(BOOL)a2 limit:(long long)a3 resultsHandler:(id /* block */)a4;

@end
