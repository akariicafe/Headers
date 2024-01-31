@class NSArray, NSString, NSDateComponents, NSDate, HKQuantityType;

@interface HKValueHistogramCollectionQuery : HKQuery <HKValueHistogramCollectionQueryClientInterface>

@property (copy, nonatomic) id /* block */ resultsHandler;
@property (readonly, copy, nonatomic) HKQuantityType *quantityType;
@property (readonly, copy, nonatomic) NSDate *anchorDate;
@property (readonly, copy, nonatomic) NSDateComponents *intervalComponents;
@property (readonly, copy, nonatomic) NSArray *quantityRanges;
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
- (void)client_deliverValueHistogramCollection:(id)a0 forQuery:(id)a1;
- (id)initWithQuantityType:(id)a0 quantitySamplePredicate:(id)a1 anchorDate:(id)a2 intervalComponents:(id)a3 quantityRanges:(id)a4 resultsHandler:(id /* block */)a5;

@end
