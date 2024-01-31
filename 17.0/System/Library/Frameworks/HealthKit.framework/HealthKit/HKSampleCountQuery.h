@class NSSet, NSString;

@interface HKSampleCountQuery : HKQuery <HKSampleCountQueryClientInterface> {
    id /* block */ _resultsHandler;
    id /* block */ _sampleTypeCountResultsHandler;
}

@property (readonly, copy, nonatomic) NSSet *sampleTypes;
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
- (void)client_deliverSampleCountDictionary:(id)a0 forQuery:(id)a1;
- (void)client_deliverSampleTypeCountDictionary:(id)a0 forQuery:(id)a1;
- (id)initWithQueryDescriptors:(id)a0 resultsHandler:(id /* block */)a1;
- (id)initWithResultsHandler:(id /* block */)a0;
- (id)initWithSampleType:(id)a0 predicate:(id)a1 resultsHandler:(id /* block */)a2;
- (id)initWithSampleTypes:(id)a0 predicate:(id)a1 resultsHandler:(id /* block */)a2;

@end
