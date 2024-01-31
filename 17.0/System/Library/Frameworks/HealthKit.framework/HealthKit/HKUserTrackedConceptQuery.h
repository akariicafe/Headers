@class NSString, NSArray;

@interface HKUserTrackedConceptQuery : HKQuery <HKUserTrackedConceptQueryClientInterface> {
    NSArray *_sortDescriptors;
    id /* block */ _handler;
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
- (void)_enumerateUserTrackedConceptsWithHandler:(id)a0 handler:(id /* block */)a1;
- (void)client_deliverUserTrackedConcepts:(id)a0 queryUUID:(id)a1;
- (id)initWithUserTrackedConceptType:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2 resultsHandler:(id /* block */)a3;

@end
