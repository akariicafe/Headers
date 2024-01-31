@class NSString, HKQueryAnchor, NSArray;

@interface HKUserDomainConceptQuery : HKQuery <HKUserDomainConceptQueryClientInterface> {
    HKQueryAnchor *_anchor;
    unsigned long long _limit;
    NSArray *_sortDescriptors;
    id /* block */ _batchHandler;
}

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
- (void)_enumerateResultsWithHandler:(id)a0 handler:(id /* block */)a1;
- (void)client_deliverResults:(id)a0 queryUUID:(id)a1;
- (id)initWithPredicate:(id)a0 anchor:(id)a1 limit:(unsigned long long)a2 sortDescriptors:(id)a3 batchHandler:(id /* block */)a4;
- (id)initWithPredicate:(id)a0 anchor:(id)a1 limit:(unsigned long long)a2 sortDescriptors:(id)a3 resultsHandler:(id /* block */)a4;

@end
