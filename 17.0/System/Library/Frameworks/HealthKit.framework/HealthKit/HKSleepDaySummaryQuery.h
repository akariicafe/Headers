@class NSString, HKSleepDaySummaryCacheSettings, NSCalendar, NSMutableArray;

@interface HKSleepDaySummaryQuery : HKQuery <HKSleepDaySummaryQueryClientInterface> {
    id /* block */ _resultsHandler;
    NSMutableArray *_summariesPendingDelivery;
}

@property (copy, nonatomic) HKSleepDaySummaryCacheSettings *cacheSettings;
@property (copy, nonatomic) NSCalendar *calendarOverrides;
@property (readonly, nonatomic) struct { long long start; long long duration; } morningIndexRange;
@property (readonly, nonatomic) BOOL ascending;
@property (readonly, nonatomic) long long limit;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) BOOL skipDaysWithoutSleepAnalysis;
@property (readonly, nonatomic) BOOL onlySleepAnalysis;
@property (readonly, nonatomic) BOOL surfaceSleepStages;
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
- (id)initWithMorningIndexRange:(struct { long long x0; long long x1; })a0 ascending:(BOOL)a1 limit:(long long)a2 options:(unsigned long long)a3 resultsHandler:(id /* block */)a4;

@end
