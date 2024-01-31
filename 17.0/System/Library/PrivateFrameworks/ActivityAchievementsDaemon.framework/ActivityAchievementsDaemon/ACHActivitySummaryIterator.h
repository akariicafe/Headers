@class NSCalendar, HKTaskServerProxyProvider, HKHealthStore, NSString;

@interface ACHActivitySummaryIterator : NSObject <_HKXPCExportable>

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider;
@property (nonatomic) BOOL includePrivateProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)exportedInterface;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)a0 shouldIncludePrivateProperties:(BOOL)a1;
- (void)enumerateActivitySummariesForDateComponentInterval:(id)a0 includeNilSummaries:(BOOL)a1 handler:(id /* block */)a2 errorHandler:(id /* block */)a3;
- (void)connectionInvalidated;
- (id)newEmptyActivitySummaryFromSummary:(id)a0;
- (void)_enumerateActivitySummariesIncludingEmptySummariesForDateComponentInterval:(id)a0 handler:(id /* block */)a1 errorHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)enumerateActivitySummariesForDateComponentInterval:(id)a0 handler:(id /* block */)a1 errorHandler:(id /* block */)a2;

@end
