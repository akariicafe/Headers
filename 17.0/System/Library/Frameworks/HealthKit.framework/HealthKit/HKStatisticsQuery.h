@class NSString, NSDateInterval;

@interface HKStatisticsQuery : HKQuery <HKStatisticsQueryClientInterface> {
    BOOL _requireQuantityType;
}

@property (readonly, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long mergeStrategy;
@property (retain, nonatomic, getter=_dateInterval, setter=_setDateInterval:) NSDateInterval *dateInterval;
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
- (id)_filter;
- (void)queue_populateConfiguration:(id)a0;
- (id)_filterForDateInterval:(id)a0;
- (void)client_deliverStatistics:(id)a0 forQuery:(id)a1;
- (id)initWithQuantityType:(id)a0 quantitySamplePredicate:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (id)initWithSampleType:(id)a0 samplePredicate:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;

@end
